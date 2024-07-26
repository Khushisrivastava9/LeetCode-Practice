class MinStack {
public:
stack<pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        int newmin=st.empty()?val:min(val,st.top().second);
        st.push({val,newmin});
    }
    
    void pop() {
        if(!st.empty()) st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        pair<int,int> n=st.top();
        return n.second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */