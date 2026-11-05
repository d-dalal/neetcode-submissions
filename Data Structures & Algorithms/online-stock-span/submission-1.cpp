class StockSpanner {
public:
    stack<int> s;
    stack<int> t;
    int cnt;
    StockSpanner() {
        cnt=1;
        s.push(0);
        t.push(INT_MAX);
    }
    
    int next(int price) {
        cout << cnt << " ";
        while (!s.empty() && t.top()<=price) {
            t.pop();
            s.pop();
        }
        if (!s.empty()) {
            int ans = cnt - s.top();
            s.push(cnt);
            t.push(price);
            cnt++;
            return ans;
        } else {
            s.push(cnt);
            t.push(price);
            cnt++;
            return 1;
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */