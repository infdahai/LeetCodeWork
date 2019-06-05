class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        std::map<int,int> m1;
        int j = 0;
        for(size_t i =0 ;i<nums.size();i++)
        {
            auto k = m1.find(nums[i]);
            if ( k != m1.end())
            {
                res.push_back(m1[nums[i]]);     // hint : 这里使用map来查询(4/8ms)，比k->second访问快速很多(16ms)
                res.push_back(j);
                break;
            }
            else{
                m1[target-nums[i]] = j;
            }
            j++;
        }
        return res;
    }
};
