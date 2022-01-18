from typing import Any


class Node:
    def __init__(self, value: Any = None) -> None:
        """Each Node that maybe stored in a Linked List

        Args:
            value (Any, optional): Value to be stored inside the Node. Defaults to None.
        """
        self.left = None
        self.value = value
        self.right = None
    
    def __str__(self) -> str:
        return str(self.value)

class doubly_linked_list:
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
        self.rear = self.head
        self.length = 0

    def isEmpty(self) -> bool:
        """Check if the Linked List is empty.

        Returns:
            bool: True if empty, False otherwise
        """
        return True if self.head == self.rear and self.head.value == None else False

    def insert(self, index:int, value: Any) -> None:
        """Insert a new node into user-defined place in the Linked List

        Args:
            index (int): Poisiton at which the node is to be inserted
            value (Any): value to be inserted in the List
        """
        if self.isEmpty():
            self.head.value = value
        
        elif index == 0:
            ## create a new node
            node = Node(value)

            # assign the left of head to be the new node
            self.head.left = node

            # assign the left of new Node to be None
            node.left = None
            # assign the right of new Node to be ex-head
            node.right = self.head

            # make the new node as the head
            self.head = node
            
        elif index >= self.length:
            ## create a new node
            node = Node(value)

            # assign the right of rear to be the new node
            self.rear.right = node

            # assign the left of new Node to be the ex-rear
            node.left = self.rear
            # assign the right of new Node to be None
            node.right = None

            # make the new node as the head
            self.rear = node

        else:
            if self.length - index <= self.length/2:
                # iterate 'node' until position-1 place is reached.
                x = 1
                node = self.rear
                while(x<self.length - index):
                    if node.left != None:
                        node = node.left
                    x+=1
                
                # add into position the new node
                temp_left = node.left
                node.left = Node(value)
                node.left.left = temp_left
                node.left.right = node
            
            else:
                # iterate 'node' until position-1 place is reached.
                x = 1
                node = self.head
                while(x<index):
                    if node.right != None:
                        node = node.right
                    x+=1
                
                # add into position the new node
                temp_right = node.right
                node.right = Node(value)
                node.right.left = node
                node.right.right = temp_right
        
        self.length += 1

    def append(self, value: Any, start: bool = False) -> None:
        """Add a node in front or rear of the Linked List

        Args:
            value (Any): Value to be added into the node
            start (bool): whether to append at the beginning
        """

        self.insert(0, value) if start else self.insert(self.length, value)

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
            if self.head == self.rear:
                #there is only 1 node in the List
                value_to_return = self.head.value
                self.head.value = None
            else:                
                self.head.right.left = None
                temp = self.head.right 
                self.head.right = None
                self.head = temp
            
        elif index >= self.length - 1:
            if self.head == self.rear:
                #there is only 1 node in the List
                value_to_return = self.rear.value
                self.rear.value = None
            else:
                self.rear.left.right = None
                temp = self.rear.left
                self.rear.left = None
                self.rear = temp
            
        else:
            if self.length - index <= self.length/2:
                x = 2
                node = self.rear
                while(x<index):
                    if node.left != None:
                        node = node.left
                    x+=1
                
                if node.left == None:
                    return
                

                # delete next node
                value_to_return = node.left.value
                node.left.right = None
                temp = node.left.left
                node.left.left = None
                node.left = temp

            else:
                x = 1
                node = self.head
                while(x<index):
                    if node.right != None:
                        node = node.rigt
                    x+=1
                
                if node.right == None:
                    return                

                # delete next node
                value_to_return = node.right.value
                node.right.left = None
                temp = node.right.right
                node.right.right = None
                node.right = temp

        self.length -= 1
        return value_to_return
    
    def pop(self, reverse: bool = False) -> Any:
        """Remove the element at the end(default) or beginning of the List

        Args:
            reverse (bool): If True, Pops element from the beginning of list, else at the end of the list

        Returns:
            Any: The value of the Node removed
        """
        return self.delete(0) if reverse else self.delete(self.length)

    def remove(self, value: Any, reverse: bool = False) -> Any:
        """Delete first Node from the List with content as 'value'

        Args:
            value (Any): content of the node to be deleted
            reverse (bool): Whether to search the item from the rear side of the list.

        Returns:
            Any: content of the deleted node
        """
        if self.isEmpty():
            return
        
        if reverse:
            node = self.rear
            for i in range(self.length):
                if node.value != value:
                    node = node.left
                else:
                    return self.delete(self.length - i - 1)
        else:
            node = self.head
            for i in range(self.length):
                if node.value != value:
                    node = node.right
                else:
                    return self.delete(i)
    
    #def reverse(self) -> None:
        """Reverse the entire Linked List
        """
    #    self.head, self.rear = self.rear, self.head
    #    self.isReverse = True if self.isReverse == False else False
    
    def __str__(self) -> str:
        """Print the contents of entire Linked List

        Returns:
            str: Contents of Linked List as a simple Python List
        """

        #if Linked List is empty, return empty list
        if self.isEmpty():
            return str([])

        list_of_values = []
        node = self.head

        for i in self:
            list_of_values.append(i.value)
        
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

        for i in self:
            if i.value == key:
                return True
        
        return False
    
    def __add__(self, another_list):
        """Overloads '+' operator of Python to add two Linked Lists

        Args:
            another_list (<linked_list>): Linked List to be added to the current Linked List

        Returns:
            <linked_list>: returns self (the first operand of the expression A + B)
        """
        self.rear.right = another_list.head
        another_list.head.left = self.rear

        self.rear = another_list.rear
        another_list.head = self.head

        temp = self.length
        self.length += another_list.length
        
        another_list.length += temp
        return self

    def __iter__(self, reverse: bool = False) -> Node:
        """Used to make the Linked List Iterable

        Yields:
            <Node>: Node of the Linked List
        """

        node = self.head

        if reverse or ((self.head.right == None and self.rear.left == None) and (self.head.left != None and self.rear.right != None)):
            while(node.left != None):
                yield node
                node = node.left            
            yield node
        
        else:
            while(node.right != None):
                yield node
                node = node.right            
            yield node       
    
    def __len__(self) -> int:
        """Used to find length of the Linked List

        Returns:
            <int>: length of the Linked List
        """
        return self.length

if __name__ == "__main__":
    my_list = doubly_linked_list()
    
    my_list.append(10)
    my_list.append(20)
    my_list.append(30)
    my_list.append(40)
    
    print(my_list.head, my_list.rear)
    for i in my_list:
        print(i.left, i.value, i.right)            # prints 10 20 30 40

    print(my_list)          # prints [10, 20, 30, 40]

    print(len(my_list))     # prints 4

    #my_list.reverse()
    for i in my_list:
        print(i.left, i.value, i.right)            # prints 10 20 30 40
    print(my_list.head, my_list.rear)

    print(my_list)          # prints [40, 30, 20, 10]
    print(20 in my_list)    # prints True

    list2 = doubly_linked_list()
    list2.append(50)
    list2.insert(1, 60)
    list2.insert(2, 70)
    list2.insert(1, 55)

    print(list2)            # prints [50, 55, 60, 70]

    my_list + list2

    print(my_list)               # prints [40, 30, 20, 10, 50, 55, 60, 70]S

    print(len(my_list))          # prints 8