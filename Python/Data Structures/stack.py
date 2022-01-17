from typing import Any, Boolean


class Stack:
    def __init__(self) -> None:
        """Creates a stack data structure

        Methods:
        push, pop, display, isEmpty
        """
        self.stck = []
    
    def __str__(self) -> str:
        return str(self.stck)
    
    def push(self, element) -> None:
        """Add an element to the top of the stack

        Args:
            element (<Any>): Object to be added to the top of the stack
        """
        self.stck.append(element)
    
    def pop(self) -> Any:
        """Remove an element from the top of the stack

        Raises:
            Exception: Stack Underflow

        Returns:
            <Any>: Top element of the stack that is popped
        """
        if not self.isEmpty():
            top = self.stck[-1]
            self.stck = self.stck[:-1]
            return top
        else:
            raise Exception("Stack Underflow")
    
    def isEmpty(self) -> Boolean:
        """Checks if the stack is empty or not

        Returns:
            Bool: True if the stack is empty, False otherwise
        """
        return True if self.stck == [] else False
    
    def display(self) -> None:
        """Print the entire stack as a string
        """
        print(self.stck)