class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        
        position_shift = 0
        copy = nums1[0:m].copy()
        while len(copy) != 0 and len(nums2) != 0 :
        
            if copy[len(copy)-1 ] > nums2[len(nums2)-1] :
                nums1[n+m-1-position_shift] = copy[len(copy)-1 ]
                del copy[len(copy)-1 ]
                position_shift += 1

            elif copy[len(copy)-1 ] < nums2[len(nums2)-1] :
                nums1[n+m-1-position_shift] = nums2[len(nums2)-1]
                del nums2[len(nums2)-1]
                position_shift += 1 

            elif copy[len(copy)-1 ] == nums2[len(nums2)-1] :
                nums1[n+m-1-position_shift] = nums2[len(nums2)-1]
                position_shift += 1
                
                
                nums1[n+m-1-position_shift] = copy[len(copy)-1 ]
                position_shift +=1

                del nums2[len(nums2)-1]
                del copy[len(copy)-1 ]


        if copy == [] and len(nums2)>0 :
          nums1 [0:m+n-position_shift] = nums2
        elif nums2 == [] and len(copy)> 0 :
          nums1 [0:m+n-position_shift] = copy


