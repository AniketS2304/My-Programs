#Calculator:-by Aniket
#functions
def addition(a,b):
    return a+b

def substraction(a,b):
    return a-b

def multiplication(a,b):
    return a*b

def division(a,b):
    return a/b


#Taking user input
num1=int(input("Enter the first number:\n"))
num2=int(input("Enter the second number:\n"))

operation=int(input(
            "Press 1 for Addition\n"
            "Press 2 for Subtraction\n"
            "Press 3 for Multiplication\n"
            "Press 4 for Division\n"
            "Press 0 for exit\n"))

if operation==1:
    print(num1,"+",num2,"=",addition(num1,num2))


elif operation==2:
    print(num1,"-",num2,"=",substraction(num1,num2))

elif operation==3:
    print(num1,"X",num2,"=",multiplication(num1,num2))

elif operation==4:
    print(num1,"/",num2,"=",division(num1,num2))

elif operation==0:
    exit

else:
    print("Somethimg went wrong!!!\n"
    "Please try again...\n")
    