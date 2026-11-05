class MyHashMap {
public:
    vector<int> keyArr;
    MyHashMap() {
        keyArr.resize(1000001,-1);
    }
    
    void put(int key, int value) {
        keyArr[key] = value;
    }
    
    int get(int key) {
        return keyArr[key];
    }
    
    void remove(int key) {
        keyArr[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */