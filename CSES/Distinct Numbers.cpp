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
    ll t;
    cin >> t;

    set<ll> m;

    for(ll i=0; i<t; i++){
        ll temp;
        cin >> temp;
        m.insert(temp);
    }

    cout<<m.size()<<endl;

    return 0;
}
