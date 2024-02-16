class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        translations = {
            "I" : 1,
            "V" : 5,
            "X" : 10,
            "L" : 50,
            "C" : 100,
            "D" : 500,
            "M" : 1000,
        }

        ans = 0

        for i in range(0, len(s) - 1):
            if(translations[s[i]] < translations[s[i+1]]):
                ans -= translations[s[i]]
            else:
                ans += translations[s[i]]

        ans += translations[s[len(s)-1]]

        # s = s.replace("IV", "IIII").replace("IX", "VIIII")
        # s = s.replace("XL", "XXXX").replace("XC", "LXXXX")
        # s = s.replace("CD", "CCCC").replace("CM", "DCCCC")

        # for char in s:
        #     ans += translations[char]

        return ans