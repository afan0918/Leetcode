class Solution {
public:
    int longestPalindrome(string s) {
        int ch[256]={0},count=0;
		bool flag=false;
		for(auto x:s) ch[(int)x]++;
		for(auto x:ch){
			if(x%2==1) flag=true;
			count+=x/2;
		}
		return count*2+flag;
    }
};