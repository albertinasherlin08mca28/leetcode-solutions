class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        char_map={}
        max_lenght=0
        left=0

        for right,char in enumerate(s):
            if char in char_map and char_map[char]>=left:
                left=char_map[char] +1
            char_map[char]=right
            max_lenght=max(max_lenght, right-left+1)
        return max_lenght