#include <bits/stdc++.h>
#define MAX 1000000
#define line "\n"
#define ll long long
using namespace std;
int arr[MAX];
int n;

int upper(int x  ){
 int l = -1 , r = n ;
while(l+1<r){
    int m = l + (r-l)/2;
    if(arr[m]<x){
        l = m;
    }else r = m ;

}
//cout<<"upper = "<< r<<line;
return r;
}

int lower(int x){
int l = -1 , r = n ;
while(l+1<r){
    int m = l + (r-l)/2;
    if(arr[m]<=x){
        l = m;
    }else r = m ;

}
//cout<<"lower = "<< l<<line;
return l;

}
int main()
{
     cin>>n;
     for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
     }
     sort(arr,arr+n);
     int k;cin>>k;
     for(int i = 0 ;  i < k ; i++){
        int l , r;cin>>l>>r;
        cout<< lower(r)-upper(l) +1<<line;
     }
    return 0;
}
