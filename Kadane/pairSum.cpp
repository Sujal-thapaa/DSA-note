
//2 7 11 15

//target 9

#include <iostream>
using namespace std;



vector<int> pairSum(vector<int>& nums , int target)
{


    int n=nums.size();
    vector<int> pair;
    int i=0;
    int j=n-1;

    while(i<j)
    {
        if((nums[i]+nums[j]<target))
        {
            i++;

        }
        else if((nums[i]+nums[j]>target))
        {
            j--;
        }
        else if((nums[i]+nums[j]==target))
        {
            pair.push_back(i);
            pair.push_back(j);
            return pair;
        }
    }
    return pair;

}

int main(){

    vector<int> nums={2,7,11,15};
    int target=18;

    
    vector<int> pair=pairSum(nums , target);
    cout<<pair[0]<<" ,"<<pair[1]<<endl;
    return 0;


}