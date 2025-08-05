
//             *
//         *       *
//     *               *
// *                       *
//     *               *
//         *       *
//             *
      


#include <iostream>
using namespace std;

int main()
{
    
    int n=4;

    for (int i=0; i<n ; i++)
    {
        //space
        for (int j=n-i-1;j>0 ; j--)
        {
            cout<<" ";
        }
        //*
        cout<<"*";

        if (i!=0)
        {
            for (int k=0 ; k<(2*i-1) ; k++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    for(int l=0 ; l<3;l++ )
    {

        for (int m=0; m<=l;m++)
        {
            cout<<" ";

        }
        cout<<"*";

        for(int n=0; n<(2*(n-l)-5);n++)
        {
cout<<" "
        }
        cout<<"*";
    }

    
}