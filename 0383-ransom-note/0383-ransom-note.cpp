class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size()){
            return false;
        }
        vector<int> ch(26, 0);

        for (char c : magazine){
            ch[c - 'a']++;
        }

        for (char c : ransomNote){
            ch[c - 'a']--;

            if (ch[c - 'a'] < 0){
                return false;
            }
        }
        return true;
    }
};