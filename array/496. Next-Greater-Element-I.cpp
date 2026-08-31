class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> result;

        for(int i=0;i<n;i++){
            int elem=nums1[i];
            int greater=-1;

            int j=0;
            while(j<m && nums2[j]!=elem) j++;
            while(j<m){
                if(nums2[j]>elem){
                    greater=nums2[j]; break;
                }
                j++;
            }

            result.push_back(greater);
        }

        return result;
    }
};