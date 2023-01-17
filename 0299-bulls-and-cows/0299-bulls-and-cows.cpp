class Solution {
public:
    string getHint(string secret, string guess) {
        int c = 0, b = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i<secret.size(); i++){
            if(secret[i]==guess[i]){
                c++;
            }
            else{
                mp[secret[i]]++;
            }
        }
        
        for(int i = 0; i<secret.size(); i++){
            if(secret[i]!=guess[i]){
                if(mp[guess[i]]>0){
                    b++;
                    mp[guess[i]]--;
                }
            }
        }
        string ans = to_string(c)+"A"+to_string(b)+"B";
        return ans;
    }
};