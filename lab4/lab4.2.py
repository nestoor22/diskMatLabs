from lab4 import *

if __name__ == '__main__':

    while True:
        choice = str(input("Введіть 's' для створення стеку,'q' - черги, "
                           "'l' - для зв'язного списку, 'e' - для виходу: "))
        if choice == 's':
            A = Stack()
            while True:
                i = str(input("Введіть 'a',щоб додати елемент, 'd', щоб видалити елемент,"
                              "'e', щоб вийти: "))
                if i == 'a':
                    elem = input("Вкажіть елемент: ")
                    A.push(elem)
                    print(A)
                elif i == 'd':
                    print(A.pop())
                    print(A)
                else:
                    break
        elif choice == 'q':
            A = Queue()
            while True:
                i = str(input("Введіть 'a',щоб додати елемент, 'd', щоб видалити елемент,"
                              "'e', щоб вийти: "))
                if i == 'a':
                    elem = input("Вкажіть елемент: ")
                    A.enqueue(elem)
                    print(A)
                elif i == 'd':
                    print(A.dequeue())
                    print(A)
                else:
                    break
        elif choice == 'l':
            A = DoublyLinkedList()
            print("Введіть 'a',щоб додати елемент в кінець списку,'p',щоб додати елемент в початок списку,\n"
                          "'r', щоб видалити перший елемент,'d', щоб видалити останній елемент,'m', щоб вставити елемент після позиції,\n"
                          " 's', щоб вивести список,'b',щоб видалити елемент за позицією "
                          " 'e', щоб вийти: ")
            while True:
                i = input()
                if i == 'a':
                    elem = input("Вкажіть елемент: ")
                    A.append(elem)
                    A.show(A.head)
                elif i == 'p':
                    elem = input("Вкажіть елемент: ")
                    A.push(elem)
                    A.show(A.head)
                elif i == 'd':
                    A.del_end()
                    A.show(A.head)
                elif i == 'r':
                    A.del_beg()
                    A.show(A.head)
                elif i == 'm':
                    pos = int(input("Вкажіть позицію: "))
                    el = input("Вкажіть елемент: ")
                    A.add_mid(pos,el)
                    A.show(A.head)

                elif i == 's':
                    A.show(A.head)
                elif i == 'b':
                    pos = int(input("Вкажіть позицію: "))
                    A.del_pos(pos)
                    A.show(A.head)
                else:
                    break
        else:
            break
