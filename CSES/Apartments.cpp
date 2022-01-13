#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<numeric>
#include<algorithm>
#include<set>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
typedef long long ll;

int	main()
{
    fio;
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<ll> b(m);
    for(ll i=0; i<m; i++){
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    ll count = 0;

    ll i = 0,j=0;
    while(i < n && j < m){
        if(abs(a[i]-b[j]) <= k){
            count++;
            i++;
            j++;
        }else if(a[i] < b[j]){
            i++;
        }else{
            j++;
        }
    }

    cout << count << endl;

    return 0;
}
