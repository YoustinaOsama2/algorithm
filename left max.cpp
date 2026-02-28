//problem 26
#include<iostream>
using namespace std;
int n ,maximum;
int arr[1000001];

void rec(int index)
{

    if(index== n+1)
        return;
   maximum=max(maximum,arr[index]);
   cout<<maximum<<" ";
   rec(index+1);

}
int main()
{

    maximum=INT_MIN;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    rec(1);

    return 0;
}
