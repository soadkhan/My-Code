import  sys


class vector:
    def __init__(self,a,b):
        self.x  = a
        self.y  = b

    def pri(self):
        print(str(self.x)+" "+str(self.y))

def Main():

    '''


    my = vector(7,3)
    my.pri()

    #name = input()
    #print(len(name))

    a = True
    b = True

    print(a and not b)

    name  = input("Please type your name :")

    while "your name" != name :

        print(name)
        name  =  input("Please type your name :")

    #while ends...

    print("Thank You Man :) !!!!!!!!")




    num  = int(input())
    for i in range(0,num):
        print(" "*(num-i-1)+"* "*(i+1))


    '''


    while  True:
        str_response  = input()

        if str_response == "exit":
            sys.exit()

        print(str_response)
    #while ends...

    blah = input()





if __name__ == '__main__':
    Main()


