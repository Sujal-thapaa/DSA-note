// Vector Syntax

//vector<int> vec;
//vector<int> vec={1,2,3};
//vector<int> vec(3,0);  this is 3 size vector each value 0. i.e {0,0,0}


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec={1,2,3,4,5,4,3,2,1};
    for(int i: vec)
    {

        cout<<i<<endl;
    }


}