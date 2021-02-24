class Solution {
public:
    bool detectCapitalUse(string word) {
		bool flag=0,flag1=0;//是否為大寫字母
        for(int i=0;i<word.length();i++){
			if(!i&&word[i]<'a') flag=1;
			if(flag){
				if(i==1&&word[i]<'a') flag1=1;
				if(i>0){
					if(word[i]<'a'&&!flag1) return false;
					if(word[i]>='a'&&flag1) return false;
				}
			}else{
				if(word[i]<'a') return false;
			}
		}
		return true;
    }
};