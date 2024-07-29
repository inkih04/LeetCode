class Solution(object):
    def searchInsert(self, nums, target):
        r = len(nums) - 1
        l = 0
        if nums[0] > target:
            return 0
        if nums[-1] < target:
            return len(nums)
        
        while l <= r:
            m = (l+r)//2
            if nums[m] > target:
                r = m -1 
            elif nums[m] < target:
                l = m + 1 
            else :
                return m
        return l
        
def main():
    s = Solution()
    list = [1,3,5,6]
    target = 2
    print(f"{s.searchInsert(list, target)}")

if __name__ == "__main__":
    main()