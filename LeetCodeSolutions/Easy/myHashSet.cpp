class MyHashSet {
public:
    list<int> value;
    MyHashSet() {
        
    }
    
    void add(int key) {
        value.push_back(key);
    }
    
    void remove(int key) {
        value.remove(key);
    }
    
    bool contains(int key) {
         auto first = value.begin();
        auto last = value.end();
        auto it = find(first, last, key);
         if (it != value.end())
         {
            return true;
         }
         return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */