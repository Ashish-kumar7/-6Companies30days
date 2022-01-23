class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int n = nums.size();
        int start = *max_element(nums.begin(),nums.end());
        int end = 0;
        for(int i=0;i<n;i++)
            end+=nums[i];
        while(start<end)
        {
            int pieces = 1;
            int mid = start + (end-start)/2;
            int sum = 0;
            for(int i=0;i<n;i++)
            {
                sum+=nums[i];
                if(sum>mid)
                {
                    pieces++;
                    sum = nums[i];
                }
            }
            if(pieces<=m)
                end = mid;
            else
                start = mid+1;
        }
            return start;
        
    }
};