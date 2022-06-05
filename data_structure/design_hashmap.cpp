class MyHashMap {
public:
    vector<int>* hashmap;
    MyHashMap() {
       hashmap = new vector<int> (1e6+9, -1);
        //return;
    };
    
    void put(int key, int value) {
        (*hashmap)[key] = value;
        return;
    }
    
    int get(int key) {
       return (*hashmap)[key]; 
        
    }
    
    void remove(int key) {
        (*hashmap)[key] = -1;
    }
};