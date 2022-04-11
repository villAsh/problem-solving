1)
  simple brute force method but gives TLE :(
    class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i <n;i++){
            for(int j = i+1;j < n;j++){
                if(nums[i] == nums[j]){
                    return nums[i];
                }
            }
        }
        return 0;
    }
};

2)
  Easy approach
  you just have to have knowledge about Xor logic
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i = 0;i < n;i++){
            ans = nums[i] ^ nums[i+1];
            if(ans == 0){
            return nums[i];
            }
        }
        return 0;
    }
};
