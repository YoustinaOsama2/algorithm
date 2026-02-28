//problem 10
#include<iostream>
using namespace std;

int result=1;
int rec(int n)
{
    if(n==0)
        return 0;
    else
    {
       result*=n;
       rec(n-1);
    }
   return result;

}
int main()
{
    int n;
    cin>>n;
    cout<<rec(n);
    return 0;
}
