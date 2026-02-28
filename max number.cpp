//problem 11
#include<iostream>
using namespace std;
int n ,maximum;
int arr[1001];

void rec(int index)
{

    if(index==n)
        return;
   maximum=max(maximum,arr[index]);
   rec(index+1);

}
int main()
{

    maximum=INT_MIN;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    rec(0);
    cout<<maximum;
    return 0;
}
