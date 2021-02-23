class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
		string result="";
		int tmp[20],count=0;
        if(num<0){
			result+='-';
			num=abs(num);
		}
		while(num){
			tmp[count++]=num%7;
			num/=7;
		}
		for(int i=count-1;i>=0;i--)
			result+=(char)(tmp[i]+'0');
		return result;
    }
};