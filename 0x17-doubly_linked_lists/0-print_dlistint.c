#!/usr/bin/python3
class DListNode:
    def __init__(self, value):
        self.n = value
        self.prev = None
        self.next = Nonenode1 = DListNode(1)
node2 = DListNode(2)
node3 = DListNode(3)

node1.next = node2
node2.prev = node1
node2.next = node3
node3.prev = node2
head = node1
print_dlistint(head)
