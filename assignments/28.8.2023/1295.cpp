class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int num=0;
            int temp=nums[i];
            while(temp>0){
                temp=temp/10;
                num++;
            }
            if(num%2==0){
                count++;
            }
        }
        return count;
    }
};