class Solution:
    def longestCommonPrefix(self, strs):
        if not strs:
            return ""
        prefix = strs[0]
        for string in strs[1:]:
            while string.find(prefix) != 0:
                prefix = prefix[:-1]
                if not prefix:
                    return ""
        return prefix

if __name__ == "__main__":
    solution = Solution()
    strings = ["flower", "flow", "flight"]
    result = solution.longestCommonPrefix(strings)
    print("Longest Common Prefix:", result)
