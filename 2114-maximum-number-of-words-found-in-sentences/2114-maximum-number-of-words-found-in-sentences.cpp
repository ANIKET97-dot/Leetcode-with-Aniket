class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        for (string s: sentences){
            int words = 1;
            for (char ch: s){
                if (ch == ' '){
                    words++;
                }
            }
            maxi = max(maxi, words);
        }
        return maxi;
    }
};