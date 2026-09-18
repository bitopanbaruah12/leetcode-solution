class MinStack {
public:

    stack<int> s1,s_min;
    
    MinStack() {
        
    }
    
    void push(int value) {
        

        s1.push(value);
        if(s_min.empty()){
            s_min.push(value);
        }
        else{
            s_min.push(min(value,s_min.top()));
        }


    }
    
    void pop() {
        s1.pop();
        s_min.pop();
        
    }
    
    int top() {
         return s1.top();
        
    }
    
    int getMin() {
        return s_min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */