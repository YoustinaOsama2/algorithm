//problem 12
#include<iostream>
using namespace std;
int n;
long long sum=0;
int arr[1001];

void rec(int index)
{

    if(index==n)
        return  ;

    sum+=arr[index];
    rec(index+1);

}
int main()
{


    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    rec(0);
    cout<<sum<<endl;
    return 0;
}
