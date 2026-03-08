class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int ans = -1;
        int min = 101;
        for(int i = 0; i < capacity.size(); i++){
        if(capacity[i] >= itemSize && min > capacity[i]){
            min = capacity[i];
            ans = i;
        }

        }
        return ans;
    }
};
