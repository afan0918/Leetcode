class Solution {
	vector<string> list={"qwertyuiop","asdfghjkl","zxcvbnm"};
public:
    vector<string> findWords(vector<string>& words) {
		vector<string> result;
        for(auto str:words){
			bool ch[26]={0},flag=1;
			for(auto x:str){
				if(x>='a') ch[x-'a']=true;
				else ch[x-'A']=true;
			}
			for(int i=0;i<3;i++){
				flag=1;
				for(int j=0;j<26;j++)
					if(ch[j]&&list[i].find((char)(j+'a'))==-1)
						flag=0;
				if(flag){
					result.push_back(str);
					break;
				}
			}
		}
		return result;
    }
};