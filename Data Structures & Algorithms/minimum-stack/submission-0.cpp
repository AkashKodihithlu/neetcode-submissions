class MinStack {
   private:
    stack<int> minStack;
    stack<int> helperStack;

   public:
    MinStack() {}

    void push(int val) {
        minStack.push(val);
        if (helperStack.empty()) {
            helperStack.push(val);
        } else {
            helperStack.push(min(val, helperStack.top()));
        }
    }

    void pop() {
        minStack.pop();
        helperStack.pop();
    }

    int top() { return minStack.top(); }

    int getMin() { return helperStack.top(); }
};
