class Solution {
public:
    int romanToInt(string s) {
        int num = 0, i;
        int n = s.length();
        for (i = 0; i < n; i++) {
            if (i < n - 1 && 
               ((s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')) ||
                (s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) ||
                (s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')))) {
                switch(s[i]) {
                    case 'I': num -= 1; break;
                    case 'X': num -= 10; break;
                    case 'C': num -= 100; break;
                }
            } else {
                switch(s[i]) {
                    case 'I': num += 1; break;
                    case 'V': num += 5; break;
                    case 'X': num += 10; break;
                    case 'L': num += 50; break;
                    case 'C': num += 100; break;
                    case 'D': num += 500; break;
                    case 'M': num += 1000; break;
                }
            }
        }
        return num;
    }
};