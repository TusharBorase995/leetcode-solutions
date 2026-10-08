class Solution {
public:
    string removeOuterParentheses(string s) {
        int bal =0;
        string ans = "" ;

        for(char c: s){
            if(c == '('){
                if(bal>0){
                    ans = ans + c; //add paren in ans if paren is not of outside
                }
                bal++;
            }
            else{
                bal--;
                if(bal>0){
                    ans = ans + c;
                }

            }
        }   
        return ans;
    }
};