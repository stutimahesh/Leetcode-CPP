class Solution {
public:
    int countOperations(int num1, int num2) {
        int count=0;
        long long n1=num1;
        long long n2=num2;
        while(n1 and n2){
            if (n1>=n2) n1-=n2;
            else n2-=n1;
            count++;
        }
        return count;
    }
};