1)
simple brute force method which works but it will give you TLE
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
int this method we can sort the array and loop through it to see it has any duplicat element or not:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i < n-1;i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};

3)
   in this method we are Xor-ing elements as we know
   a ^ a = 0
   a ^ 0 = a
   
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
