class MyCalendar {
public:
    vector<pair<int,int>> r;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
        for(auto it :r)
        {
            if(it.first<end&&it.second>start)
            {
                return false;
            }
           
        }
         r.push_back({start,end});
            
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */