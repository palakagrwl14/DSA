class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0;
        int right =0;
        int maxLen = 0;
        unordered_set<char> ch;
            for(right = 0;right < n;right++){
                
                    while(ch.find(s[right]) != ch.end()){
                        ch.erase(s[left]);
                        left++;
                    }
                    ch.insert(s[right]);
                    maxLen = max(maxLen, right - left + 1);

            }
              return maxLen;  
    }
};