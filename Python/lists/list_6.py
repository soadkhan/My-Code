import copy



def main():

    spam = [1,2,3,4,5]
    blah  = spam
    spam[1] = "blah"
    print("The spam is " , spam)
    print("The blah is " , blah)
    clah = copy.copy(spam)
    clah [1] = "mara_kha"
    print("The spam is " , spam)
    print("The clah is" , clah)

#main ends....


if __name__ == '__main__':
    main()