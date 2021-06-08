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

    def add_at_idx(self, data, idx):
        """Method to add node in a linked list at a given position.
        """
        if idx == 0:
            node = Node(data)
            node.next = self.head
            self.head = node
            return
        count = 0
        curr_node = self.head
        while curr_node != None and count != idx-1:
            curr_node = curr_node.next
            count += 1
        if count == idx-1:
            node = Node(data)
            node.next = curr_node.next
            curr_node.next = node
        else:
            print(f"{idx} is not present in the linked list.")

    def delete_head(self):
        """Method to delete the head node in a linked list.
        """
        temp = self.head
        self.head = self.head.next
        del(temp)  # in python, dereferencing an object sends it to garbage collection, so this step is optional
    
    def delete_tail(self):
        """Method to delete the last node of a linked list.
        """
        curr_node = self.head
        while curr_node.next.next != None:
            curr_node = curr_node.next
        curr_node.next = None

    def delete_at_idx(self, idx):
        """Method to delete the node at a given index value.
        """
        if idx == 0:
            self.head = None
            return
        curr_node = self.head
        count = 0
        while curr_node != None and count != idx-1:
            curr_node = curr_node.next
            count += 1
        if count == idx-1:
            curr_node.next = curr_node.next.next
        else:
            print(f"{idx} does not exist for the given linked list.")

        


if __name__ == "__main__":
    llist = SinglyLinkedList()
    llist.append(3)  # head -> 3
    llist.prepend(5)  # head -> 5 -> 3
    llist.prepend(6)  # head -> 6 -> 5 -> 3 
    llist.prepend(4)  # head -> 4 -> 6 -> 5 -> 3
    llist.add_at_idx(11, 2)  # head -> 4 -> 6 -> 11 -> 5 -> 3
    llist.delete_head()  # head -> 6 -> 11 -> 5 -> 3
    llist.delete_at_idx(1)  # head -> 6 -> 5 -> 3
    llist.print_list() 
