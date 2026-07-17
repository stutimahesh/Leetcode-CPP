class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n<1) return true;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==1) continue;
            int prev= i==0? 0:flowerbed[i-1];
            int next= i==flowerbed.size()-1? 0: flowerbed[i+1];
            if(prev==0 && next==0){
                flowerbed[i]=1;
                n--;
                if(n<1) return true;
            } 
        }
        return false;
    }
};