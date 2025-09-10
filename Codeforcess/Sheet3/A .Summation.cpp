#include <bits/stdc++.h>
using namespace std;

int main()
{int n;
cin>>n;
long long sum=0,arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
} cout<<abs(sum)<<endl;
    

    return 0;
}
