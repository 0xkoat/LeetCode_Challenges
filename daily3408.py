class TaskManager:

    def __init__(self, tasks: int):
        self.task_dict = {}
        self.triplet = []
        for userId, taskId, priority in tasks :
            self.push(userId,taskId,priority)
        
    def push(self, userId,taskId, priority) :
        self.task_dict[taskId] = (userId,priority)
        self.triplet.append((priority, taskId, userId))
        i = len(self.triplet) -1
        while i>0 :
            parent = (i -1) // 2
            if (self.triplet[i][0] > self.triplet[parent][0] or (self.triplet[i][0] == self.triplet[parent][0]
                                                                  and self.triplet[i][1] > self.triplet[parent][1])) :
                self.triplet[i] = self.triplet[parent]
                self.triplet[parent] = self.triplet[i]
                i = parent
            else : 
                break
    
    def _pop(self) :
        last = self.triplet.pop()
        if not self.triplet:
            return
        self.triplet[0] = last
        i= 0, 
        n=len(self.triplet)
        while True:
            left, right, best = 2*i+1, 2*i+2, i
            if (left < n and
               (self.triplet[left][0] > self.triplet[best][0] or
               (self.triplet[left][0] == self.triplet[best][0] and self.triplet[left][1] > self.triplet[best][1]))):
                best = left
            if (right < n and
               (self.triplet[right][0] > self.triplet[best][0] or
               (self.triplet[right][0] == self.triplet[best][0] and self.triplet[right][1] > self.triplet[best][1]))):
                best = right
            if best == i:
                break
            self.triplet[i], self.triplet[best] = self.triplet[best], self.triplet[i]
            i = best     

    def add(self, userId: int, taskId: int, priority: int) -> None:
        self.push(userId,taskId,priority)
        

    def edit(self, taskId: int, newPriority: int) -> None:
        userId = self.task_dict[taskId]
        self.push(userId,taskId,newPriority)
        

    def rmv(self, taskId: int) -> None:
        if taskId in self.task_dict :
            del self.task_dict[taskId]
        

    def execTop(self) -> int:
        while self.triplet :
            priority , taskId , userId = self.triplet[0]
            if taskId in self.task_dict and self.task_dict[taskId] == (userId,priority) :
                self.rmv(taskId)
                self._pop()
                return userId
            self._pop()
        return -1
        