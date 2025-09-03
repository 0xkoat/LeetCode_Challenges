class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        temporary_node = None
        result = ListNode()
        temp = result
        while head != None and head.next != None :
            head = head.next
            temp.next = head
            temp = temp.next
            head = head.next
            temp.next = temporary_node
            temp = temp.next
            temporary_node = None

        if head != None :
            temp.next = head
        else :
            temp.next = None
        
        return result.next