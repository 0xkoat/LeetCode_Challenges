class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        
        result = ListNode()
        temp = result
        l1_str=""
        l2_str=""
        
        while l1  :
            l1_str = str(l1.val) + l1_str 
            l1 = l1.next
            
        while l2 :
            l2_str = str(l2.val) + l2_str
            l2 = l2.next

        sum = str(int(l1_str) + int(l2_str))
        for i in range (len(sum)-1 , -1 , -1):
            temp.next = ListNode(int(sum[i]))
            temp = temp.next
             
        return result.next

