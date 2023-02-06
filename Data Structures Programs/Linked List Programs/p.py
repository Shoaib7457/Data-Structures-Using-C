def strStr(haystack,needle):
        idx = 0
        if needle not in haystack:
            return -1
        for i in range(len(haystack)):
            if haystack[i] == needle:
                return i
            if haystack[i:i+len(needle)] == needle:
                print(haystack[i:i+len(needle)])
                idx = i
                break

        return idx


s = "abc"
s2 = "c"
print(strStr(s,s2))