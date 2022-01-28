"""Demonstration of Linear Search Algorithm using a simple python Counting program"""


#Creating a Infinite loop to prompt the user for a number between 1 to 100 inclusive of 1 and 100
while True:
    #Prompting the user
    inp = int(input("Enter a number between 1 to 100 or simply type n to end the loop: "))

    #Setting up the condition for the user to break out of the loop 
    if(inp == "n"):
        break
    else:
        pass

    #Creating an empty list to keep track of the tries of the algorithm
    no_of_tries = []

    #Condition to check if the input is between 1 to 100
    if inp not in range(1, 100):
        print("The number you entered is not within 1 to 100, Please try again.")
    
    else:    
        for i in range(1,100):
            if i == inp:

                #appending the no of tries in the list
                no_of_tries.append(i)
                print("Found ", i ,".")
                break
            else:

                #appending the no of tries in the list
                no_of_tries.append(i)
                
        #printing out the number of tries         
        print("The total number of tries it took to find your number was: ", len(no_of_tries))
        

