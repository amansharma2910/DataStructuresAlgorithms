class Node:
    # Node class constructor
    def __init__(self, data):
        self.data = data
        self.next = None

class SinglyLinkedList:
    # LinkedList constructor
    def __init__(self):
        self.head = None

    def print_list(self):
        """Method to print all the elements in a singly linked list.
        """
        node = self.head
        while node is not None:
            print(node.data, end=" ")
            node = node.next

    def append(self, data):
        """Method to add node to the end of the linked list."""
        node = Node(data)
        
        # check the base case where the singly linked list is empty, i.e., head is None
        if self.head is None:
            self.head = node
            return 

        temp = self.head
        while temp.next is not None:
            temp = temp.next

        temp.next = node

    def prepend(self, data):
        """Method to add node to the beginning of the linked list."""
        node = Node(data)
        node.next = self.head
        self.head = node

if __name__ == "__main__":
    llist = SinglyLinkedList()
    llist.prepend(5)
    llist.prepend(6)
    llist.prepend(4)
    llist.print_list()  