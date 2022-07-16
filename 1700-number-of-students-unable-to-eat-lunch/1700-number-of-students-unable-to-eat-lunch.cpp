class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> sand;
       deque<int> stu;
        
        
        for(int i=sandwiches.size()-1;i>=0;i--)
        {
            sand.push(sandwiches[i]);
        }
        
        for(int i=0;i<students.size();i++)
        {
            stu.push_back(students[i]);
        }
       int count=0;
        
        while(!sand.empty())
        {
            if(stu.front()==sand.top())
            {
                count=0;
                sand.pop();
                stu.pop_front();
            }
            else if(stu.front()!=sand.top())
            {
                count++;
                if(count==students.size())
                {
                    break;
                }
                int temp=stu.front();
                stu.pop_front();
                stu.push_back(temp);
            }
        }
        return stu.size();
       
        
    }
};