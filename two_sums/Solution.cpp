class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mp;                   //initializing the unordered map               
		vector<int>v;                                //creating a vector to store the result
        for(int i=0;i<nums.size();i++){              //running a loop according to the steps mentioned above           
            if(mp.find(target-nums[i])!=mp.end()){   //check if the (target -nums[i]) already present in map
                v.push_back(i);
                v.push_back(mp[target-nums[i]]);
                return v;
            }else{                      
                mp[nums[i]] = i;                     //if not then add the value to the map
            }
        }
        return v;
        
    }
};