//problem 2
#include<iostream>
using namespace std;

int rec(int n ,int initial_num)
{
    if(initial_num <= n)
       {
        cout<<initial_num<<endl;
        return (rec(n,initial_num+1));
        }


    else
        return 0 ;

};
int main()
{
 int n;
    cin>>n;
    rec(n,1);
return 0;
}
