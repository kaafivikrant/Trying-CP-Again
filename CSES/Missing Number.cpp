#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
typedef long long ll;

int	main()
{
    ll n;
    cin >> n;

    unordered_map<ll, ll> m;
    for(ll i=1; i<=n; i++){
        m[i] = false;
    }
    vector<ll> a(n);

    for (ll i = 0; i < n; i++){
        cin >> a[i];
        m[a[i]] = true;
    }

    for(ll i=1; i<=n; i++){
        if(m[i] == false){
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}

