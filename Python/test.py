def main():
    spam = []
    n = int( input("how many dogs you have ? : "))
    for i in range( n ):
        print(str(i+1) + " " , end=' ')
        spam.append(input("input a name : "))

    #end


    while True:
        test = input("Check this : ")
        if test in spam :
            print("Got it")
        elif test == '':
            break
        else:
            print("Upps .... :( ")

    #end

#end

if __name__ == '__main__':
    main()
