class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        ans = ''
        size1 = len(word1)
        size2 = len(word2)
        size = -1
        if size1 > size2:
            size = size1
        else:
            size = size2
        for i in range(0,size):
            if i < len(word1):
                ans +=word1[i]
            if i < len(word2):
                ans +=word2[i]
        return ans