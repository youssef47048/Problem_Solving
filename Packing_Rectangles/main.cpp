#include <bits/stdc++.h>
#define MAX 1000000
#define line "\n"
#define ll long long
using namespace std;
ll w,h,n;
bool good(ll m){
return (m/w) * (m/h) >= n;
}
int main()
{
    cin>>w>>h>>n;
    ll l = 0 , r = 1;
    while(!good(r)) r*=2;
    while(l+1<r){
        ll m = l+(r-l)/2;
        if(good(m)){
            r=m;
        }else l = m;
    }
    cout<<r;

     return 0;
}
