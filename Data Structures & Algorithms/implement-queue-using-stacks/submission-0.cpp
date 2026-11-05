class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int size = s1.size();
        for(int i=0;i<size-1;i++) {
            s2.push(s1.top());
            s1.pop();
        }
        int ret = s1.top();
        s1.pop();
        for(int i=0;i<size-1;i++) {
            s1.push(s2.top());
            s2.pop();
        }
        return ret;
    }
    
    int peek() {
        int size = s1.size();
        for(int i=0;i<size-1;i++) {
            s2.push(s1.top());
            s1.pop();
        }
        int ret = s1.top();
        for(int i=0;i<size-1;i++) {
            s1.push(s2.top());
            s2.pop();
        }
        return ret;
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */