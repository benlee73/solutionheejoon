class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> tree;
        int cur;
        
        for(int i=0; i<nums.size(); i++)
        {
            cur = target - nums[i];
            if(tree.find(cur) != tree.end()){
                ans.push_back(i);
                ans.push_back(tree[cur]);
                return ans;
            }
            tree[nums[i]]=i;    // it's fater than tree.insert()
        }
        return ans;
    }
};
