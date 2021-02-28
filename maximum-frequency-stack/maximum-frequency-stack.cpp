class FreqStack {
private:
	unordered_map<int,int> map;
	unordered_map<int, stack<int>> stack;
	int maxfreq=0;
public:
    FreqStack() {
        
    }
    
    void push(int x) {
		maxfreq=max(maxfreq,++map[x]);
		stack[map[x]].push(x);
    }
    
    int pop() {
        int result=stack[maxfreq].top();
		stack[maxfreq].pop();
		if(!stack[map[result]--].size()) maxfreq--;
		return result;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */