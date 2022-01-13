#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<numeric>
#include<algorithm>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
typedef long long ll;

int	main()
{
    fio;
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    
    ll minimum = 1e18;

    for(ll mask=0;mask<(1<<n);mask++)
    {
        ll sumA = 0;
        ll sumB = 0;
        for(ll i=0;i<n;i++)
        {
            if(mask&(1<<i))
                sumA += a[i];
            else
                sumB += a[i];
        }
        minimum = min(minimum,abs(sumA-sumB));
    }
    cout << minimum << endl;

    return 0;
}
