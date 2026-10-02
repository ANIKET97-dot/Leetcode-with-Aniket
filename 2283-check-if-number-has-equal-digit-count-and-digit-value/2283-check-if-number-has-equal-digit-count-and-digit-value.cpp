class Solution {
public:
    bool digitCount(string num) {

        for (int i = 0; i < num.size(); i++){
            int cnt = 0;
            for (int j = 0; j < num.size(); j++){
                if (num[j] - '0' == i){
                    cnt++;
                }
            }
            if (cnt != num[i] - '0'){
                return false;
            }
        }
        return true;
    }
};