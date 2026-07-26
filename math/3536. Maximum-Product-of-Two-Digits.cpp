class Solution {
public:
    int maxProduct(int n) {
        priority_queue<char> pq;
        string s=to_string(n);
        for(char c:s){
            pq.push(c);
        }
        int a=pq.top()-'0';
        pq.pop();
        int b=pq.top()-'0';
        pq.pop();
        return a*b;
    }
};