class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int sum=1;
		sort(candyType.begin(),candyType.end());
		for(int i=1;i<candyType.size();i++)
			if(candyType[i]!=candyType[i-1])
				sum++;
		return sum<candyType.size()/2?sum:candyType.size()/2;
    }
};