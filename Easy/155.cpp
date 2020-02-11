class MinStack {
public:
    /** initialize your data structure here. */
    vector<int>vect;
    MinStack() {
        
    }
    
    void push(int x) {
        vect.push_back(x);
    }
    
    void pop() {
        vect.pop_back();
    }
    
    int top() {
        return vect[vect.size()-1];
    }
    
    int getMin() {
        int minimum=*min_element(vect.begin(),vect.end());
        return minimum; 
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
