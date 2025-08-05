// Sub array

#include<iostream>
using namespace std;

int main()
{

    int ar[]={1,2,3,4,5};
    
    for (int i=0; i<5; i++)
    {
        for (int j=i; j<5;j++)
        {
            cout<< "("<< i << ","<< j<<") ,";
        }
        cout<<endl;
    }



    return 0;
}