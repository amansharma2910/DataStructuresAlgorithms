# using hash table

class Solution: # time complexity = O(n)
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        hash_table = {}
        for i in range(n):
            try:
                return [hash_table[target-nums[i]], i]
            except:
                hash_table[nums[i]] = i
