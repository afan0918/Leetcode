class Solution {
private:
	vector<int> weight;
	int sum=0;
public:
    Solution(vector<int>& w) {
        weight=w;
		for(auto x:weight) sum+=x;
    }
    
    int pickIndex() {
        int r=rand()%sum;
		for(int i=0;i<weight.size();i++)
			if((r-=weight[i])<0) return i;
		return -1;//報錯
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */