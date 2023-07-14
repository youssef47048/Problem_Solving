#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll arrn[1000000] ;
int n , k;
string bin(ll num){
string ans = "NO";
//
int l = 0 , r = n-1   ;
while(l<=r){
        int m = l+(r-l)/2;
    if(arrn[m]==num) return "YES";
    else if(arrn[m]<num){
        l = m+1;
    }else if(arrn[m]>num){
        r = m-1;
    }
}

return ans;
}
int main()
{
    cin>>n>>k;
    int num;
     for(int i = 0 ; i < n ; i++)cin>>arrn[i];
     for(int i = 0 ; i < k ; i++){
         cin>>num;
        cout<<bin(num)<<endl;

     }
    return 0;
}

