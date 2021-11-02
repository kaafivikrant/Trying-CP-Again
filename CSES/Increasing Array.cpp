#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;

int	main()
{
    ll n;
    cin>>n;

    ll a[n]; // 3 2 5 1 7

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll count = 0;
    ll temp = a[0];

    for(int i=0; i<n; i++){
        count += max(0ll, temp - a[i]);
        temp = max(temp, a[i]);
    }

    cout<<count<<endl;

    return 0;
}
