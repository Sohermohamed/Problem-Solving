#include <bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
long long arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];}
int x;
cin>>x;
int f=0;
for(int i=0;i<n;i++){
if(arr[i]==x){
    cout<<i<<endl;
    f=1;
    break;
}}
if(f==0){
    cout<<-1<<endl;
}

    return 0;
}
