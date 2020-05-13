import random
ran=random.randint(1,10)


def play():
    
    while(True):
        inp=int(input("Enter the guess numbernumber ="))
        if(inp>ran):
            print("You guess wrong number, enter a smaller number")
        elif(inp<ran):
            print("You guess wrong number, enter a grater number")
        else:
            print("Congratulations you are guess a ** Right number ")
            inl=int(input("if you want to paly again then click on  '1' otherwise '2' ="))
            if(inl==1):
                play()
            elif(inl==2):
            	print("Ok! when you free then take enjoy of this")
            	break;
            else:
            	print("You are enter a wrong number, play again later")
            	break;
        
play()
    
    