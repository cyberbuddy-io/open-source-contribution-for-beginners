from typing import Any
from linked_list import linked_list as Llist

class LQueue:
    def __init__(self) -> None:
        self.q = Llist()
    
    def enqueue(self, value) -> None:
        self.q.insert(0, value)
    
    def dequeue(self) -> Any:
        return self.q.pop()
    
    def display(self) -> Any:
        print(self.q)
    
    def __str__(self) -> str:
        return str(self.q)

    
if __name__ == "__main__":
    my_q = LQueue()

    my_q.enqueue(10)
    my_q.enqueue(20)
    my_q.enqueue(30)
    
    my_q.display()              # prints [30, 20, 10]
    
    print(my_q.dequeue())       # prints 10
    print(my_q.dequeue())       # prints 20
    print(my_q.dequeue())       # prints 30

    print(my_q)                 # prints []
