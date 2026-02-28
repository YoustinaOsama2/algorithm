//problem 7
#include<iostream>
using namespace std;

int n;
void rec(int row)
{

    if(row > n)
        return;

    int space,star;
    space= n-row;
    star=row*2-1;

    for(int i= 0; i<space; i++)
    {

        cout<<" ";
    }
    for(int i= 0; i<star; i++)
    {

        cout<<"*";

    }
    cout<<endl;
    rec(row+1);

}
int main()
{

    cin>>n;
    rec(1);
    return 0;
}
