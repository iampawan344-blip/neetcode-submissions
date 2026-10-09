class MyHashSet {
public:
vector<bool>ss;
    MyHashSet() {
        ss.resize(1000001,false);
        
    }
    
    void add(int key) {
        ss[key]=true;
        
    }
    
    void remove(int key) {
        ss[key]=false;
        
    }
    
    bool contains(int key) {
        return ss[key]==true;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */