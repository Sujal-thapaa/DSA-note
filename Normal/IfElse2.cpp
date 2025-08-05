#include <iostream>
using namespace std;

int main(){

    char ac;
    cout << "Enter a character";
    cin>> ac;
    if (ac >= 'A' && ac <= 'Z') {
        cout << ac << " is an uppercase letter." << endl;
    } else if (ac >= 'a' && ac <= 'z') {
        cout << ac << " is a lowercase letter." << endl;
    } else if (ac >= '0' && ac <= '9') {
        cout << ac << " is a digit." << endl;
    } else {
        cout << ac << " is a special character." << endl;
    }
    
}