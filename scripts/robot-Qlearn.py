import qlearn
import rospy
from math import pow, sqrt
from std_msgs.msg import Float64MultiArray

list_actions=[(Front_Right_x,2),(Front_Left_x,2),(Back_Right_x,2),(Back_Left_x,2),(Front_Right_y,2),(Front_Left_y,2),(Back_Right_y,2),(Back_Left_y,2)]

class Robot:

    def __init__(self):
        self.ai = None
        self.ai = qlearn.QLearn(actions=list_actions,
                                alpha=0.1, gamma=0.9, epsilon=0.1)
        self.stable = 0
        self.fallen = 0
        self.lastState = None
        self.lastAction = None
	
	self.position = (0,0,0)
	self.distance = 0

    def update(self):
	if not self.initialPos:
	    state = self.calcState()
            reward = -5
        
            if self.state[1] == 0: #posicio caigut
                self.fallen += 1
                reward = -1000
                if self.lastState is not None:
		    reward=self.calcReward(reward)
                    self.ai.learn(self.lastState, self.lastAction, reward, state)
                self.lastState = None

                #self.cell = pickRandomLocation()
                #return

            if self.state[1] == 2:
                self.stable += 1
                reward = 50
	        reward=self.calcReward(reward)
                #cheese.cell = pickRandomLocation()

            if self.lastState is not None:
                self.ai.learn(self.lastState, self.lastAction, reward, state)

            state = self.calcState()
            action = self.ai.chooseAction(state)
            self.lastState = state
            self.lastAction = action

            self.MoveJoint(action)
	elif self.position!=(0,0,0):
	        self.initialPos = False

    def MoveJoint(action):
	#accio de moure segons la joint i l'angle

    def calcState(self):
	if not self.initialPos:
	    if self.position==(0,0,0):
	        return 2
	    elif self.distance > 0.15: #La distancia que es vulgui considerar com a caigut
		return 0
	    else:
		return 1
	#(posicio, stable caigut o no) la posicio amb un round per tal de que es pugui donar mes d'un cop

    def calcReward(self,reward):
	self.NodeReadPosition()
	self.distance = sqrt(pow(self.position[0])+pow(self.position[1])+pow(self.position[2]))
	return 1-10*self.distance #segons mes lluny o mes aprop del (0,0,0) podria fer-se amb (1/dist)^2 si distancies llunyanes son majors a 1 i ses proximes son mes petites a 1 o (1-10*dist) pensant que distancia maxima sera 0,1 m

    def readPosition(self,data):
	self.position = (data[0],data[1],data[2]) #(x,y,z)

    def NodeReadPosition(self):
	rospy.init_node("NodeReadPosition", anonymous=True)
        rospy.Subscriber("pos", Float64MultiArray, self.readPosition)
	rospy.signal_shutdown("Ja s'ha llegit la posicio")
	


