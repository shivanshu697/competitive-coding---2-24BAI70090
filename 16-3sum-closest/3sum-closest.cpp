class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int answer = nums[0]+nums[1]+nums[2];
        for(int i =0;i<nums.size()-2;i++){
            int j = i+1,k=nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<abs(target-answer))
                answer = sum;
                if(sum==target) return target;
                else if(sum<target) j++;
                else k--;
            }
        }
        return answer;
    }
};