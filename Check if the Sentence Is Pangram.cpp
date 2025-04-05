class Solution {
public:
    bool checkIfPangram(string s) {

        if(s.length() < 26){
            return false;
        }

        vector<int> res(26,0);

        for(int i=0;i<s.length();i++){
            res[ s[i] - 'a'] = 1; 
        }

        int ans = accumulate(res.begin(),res.end(),0);

        return ans % 26 ==0;


        
    }
};
