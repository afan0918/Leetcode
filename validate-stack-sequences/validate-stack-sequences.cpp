class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
		stack<int> st;
		int pos=0;
        for(auto x:pushed){
			st.push(x);
			while(pos<popped.size()&&!st.empty()&&st.top()==popped[pos]){
				st.pop();
				pos++;
			}
		}
		if(st.empty()) return true;
		return false;
    }
};