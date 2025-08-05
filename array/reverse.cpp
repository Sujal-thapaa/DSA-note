// reverse of an array

#include <iostream>
using namespace std;

void reverse(int arr[] , int size , int r_arr[])
{
    
    for (int i=0 ; i <size ; i++)
    {
        r_arr[i]=arr[size-i-1];

    }
    

}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    int r_arr[size];
    

    reverse(arr , size , r_arr);

    for (int i=0; i <size ; i++)
    {

        cout<< r_arr[i]<<" ";
    }
    cout<<endl;

}