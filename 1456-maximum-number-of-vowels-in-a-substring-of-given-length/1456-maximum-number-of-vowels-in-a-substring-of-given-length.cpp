class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int n =s.size();
        int maxVow = 0;
        int vowCount = 0;
            for(int i = 0;i < k;i++){
                if(isVowel(s[i])){
                    vowCount++;
                }
            }
            maxVow = vowCount;
                for(int i = k;i < n;i++){
                   if(isVowel(s[i-k])){
                        vowCount--;
                   }
                   if(isVowel(s[i])){
                        vowCount++;
                   }
                   maxVow = max(maxVow, vowCount);

                }
                return maxVow;
    }
};