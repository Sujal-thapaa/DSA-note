#include <iostream>
using namespace std;


int sum(int a)
{
    int sum=0;
    int b;
    while (a!=0)
    {

        b=a%10;
        sum+=b;
        a=a/10;
        

    }
    return sum;
}
int main ()
{

    int x=145;

    int a=x; //a=145
    
    

    cout<< "SUM="<<sum(a)<<endl;
}
