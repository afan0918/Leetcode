class Solution {
public:
    int scoreOfParentheses(string s) {
		int result=0,count=0;
		if(!s.length()) return result;
        for(int i=0;i<s.length();i++){
			if(s[i]=='(') count++;
			else{
				count--;
				if(s[i-1]=='(') result+=pow(2,count);
			}
		}
		return result;
    }
};