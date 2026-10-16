class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> rightSum(n,0);
        rightSum[n-1]=-1;
        for(int i=n-2; i>=0; i--){
            rightSum[i]= max(rightSum[i+1], arr[i+1]);
        }

        return rightSum;
    }
};
// above time complexity is O(n) and space is O(n)

//In order to reduce the space complexity to O(1) , we can modify the same array
class Solution{
    public:
    vector<int> replaceElements(vector<int>& arr){
        int n=arr.size();
        int maxRight=-1;

        for(int i=n-1; i>=0; i--){
            int current= arr[i];
            arr[i]= maxRight;
            maxRight= max(maxRight, current);
        }
        return arr;
    }
}