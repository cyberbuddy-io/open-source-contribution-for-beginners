from typing import Any


class Node:
    def __init__(self, value: Any = None) -> None:
        """Each Node that maybe stored in a Linked List

        Args:
            value (Any, optional): Value to be stored inside the Node. Defaults to None.
        """
        self.value = value
        self.next = None
    
    def __str__(self) -> str:
        return str(self.value)

class linked_list:
    def __init__(self) -> None:
        """Linked List Data Structure.

        Available Methods:        
        isEmpty()                   : check if Linked List is empty
        insert(index, element)      : insert element at index
        append(element)             : Add element to the end of List
        pop()                       : Remove the element at the end of List
        remove(value)               : Remove the first occurence in the list having content as 'value'
        delete(index)               : delete the node at index
        reverse()                   : Reverse the Linked List

        Operators: in, +
        Iterable : Yes
        Available functions: len()
        """
        self.head = Node()
    
    def isEmpty(self) -> bool:
        """Check if the Linked List is empty.

        Returns:
            bool: True if empty, False otherwise
        """
        return True if self.head.value == self.head.next == None else False

    def insert(self, index:int, value: Any) -> None:
        """Insert a new node into user-defined place in the Linked List

        Args:
            index (int): Poisiton at which the node is to be inserted
            value (Any): value to be inserted in the List
        """
        if index == 0:
            # position = 0
            if not self.isEmpty():
                node = Node(value)
                node.next = self.head
                self.head = node
            else:
                self.head.value = value
        else:
            # iterate 'node' until position-1 place is reached.
            x = 1
            node = self.head
            while(x<index):
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
        if self.isEmpty():
            self.insert(0, value)
        else:
            node = self.head
            # go to the end of List
            while(node.next != None):
                node = node.next
            
            # add a new node there
            node.next = Node(value)
    
    def pop(self) -> Any:
        """Remove the element at the end of the List

        Returns:
            Any: The value of the Node removed
        """
        if self.isEmpty():
            return
        
        previous_node = None
        node = self.head
        # go to the end of list
        while(node.next != None):
            previous_node = node
            node = node.next
        
        if previous_node == None:
            #there is only 1 node in the List
            value_to_return = self.head.value
            self.head.value = None
        else:
            # set end-1 th node's 'next' to None
            value_to_return = node.value
            previous_node.next = None

        # Node deleted
        return value_to_return

    def remove(self, value: Any) -> Any:
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
            if self.head.next == None:
                #there is only 1 node in the List
                value_to_return = self.head.value
                self.head.value = None
            else:
                # exchange head and head+1 node
                value_to_return = self.head.value
                self.head.value = self.head.next.value
                #delete head+1 node
                self.head.next = self.head.next.next
            
            return value_to_return
        
        #if the value to be deleted is not head
        node = self.head

        #loop until the Value of the next node to the 'node' is the one we have to delete, or we reach the last node.
        while(node.next != None and node.next.value != value):            
            node = node.next
        
        #if the node is the lst one, value not found, do nothing
        if node.next == None:
            return
        else:
            #else delete the next node to the 'node'
            value_to_return = node.next.value
            node.next = node.next.next  #deleted successfully
            return value_to_return
    
    def delete(self, index: int) -> Any:
        """Delete Node at specified index

        Args:
            index (int): position where the node is to be deleted

        Returns:
            Any: Value of the deleted node
        """
        if self.isEmpty():
            return

        if index == 0:
            if self.head.next == None:
                #there is only 1 node in the List
                value_to_return = self.head.value
                self.head.value = None
            else:
                # exchange head and head+1 node
                value_to_return = self.head.value
                self.head.value = self.head.next.value
                #delete head+1 node
                self.head.next = self.head.next.next
            
            return value_to_return
        
        x = 1
        node = self.head
        while(x<index):
            if node.next != None:
                node = node.next
            x+=1
        
        if node.next == None:
            return
        
        # delete next node
        value_to_return = node.next.value
        node.next = node.next.next

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
    
    def __contains__(self, key: Any) -> bool:
        """Overloads 'in' operator of Python

        Args:
            key (Any): Value to be checked if exists in the Linked List

        Returns:
            bool: True if it is present in the List, False otherwise
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

    def __iter__(self) -> Node:
        """Used to make the Linked List Iterable

        Yields:
            <Node>: Node of the Linked List
        """
        node = self.head
        while(node.next != None):
            yield node
            node = node.next
        
        yield node
    
    def __len__(self) -> int:
        """Used to find length of the Linked List

        Returns:
            <int>: length of the Linked List
        """
        length = 1
        node = self.head
        while(node.next != None):
            length += 1
            node = node.next
        
        return length

if __name__ == "__main__":
    my_list = linked_list()
    
    my_list.append(10)
    my_list.append(20)
    my_list.append(30)
    my_list.append(40)

    for i in my_list:
        print(i)            # prints 10 20 30 40

    print(my_list)          # prints [10, 20, 30, 40]

    print(len(my_list))     # prints 4

    my_list.reverse()

    print(my_list)          # prints [40, 30, 20, 10]
    print(20 in my_list)    # prints True

    list2 = linked_list()
    list2.append(50)
    list2.insert(1, 60)
    list2.insert(2, 70)
    list2.insert(1, 55)

    print(list2)            # prints [50, 55, 60, 70]

    l3 = my_list + list2

    print(l3)               # prints [40, 30, 20, 10, 50, 55, 60, 70]

    print(len(l3))          # prints 8