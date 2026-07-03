class Solution {
public:
    vector<vector<string>> result;
    vector<string> instore;
    bool isPalindrome(string &s, int left, int right){
        while (left < right) {
        if (s[left] != s[right])
            return false;

        left++;
        right--;
    }
    return true;
    }
        void character(string &s, int index){
        if(index == s.length()){
            result.push_back(instore);
            return;
        }
            for(int i =index;i < s.size();i++){
                if(!isPalindrome(s, index, i))continue;
                instore.push_back(s.substr(index, i-index+1));
                character(s, i+1);
                instore.pop_back();
            }
    }
    vector<vector<string>> partition(string s) {
        character(s, 0);
        
        return result;
    }
};