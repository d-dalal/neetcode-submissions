class FreqStack {
public:
    stack<int> st;
    vector<stack<int>> freq_st;
    unordered_map<int, int> freq;
    int max_freq;

    FreqStack() {
        max_freq = -1;
    }
    
    void push(int val) {
        freq[val]++;
        if (freq[val] > max_freq) {
            max_freq = freq[val];
            stack<int> temp;
            temp.push(val);
            freq_st.push_back(temp);
        } else {
            freq_st[freq[val]-1].push(val);
        }
    }
    
    int pop() {
        int ret = freq_st[max_freq-1].top();
        freq_st[max_freq-1].pop();
        freq[ret]--;

        if(freq_st[max_freq-1].empty()) {
            max_freq--;
            freq_st.pop_back();
        }

        return ret;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */