class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> count;
        int maxFreq=0;
        int maxAns=0;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
            maxFreq=max(maxFreq,count[nums[i]]);
        }
     
      for(auto i:count){
        if(maxFreq == i.second){
            maxAns=maxAns+i.second;
        }
      }
        return maxAns;
    }
};