def main():
    spam = []
    while True:
        name = input("Please input a name : ")
        if name == "":
            break
        spam += [name]
    #whlie ends..

    ser  = input("please input a name to search : ")

    if ser in spam:
        print(".......found......")
    else:
        print(".......Upps.......")

    for i in spam:
        print(i)
    #for ends...

#main ends...


if __name__ == '__main__':
    main()