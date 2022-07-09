class Solution {
public:
vector<int> minOperations(string boxes) {
    vector<int>vect;
    int sum=0;
    for(int i=0;i<boxes.length();i++){
        for(int j=0;j<boxes.length();j++){
            if(boxes[j]=='1'){
                sum+=abs(j-i);
            }
        }
        vect.emplace_back(sum);
        sum=0;
    }
    return vect;
  }
};