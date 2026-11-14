//WE declare a pair of stack here instead of a seperate space and then second one is for the min value
//find the min value and push the stack if it is not empty
//pop the pair
//top.first gives top value
//top.second gives min value
class MinStack {
public:
stack<pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        int newMin=val;
        if(!st.empty())
        {
            newMin=min(newMin,getMin());
        }
        st.push({val,newMin});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
       return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
