class RandomizedSet {
private:
    vector<int> nums;
    unordered_map<int, int> map;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (map.find(val) != map.end()) {
            return false;
        }
        nums.push_back(val);
        map[val] = nums.size() - 1;
        return true;    
    }
    
    bool remove(int val) {
        if (map.find(val) == map.end()) {
            return false;
        }
        int last = nums.back();
        int index = map[val];
        nums[index] = last;
        map[last] = index;
        nums.pop_back();
        map.erase(val);
        return true;
    }
    
    int getRandom() {
        int index = rand() % nums.size();
        return nums[index];   
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */