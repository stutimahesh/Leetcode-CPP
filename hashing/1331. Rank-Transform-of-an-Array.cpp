class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        int n=arr.size();

        for(int i=0;i<n;i++){
            minHeap.push({arr[i],i});
        }
        vector<int> ranks(n,0);
        int rank=1;

        while(!minHeap.empty()){
            auto elem=minHeap.top();
            minHeap.pop();
            ranks[elem.second]=rank;
            while(!minHeap.empty() && minHeap.top().first==elem.first){
                auto elem=minHeap.top();
                minHeap.pop();
                ranks[elem.second]=rank;
            }
            rank++;
        }

        return ranks;
    }
};