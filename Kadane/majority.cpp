#include<iostream>
using namespace std;


vector<int>majority(vector<int>& nums)
{
    int n=nums.size();
    int count=1;
    int major;
    vector<int>ans;
    if(n%2==0)
    {
        major=n/2;
    }
    else{
        major=n/2 +1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]==nums[j])
            {
                count+=1;
            }
            if(count>=major)
            {

                ans.push_back(nums[i]);

            }
        }
    }
    return ans;

} 

int main()
{

    vector<int>nums={1,1,2,2,1,2,2};

    vector<int>ans=majority(nums);

    cout<< ans[0]<<endl;

    return 0;
}