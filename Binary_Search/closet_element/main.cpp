#include <iostream>

using namespace std;

int main()
{
 int n, k;cin>>n>>k;
    long long arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i < k ; i++){
        int x;
        cin>>x;
        int  l = -1 , r  = n;
        while(l+1<r){
            int m  = (r+l)/2 ;
            if(arr[m]< x)
                l = m ;
            else
                r = m;
        }
        cout<< r+1<<endl;
    }
    return 0;
}
