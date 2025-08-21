class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def hasCycle(self, head: ListNode) -> bool:        
        
        checker = {}
        while head != None :
            
            if (head in checker) and (checker[head] == 1) :
                return True
            
            elif  head not in checker :
                checker.update({head : 1})
           
            else :
                checker[head] += 1
            
            head = head.next

        return False