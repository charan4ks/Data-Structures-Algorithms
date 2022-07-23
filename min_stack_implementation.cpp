class MinStack {

private:
    vector<int>arr;
    int index;
    int min_val = INT_MAX;
    
public:

    MinStack() {
        index=-1;
    }
    
    void push(int val) {
        if(min_val>val) min_val = val;
        arr.push_back(val);
        index++;
        return;
    }
    
    void pop() {
        if(index<0) return;
        arr.pop_back();
        index--;
        min_val = INT_MAX;
        for(int it: arr) min_val = min(min_val, it);
        
        return;
    }
    
    int top() {
        if(index<0) return NULL;
        return arr[index];
    }
    
    int getMin() {
        return min_val;
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