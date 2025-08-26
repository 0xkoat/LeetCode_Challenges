class MyStack:

    def __init__(self):
        self.q = []
        

    def push(self, x: int) -> None:
        self.q.append(x)
        counter = 0
        while counter < len(self.q)-1 :
            counter += 1
            first_element = self.q[0]
            self.q = self.q[1:]
            self.q.append(first_element)
     

    def pop(self) -> int:
        first_element = self.q[0] 
        self.q = self.q[1:]
        return first_element
        

    def top(self) -> int:
        return self.q[0]
        

    def empty(self) -> bool:
        return len(self.q) == 0
        
