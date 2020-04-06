class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int max = *max_element(nums.begin(), nums.end()); 
    int min = *min_element(nums.begin(), nums.end()); 
    int f;
    vector<int> count(max - min + 1); 
    for(int i = 0; i < nums.size(); i++) {
        count[nums[i]-min]++; 
    }
    for(int i = 0; i < (max - min + 1) ; i++) {
           if(count[i]==1){
              int f = min + i;
               return f;
           }
    }
    return f;
    }
};
