def main():
    spam  = [1,2,2,2,3,"i love python","mara_kha",3.14159]
    print(spam.index(2))
    print(spam.index("mara_kha"))

    print(spam.count(2))
    spam.append("bal_fala")
    print(spam)
    spam.insert(0,"shala")
    print(spam)
    spam.reverse()
    print(spam)
    spam.remove("mara_kha")
    print(spam)
    spam.__delitem__(1)
    print(spam)

    spam.clear()
    print(spam)

    spam = [3,4,5,8,7,6,2,0,1]

    spam.sort()
    print(spam)

    spam.sort(reverse=True)
    print(spam)

    del spam[3]
    print(spam)



#main ends...


if __name__ == '__main__':
    main()