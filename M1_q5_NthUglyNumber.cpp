class Solution {
public:
    
    //ref : https://www.youtube.com/watch?v=QyeDRMprJVQ
    int nthUglyNumber(int n) 
    {
        set <long long> possibleNum,result;
        possibleNum.insert(1);
        
        
        while(result.size() != n)
        {
            long long nextUgly = *possibleNum.begin();
            result.insert(nextUgly);
            possibleNum.erase(nextUgly);
            
            possibleNum.insert(2*nextUgly);
            possibleNum.insert(3*nextUgly);
            possibleNum.insert(5*nextUgly);
        }
        return *result.rbegin();
    }
};
