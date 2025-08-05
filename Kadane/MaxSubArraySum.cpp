#include<iostream>
using namespace std;

int main()
{

    int n=11;
    int arr[]={1,2,3,4,5,-5,-3,-7 , 5,7,2};

    int large=INT_MIN ;
    int sum=0;

    for (int start=0; start<n;start++)
    {
        for(int end=start; end<n;end++)
        {
            sum=0;
            for(int i=start; i <=end ; i++)
            {
                
                sum+=arr[i];
                
            }
            if (sum>large)
            {
                large=sum;

            }
        }
    }
    cout<<large<<endl;
}