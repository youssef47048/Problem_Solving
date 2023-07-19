#include <bits/stdc++.h>
#define MAX 1000000
#define line "\n"
#define ll long long
using namespace std;
/*There are n ropes, you need to cut k

pieces of the same length from them. Find the maximum length of pieces you can get.
Input

The first line contains two integers n
and k (1≤n,k≤10000). Next n lines contain one number each, the length of the rope ai (1≤ai≤107

).
Output

Output one real number, maximum length of pieces you can get. The answer will be considered correct if the
relative or absolute error does not exceed 10−6

Example
Input
4 11
802
743
457
539

Output
200.5
.*/
int n, k;
int arr[100000];
bool good(double m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += floor(arr[i] / m);
    }
    return sum >= k;
}
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    double l = 0, r = 1e8;
    for (int i = 0; i < 100; i++)
    {
        double m = l + (r - l) / 2;
        if (good(m))
            l = m;
        else
            r = m;
    }
    cout <<setprecision(20)<<l;

    return 0;
}
/*4 11
802
743
457
539*/