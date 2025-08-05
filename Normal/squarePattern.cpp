//Q)1
// ABCD
// ABCD
// ABCD
// ABCD


// #include<iostream>
// using namespace std;

// int main (){
    
   
//     for (int i=1; i<=4; i++ ) {

//         char ch='A';

//         for (int j=1; j<=4; j++) {
//             cout << ch;
//             ch=ch+1;
            
//         }
//         cout << endl;
//     }
// }




// Q2)
// 123
// 456
// 789



#include <iostream>
using namespace std;

int main()
{
    int n=1;
    for (int i=0; i<3 ;i++ )
    {
        for (int j=0; j<3;j++)
        {
            cout<< n;
            n++;

        }
        cout<< endl;
    }

    return 0;
}