1)
  this is a right approach but gives TLE dont know why :(
class Solution {
public:
    int leftMost(vector<int> nums,int target,int s,int e){
        int ans = -1;
        while(s <= e){
          int mid = s + (e - s)/2;
            if(nums[mid] == target){
                ans = mid;
                e  = mid - 1;
            }else if(nums[mid] > target)
                e = mid - 1;
            else
                s = mid + 1;
           
        }
        return ans;
    }
    int rightMost(vector<int> nums,int target,int s,int e){
        int ans = -1;
        while(s <= e){
           int mid = s + (e-s)/2;
            if(nums[mid] == target){
                ans = mid;
                s = mid + 1;
            }else if(nums[mid] > target)
                e = mid = 1;
            else
                s = mid + 1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        return{leftMost(nums,target,s,e),rightMost(nums,target,s,e)};
    }
};
   
2)
This is also same but this doesnt gives TLE :(
  
  class Solution {
public:
int first(vector<int> nums,int target,int start,int end){
int idx = -1;
while(start<=end){
int mid = start + (end-start)/2;
if(nums[mid]==target){
idx = mid;
end = mid-1;
}
else if(nums[mid]<target) start = mid+1;
else end = mid-1;
}

    return idx;
}
int last(vector<int> nums,int target,int start,int end){
    int idx = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(nums[mid]==target){
            idx = mid;
            start = mid+1;
        }
        else if(nums[mid]<target) start = mid+1;
        else end =mid-1;
    }
    return idx;
}
    vector<int> searchRange(vector<int>& nums, int target) {
   int start  = 0;
    int end = nums.size()-1;
    return{first(nums,target,start,end),last(nums,target,start,end)};
    }
};
