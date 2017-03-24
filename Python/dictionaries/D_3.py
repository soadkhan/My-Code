def main():
    my_map= {}

    while True:
        key = input("Key please : ")
        if key == "":
            break
        value = input("Value please :")


        my_map[key] = value

    #while ends...

    print("printing keys : ")
    for i in my_map.keys():
        print(i,end=" ")
    print("\nprinting values : ")
    for v in my_map.values():
        print(v,end=" ")
    print("\nprinting items : ")
    for  g , h in my_map.items():
        print("key : " + g + " value : " + h )


#main ends ...


if __name__ == '__main__':
    main()