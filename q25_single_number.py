class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        if(len(nums)==0):
            return 0
        elif(len(nums)==1):
            return nums[0]
        else:
            for i in range(0,len(nums),2):
                if(i!=len(nums)-1):
                    if(nums[i]!=nums[i+1]):
                        return nums[i]
                else:
                    return nums[i]
                
                
        return 0
        