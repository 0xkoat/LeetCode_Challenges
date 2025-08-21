class ListNode:
  def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        reference = head 

        while (reference != None) and (reference.next != None) :
            
            if reference.val == reference.next.val :
                reference.next = reference.next.next
           
            else :
                reference = reference.next
        
        return head


    
        
        
                        
            

            
            






            







        

