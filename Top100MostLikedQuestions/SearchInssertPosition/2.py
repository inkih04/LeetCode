class Solution(object):
    def binary_search(self, n, l, r, t):
        m = (l + r)//2
        if l + 1 == r:
            return r
        if n[m] == t:
            return m
        if n[m] > t:
            return self.binary_search(n, l, m, t)
        if n[m] < t:
            return self.binary_search(n, m, r, t)
        return -1
    

    def searchInsert(self, nums, target):
        if nums[0] > target:
            return 0
        if nums[-1] < target:
            return len(nums)
        return self.binary_search(nums, 0, len(nums), target)
    
    
    
def main():
    s = Solution()
    list = [1,3,5,6]
    target = 5
    print(f"{s.searchInsert(list, target)}")

if __name__ == "__main__":
    main()