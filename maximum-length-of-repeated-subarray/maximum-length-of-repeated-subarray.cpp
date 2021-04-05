class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
		if (A.size()==0||B.size()==0) return 0;
        vector<int> dp(A.size()+1,0);
		int result=0;
		for(int i=A.size()-1;i>=0;i--){
			for(int j=0;j<B.size();j++){
				dp[j]=(A[i]==B[j])?1+dp[j+1]:0;
				result=max(result,dp[j]);
			}
		}
        return result;
    }
};