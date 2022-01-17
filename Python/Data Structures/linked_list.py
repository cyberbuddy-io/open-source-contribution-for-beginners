from typing import Any
from xmlrpc.client import Boolean


class Node:
    def __init__(self, value: Any = None) -> None:
        """Each Node that maybe stored in a Linked List

        Args:
            value (Any, optional): Value to be stored inside the Node. Defaults to None.
        """
        self.value = value
        self.next = None
    
    def isLast(self) -> Boolean:
        """Check if the current Node is the last one

        Returns:
            Boolean: True if Last Node, False otherwise
        """
        return True if self.next == None else False 

class linked_list:
    def __init__(self) -> None:
        """Linked List Data Structure.

        Available Methods: isEmpty(), insert(position, element), append(element) delete(value), reverse()
        Operators: in, +
        """
        self.head = Node()
    
    def isEmpty(self) -> Boolean:
        """Check if the Linked List is empty.

        Returns:
            Boolean: True if empty, False otherwise
        """
        return True if self.head.value == self.head.next == None else False

    def insert(self, position:int, value: Any) -> None:
        """Insert a new node into user-defined place in the Linked List

        Args:
            position (int): Poisiton at which the node is to be inserted
            value (Any): value to be inserted in the List
        """
        if position == 0:
            # position = 0 means appending, so do that only
            self.append(value)
        else:
            # iterate 'node' until position-1 place is reached.
            x = 1
            node = self.head
            while(x<position):
                if node.next != None:
                    node = node.next
                x+=1
            
            # add into position the new node
            temp = node.next
            node.next = Node(value)
            node.next.next = temp

    def append(self, value: Any) -> None:
        """Add a node in front of the Linked List

        Args:
            value (Any): Value to be added into the node
        """
        if not self.isEmpty():
            node = Node(value)
            node.next = self.head
            self.head = node
        else:
            self.head.value = value

    def delete(self, value: Any) -> Any:
        """Delete first Node from the List with content as 'value'

        Args:
            value (Any): content of the node to be deleted

        Returns:
            Any: content of the deleted node
        """
        if self.isEmpty():
            return
        
        #check if the head of the list is the value to be deleted
        if self.head.value == value:
            # exchange head and head+1 node
            value_to_return = self.head.value
            self.head.value = self.head.next.value
            #delete head+1 node
            self.head.next = self.head.next.next
            return value_to_return
        
        #if the value to be deleted is not head
        node = self.head

        #loop until the Value of the next node to the 'node' is the one we have to delete, or we reach the last node.
        while(not node.isLast() and node.next.value != value):            
            node = node.next
        
        #if the node is the lst one, value not found, do nothing
        if node.isLast():
            return
        else:
            #else delete the next node to the 'node'
            value_to_return = node.next.value
            node.next = node.next.next  #deleted successfully
            return value_to_return
    
    def reverse(self) -> None:
        """Reverse the entire Linked List
        """
        previous_node = None
        current_node = self.head

        # Iterate until last node is reached
        while(current_node != None):
            # reverse the Pointing arrow of each Node in a logical Linked List
            temp = current_node.next
            current_node.next = previous_node
            
            previous_node = current_node
            current_node = temp
        
        # change the head of the list to the new position
        self.head = previous_node
    
    def __str__(self) -> str:
        """Print the contents of entire Linked List

        Returns:
            str: Contents of Linked List as a simple Python List
        """

        #if Linked List is empty, return empty list
        if self.isEmpty():
            return str([])

        list_of_values = [self.head.value]
        node = self.head

        # iterate through entire Linked
        while(node.next != None):
            node = node.next
            # append every node's value to the list_of_values
            list_of_values.append(node.value)
        
        # return the list as a string
        return str(list_of_values)
    
    def __contains__(self, key: Any) -> Boolean:
        """Overloads 'in' operator of Python

        Args:
            key (Any): Value to be checked if exists in the Linked List

        Returns:
            Boolean: True if it is present in the List, False otherwise
        """

        # empty list contains nothing
        if self.isEmpty():
            return False

        list_of_values = [self.head.value]
        node = self.head

        # iterate through entire Linked
        while(node.next != None):
            node = node.next
            # append every node's value to the list_of_values
            list_of_values.append(node.value)

        # return True if key in the list_of_values
        return key in list_of_values
    
    def __add__(self, another_list):
        """Overloads '+' operator of Python to add two Linked Lists

        Args:
            another_list (<linked_list>): Linked List to be added to the current Linked List

        Returns:
            <linked_list>: returns self (the first operand of the expression A + B)
        """
        node = self.head

        # go to the end of current list
        while(node.next != None):
            node = node.next
        
        # update end to point to the start of the given Linked List
        node.next = another_list.head
        return self

if __name__ == "__main__":
    my_list = linked_list()
    
    my_list.append(10)
    my_list.append(20)
    my_list.append(30)
    my_list.append(40)

    print(my_list)          # prints [40, 30, 20, 10]
    my_list.reverse()
    print(my_list)          # prints [10, 20, 30, 40]
    print(20 in my_list)    # prints True

    list2 = linked_list()
    list2.append(50)
    list2.insert(1, 60)
    list2.insert(2, 70)
    list2.insert(1, 55)
    print(list2)            # prints [50, 55, 60, 70]

    l3 = my_list + list2

    print(l3)               # prints [10, 20, 30, 40, 50, 55, 60, 70]