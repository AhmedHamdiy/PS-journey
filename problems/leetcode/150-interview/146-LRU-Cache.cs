public class LRUCache {
    Dictionary<int,int> a;
    List<int> b;
    int cap;
    public LRUCache(int capacity) {
        this.a = new Dictionary<int,int>();
        this.b = new List<int>();
        this.cap = capacity;
    }
    
    public int Get(int key) {
        if (a.ContainsKey(key))
        {
            b.Remove(key);
            b.Add(key);
            return a[key];
        } else {
            return -1;
        }
    }
    
    public void Put(int key, int value) {
        if (!a.ContainsKey(key))
        {
            if (a.Count == cap)
            {
                a.Remove(b[0]);
                b.Remove(b[0]);
            }
            b.Add(key);
            a.Add(key, value);
        } else {
            b.Remove(key);
            b.Add(key);
            a[key] = value;
        }
    }
}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.Get(key);
 * obj.Put(key,value);
 */