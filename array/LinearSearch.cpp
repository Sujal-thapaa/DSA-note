//linear Search
//target=7
//target=15


#include<iostream>
using namespace std;


int linear(int arr[] , int size)
{

    for (int i=0; i<size ; i++)
    {
        if(arr[i]==7)
        {
            return i;
        }
        
}
return -1;
}
int main (

)
{

    int arr[]={1,3,5,7,8,9,10,5,16};
    int size=9;
    int count=0;

    cout<< linear(arr, size);
    
    
}