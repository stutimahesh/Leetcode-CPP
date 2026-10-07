class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> result;
        for (int num: nums1){
            mp[num]=1;
        }
        for (int num:nums2){
            if (mp.count(num) && mp[num]==1){
                result.push_back(num);
                mp[num]=2;
            }
        }
        return result;
    }
};

//unorderd_set solution
//Both have O(m+n) time complexity and O(m) space complexity where m is the size of nums1 and n is the size of nums2

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> result;

        for(int num: nums2){
            if(s.count(num)){
                result.push_back(num);
                s.erase(num);
            }
        }
        return result;
    }
};