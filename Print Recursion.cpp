//problem 1
#include<iostream>
using namespace std;

int rec(int n)
{

    if(n == 0)
        return 0;

    else
        cout<<"I love Recursion\n";

    return (rec(n-1));

};

int main()
{
    int n;
    cin>>n;
    rec(n);
    return 0;
}

