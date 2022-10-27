class MyQueue {
private:
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
        
        
    }
    
    int pop() {
         if(s2.empty()){
             while(!s1.empty())
             {
                 s2.push(s1.top());
                 s1.pop();
             }
                
         }
         int n=s2.top();
        s2.pop();
        return n;
    }
    
    int peek() {
         if(s2.empty()){
             while(!s1.empty())
             {
                 s2.push(s1.top());
                 s1.pop();
             }
                
         }
        int m=s2.top();
        return m;
    }
    
    bool empty() {
        if(s1.empty()) return s2.empty();
        return false;
         
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