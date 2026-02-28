//problem 19
#include<iostream>
#include<iomanip>
using namespace std;
double n;
int sum=0;
int arr[101];

long long rec(int index)
{

    if(index==n)
        return 0;

    sum+=arr[index];
    rec(index+1);
return sum;
}
int main()
{


    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<fixed<<setprecision(6);
    cout<<(rec(0)/n)<<endl;
    return 0;
}
