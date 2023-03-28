class CustomStack {
public:

    vector<int>vc;
    int sz;

    CustomStack(int maxSize) {
       sz=maxSize;
    }
    
    void push(int x) {
        if(vc.size()<sz){
            vc.push_back(x);
            
        }
    }
    
    int pop() {
        if(vc.size()==0){
            return -1;
        }
        else{
            int ans=vc.back();
            vc.pop_back();
 
            return ans;
        }
    }
    
    void increment(int k, int val) {
        k=min((int)vc.size(),k);
        for(int i=0;i<k;i++){
            vc[i]=vc[i]+val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */