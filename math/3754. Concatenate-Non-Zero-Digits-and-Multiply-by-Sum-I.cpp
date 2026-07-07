class Solution {
public:
    long long sumAndMultiply(int n) {
        int num=0;
        int idx=1;
        long long sum=0;
        while(n){
            int a=n%10;
            if(a!=0){
                num=num+a*idx;
                idx=idx*10;
                sum+=a;
            }
            n=n/10;
        } 
        return num*sum;
    }
};