import gc

class Node(object):
    def __init__(self, value= None,next=None):
        self.value = value
        self.next = next

class Stack(object):
    def __init__(self):
        self.head = None

    def push(self, value):
        self.head = Node(value, self.head)

    def pop(self):
        if self.is_empty():
            return "Стек пустий"
        value = self.head.value
        self.head = self.head.next
        return value

    def is_empty(self):
        return self.head is None

    def __str__(self):
        if self.head is not None:
            current = self.head
            array = '[' + str(current.value)
            while current.next is not None:
                current = current.next
                array += ' ' + str(current.value)
            return array + ']'
        return '[]'

class Queue(object):
    def __init__(self):
        self.head = None
        self.rear = None

    def enqueue(self, value):
        new_node = Node(value)
        if self.head is None:
            self.head = new_node
            self.rear = self.head
            return
        self.rear.next = new_node
        self.rear = new_node

    def dequeue(self):
        if self.is_empty():
            return "Черга порожня"

        value = self.head.value
        self.head = self.head.next

        if self.head is None:
            self.rear = None
        return value

    def is_empty(self):
        return self.head is None

    def __str__(self):
        if self.head is not None:
            current = self.head
            array = '[' + str(current.value)
            while current.next is not None:
                current = current.next
                array += ' ' + str(current.value)
            return array + ']'
        return '[]'


class DNode:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

class DoublyLinkedList:

    def __init__(self):
        self.head = None

    def push(self, new_data):
        new_node = DNode(new_data)
        new_node.next = self.head
        if self.head is not None:
            self.head.prev = new_node
        self.head = new_node

    def add_mid(self, prev_node, new_data):
        pr_node = self.head
        while prev_node > 0:
            pr_node = self.head.next
            prev_node -=1
        if pr_node is None:
            return
        new_node = DNode(new_data)
        new_node.next = pr_node.next
        pr_node.next = new_node
        new_node.prev = pr_node

        if new_node.next is not None:
            new_node.next.prev = new_node

    def append(self, new_data):
        new_node = DNode(new_data)
        new_node.next = None
        if self.head is None:
            new_node.prev = None
            self.head = new_node
            return
        last = self.head
        while (last.next is not None):
            last = last.next
        last.next = new_node
        new_node.prev = last
        return

    def deleteNode(self, delnode):

        if self.head is None or delnode is None:
            return
        if self.head == delnode:
            self.head = delnode.next
        if delnode.next is not None:
            delnode.next.prev = delnode.prev
        if delnode.prev is not None:
            delnode.prev.next = delnode.next
        gc.collect()
    def show(self, node):
        res = '['
        while node is not None:
            res += str(node.data) + ' '
            node = node.next
        res += ']'
        print(res)

    def del_beg(self):
        self.deleteNode(self.head)

    def del_end(self):
        if self.head.next == None:
            self.deleteNode(self.head)
            return
        node = self.head
        while node.next is not None:
            node = node.next
        self.deleteNode(node)

    def del_pos(self,pos):
        if pos == 0:
            self.del_beg()
            return
        node = self.head
        while pos > 1:
            node = node.next
            pos -= 1
        self.deleteNode(node)
