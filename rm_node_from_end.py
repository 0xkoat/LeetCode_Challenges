class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        result = ListNode()
        result.next = head
        temp = result
        final = result
        counter = 0

        while counter < n and temp.next :
            temp = temp.next
            counter += 1
        
        while temp.next :
            temp = temp.next
            final = final.next
        
        final.next = final.next.next

        return result.next
       
       
       
    
            

            



