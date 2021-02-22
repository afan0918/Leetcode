class Solution {
private:
	char list[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
public:
    string toHex(int num) {
		if(!num) return "0";
		unsigned int unnum=num;
		string result="";
		if(unnum>0){
			while(unnum>0){
				result+=list[unnum%16];
				unnum/=16;
			}
		}
		reverse(result.begin(),result.end());
        return result;
    }
};