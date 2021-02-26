class Solution {
private:
	int a=0,l=0;
public:
    bool checkRecord(string s) {
        for(auto x:s){
			if(x=='A') a++;
			else if(x=='L') l++;
			if(l>2) return false;
			if(a>1) return false;
			if(x!='L') l=0;
		}
		return true;
    }
};