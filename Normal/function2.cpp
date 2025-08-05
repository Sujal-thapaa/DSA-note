#include <iostream>
using namespace std;


int bio(int n , int r)
{

    int nFacto=1, rFacto=1 , subFacto=1;
    
    for (int i=1 ; i<=n ;i++)
    {
        nFacto*=i;
    }

    for (int i=1 ; i<=r ;i++)
    {
        rFacto*=i;
    }
    for (int i=1 ; i<=(n-r) ;i++)
    {
        subFacto*=i;
    }

    return ((nFacto)/(subFacto)*(rFacto));


}

int main ()
{
    int a=8, b=2;
    
    cout<<"Bionomial Cofficient / Combination= "<< bio(a,b)<< endl;

    
}
