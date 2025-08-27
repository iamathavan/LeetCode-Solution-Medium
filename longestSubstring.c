/*
0ms
10mb
beats 100%
passed 988/988
*/
int lengthOfLongestSubstring(char* s) {
     int n = strlen(s);
    int last[128]; // supports ASCII
    for (int i = 0; i < 128; ++i) last[i] = -1;
    int maxLen = 0, start = 0;
    for (int i = 0; i < n; ++i) {
        char c = s[i];
        if (last[c] >= start)
            start = last[c] + 1;
        last[c] = i;
        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }
    return maxLen;
}
