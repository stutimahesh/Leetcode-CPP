class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++){
            int a= arr[i]*2;
            mp.insert({a, i});
        }
        for(int i=0; i<arr.size(); i++){
            auto it = mp.find(arr[i]);
            if(it!=mp.end() && it->second!=i){
                return true;
            }
        }
        return false;
    }
};