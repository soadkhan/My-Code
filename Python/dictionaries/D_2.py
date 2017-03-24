def main():
    my_map = {}
    my_map["soad"] = "khan"
    my_map["bal"]  = "abal"
    my_map["khan"] = "soad"
    my_map["heaven"] = "earth"

    while True:
        doom = input()
        if doom == "":
            break
        if doom in my_map:
            print(my_map[doom])
        else:
            print("upps .... :( ")

    #while ends...



#main ends.....



if __name__ == '__main__':
    main()