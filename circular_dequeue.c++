class MyCircularDeque {
public:
    deque<int>s;
    int n;
    MyCircularDeque(int k) {
        n=k;
    }
    
    bool insertFront(int value) {
        if(s.size()<n){
            s.push_front(value);
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
        if(s.size()<n){
            s.push_back(value);
            return true;
        }
        return false;
    }
    
    bool deleteFront() {
        if(s.size()!=0){
            s.pop_front();
            return true;
        }
        return false;
    }
    
    bool deleteLast() {
        if(s.size()){
            s.pop_back();
            return true;
            
        }
        return false;
    }
    
    int getFront() {
        if(s.size()) return s.front();
        else return -1;
    }
    
    int getRear() {
        if(s.size()) return s.back();
        return -1;
    }
    
    bool isEmpty() {
        if(s.size()==0) return true;
        return false;
    }
    
    bool isFull() {
        if(s.size()==n) return true;
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */