class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        priority_queue<long long> pq;
        for(int num: nums){
            long long elem= (long long)num*num;
            pq.push(elem);
        } 
        int n=pq.size();
        int i=0;
        long long result=0;
        int adds= n-(n/2);
        while(i< adds){
            result+=pq.top();
            pq.pop();
            i++;
        }
        while(i<n){
            result-=pq.top();
            pq.pop();i++;
        }
        return result;
    }
};