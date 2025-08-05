#include <iostream>

using namespace std;

int main(){

    cout << "Enter a number :"<<endl;
    int a;
    cin >> a;

    cout<< "Enter another number :"<<endl;
    int b;
    cin >> b;

    if (a<b)
    {
        cout << a << " is less than " << b << endl;

    } else if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    } 
    else
    {
        cout << a << " is equal to " << b << endl;
    }

    return 0;
}