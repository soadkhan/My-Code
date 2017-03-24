

def str_rep_char(spam , pos , sub):

    newSpam = spam[:pos] + sub + spam[pos+1:]
    return newSpam

#ends function.....

def main():
    name = 'Zophie a cat'
    name = str_rep_char(name, 2,"...")

    print(name)

#main ends...


if __name__ == '__main__':
    main()