class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       
     int maxlength=0;
     int count=0;
     unordered_map<int,int> mapp;
     mapp[0]=-1;
     for(int i=0;i<nums.size();i++){
        count+=(nums[i]==1)?1:-1;
        if(mapp.find(count)!=mapp.end()){
            maxlength=max(maxlength,(i-mapp[count]));
        }
        else{
        mapp[count]=i; 
        }
     }
     return maxlength;
    }
};
