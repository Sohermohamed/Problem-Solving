#include <bits/stdc++.h>
using namespace std;

int main()
{int n;
cin>>n;
long long arr[n+1];
for(int i=1;i<=n;i++){
    cin>>arr[i];}
    int l=arr[1];
    int pos=1;
    for(int i=1;i<=n;i++){
 if(arr[i]<l){
l=arr[i];
pos=i;
 }}cout<<l<<" "<<pos<<endl;

    return 0;
}
