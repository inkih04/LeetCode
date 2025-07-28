class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        size = len(nums)
        first = self.searchFirstRecursive(nums, target, 0, size-1)
        last = self.searchLastRecursive(nums, target, first, size-1)
        return first, last


    def searchFirstRecursive(self, nums, target, start, end):
        if start > end:
            return -1

        index = start + (end-start)//2

        if nums[index] == target:
            #no puede estar mas a la izquierda
            if index == 0 or nums[index-1] != target:
                return index

            return self.searchFirstRecursive(nums, target, start, index-1)
        
        if nums[index] > target:
             return self.searchFirstRecursive(nums, target, start, index-1)

        if nums[index] < target:
             return self.searchFirstRecursive(nums, target, index+1, end)    


    
    def searchLastRecursive(self, nums, target, start, end):
        #no estoy
        if start == -1:
            return -1
            
        if start > end:
            return -1

        index = start + (end-start)//2

        if nums[index] == target:
            #no puede estar mas a la derecha
            size = len(nums)
            if index == (size - 1):
                return index

            #mi continuo no es target por tanto soy el ultimo
            if nums[index+1] != target:
                return index

            #start es mi continuo que se que es target
            return self.searchLastRecursive(nums, target, index+1, end)
        

        if nums[index] > target:
             return self.searchLastRecursive(nums, target, start, index-1)

        if nums[index] < target:
             return self.searchLastRecursive(nums, target, index+1, end)   
    
        