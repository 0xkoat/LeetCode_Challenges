class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def removeElements(self, head: ListNode, val: int) -> ListNode:
        result = ListNode()
        temp = result
        
        while head != None :
            if head.val != val :
                temp.next = head
                temp = temp.next
                head = head.next
            
            elif head.val == val and head.next == None : 
                temp.next = None
                break
            
            else :
                while  head != None and head.val == val  :
                    head = head.next
                
                temp.next = head
                temp = temp.next
                if head != None :
                   head = head.next

        return result.next