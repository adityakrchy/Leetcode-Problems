class Solution {
public:
    int maxDepth(string s) {
        int count = 0, depth = 0;
        for(int i = 0; i<s.length(); i++){
            if(s[i]=='('){
                count++;
            }
            if(s[i]==')'){
                count--;
            }
            
            depth = max(count, depth);
        }
        
        return depth;
        
    }
};