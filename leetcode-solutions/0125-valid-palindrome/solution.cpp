class Solution {
private:
    bool valid(char ch){
        if( (ch >='a'&&ch<='z') || (ch >='A'&& ch<='Z') || (ch >='0'&& ch<='9') ){
            return true;
        }else return false;
    }
    char lowerCase(char ch){
        if(ch>='a'&& ch<='z'){
            return ch;
        }else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }
public:
    bool isPalindrome(string s) {
        // valid 
        string temp ="";
        for(int i =0; i<s.length(); i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        // lowercase
        for(int i =0; i< temp.length(); i++){
            temp[i]= lowerCase(temp[i]);
        }
        // palindrome 
        int st= 0;
        int end= temp.length()-1;
        while(st<end){
            if(temp[st]!=temp[end]){
                return false;
            }else{
                st++;
                end--;
            }
        }
        return true;
    }
};
