class Queue:
    def __init__(self) -> None:
        """creates a queue data structure using linear array

        Methods: enqueue, dequeue, isEmpty
        """
        self.q = []
    
    def __str__(self) -> str:
        """Used for printing the entire queue.

        Returns:
            str: Entire Queue as string to be printed out
        """
        return str(self.q)

    def enqueue(self, element) -> None:
        """Add an object at the end of the Queue

        Args:
            element (<Any>): Object to be added to the Queue
        """
        self.q.append(element)
    
    def dequeue(self):
        """Remove and return an element from the front of the Queue

        Raises:
            Exception: Queue Underflow: Raised if the Queue is empty and nothing to return

        Returns:
            Any: Object at the front of the Queue
        """
        if not self.isEmpty():
            front = self.q[0]
            self.q = self.q[1:]
            return front
        else:
            raise Exception("Queue Underflow")
    
    def isEmpty(self):
        """Check if the Queue is Empty

        Returns:
            Boolean: True if Empty, False otherwise.
        """
        return True if self.q == [] else False