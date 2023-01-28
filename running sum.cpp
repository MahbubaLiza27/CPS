#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf( ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a, b) memset(a, b, sizeof(a) );
#define endl '\n'

const int mx = 1e6 + 123;
int arr[mx] , sum[mx];
int main()
{
    optimize();

    int n;
    cin >> n;

   // int arr[n];
    for( int i = 1; i <= n; i++) cin >> arr[i];

    for(int i = 1; i <= n; i++){
      arr[i] += arr[i-1];
    }
    for( int i = 1; i <= n; i++) cout <<  arr[i] << " ";

    return 0;
}



