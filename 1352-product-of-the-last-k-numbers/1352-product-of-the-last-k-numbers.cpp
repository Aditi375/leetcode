class ProductOfNumbers {
public: //prefix sum
   vector<int> r;
 
    
    ProductOfNumbers() {
        r.clear();
    }
    
    void add(int num) {
        if(num==0)
        {
            r.clear();
        }
        else if(r.size()==0)
        {
            r.push_back(num);
        }
        else
        {
            r.push_back(r.back()*num);
        }
    }
    
    int getProduct(int k) {
        if(k>r.size()) return 0;
       else if(k==r.size()) return r.back();
        else return r.back()/r[r.size()-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */