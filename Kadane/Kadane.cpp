//Find MaxSubArraySum from Kadane algorithum 

#include<iostream>
using namespace std;

int main()
{
    int arr[]={3,-4,5,8,-7,6,5};
    int currSum=0;
    int maxSum=INT_MIN;

    for(int i=0;i<7 ;i++)
    {
        currSum+=arr[i];

        maxSum=max(currSum,maxSum);
        
        if (currSum<0)
        {
            currSum=0;
        }
        
        
    }
    cout<<maxSum<<endl;
}