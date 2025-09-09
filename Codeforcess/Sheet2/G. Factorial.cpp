#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int t;
  for(int i=1;i<=n;i++){
      cin>>t;
      long long fact=1;
      for(int i=1;i<=t;i++){
          fact=fact*i;
      }
   cout<<fact<<endl;
  }
  

    return 0;
}
