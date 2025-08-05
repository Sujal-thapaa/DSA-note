#include <iostream>
using namespace std;

int main(){

    int age;
    cout << "Enter your age: ";
    cin>> age; // Input from user
    cout << "Your age is "<< age<< endl;// This will print an uninitialized value, which is undefined behavior.
    return 0;
}