//smallest and largest number

#include <iostream>
using namespace std;

int main ()
{
    int ar[]={10, 14, 5, 4, 7};
    int small=ar[0];
    int larg=ar[0];

    for (int i=0; i <5 ;i++)
    {
        if (ar[i]<small)
        {
            small=ar[i];
        }
        if (ar[i]>larg)
        {
            larg=ar[i];
        }

    }

    cout<< larg<< " is largest"<< endl;
    cout<< small<< " is smallest"<< endl;
}