#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<numeric>
#include<algorithm>
#include<set>
#include<utility>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
typedef long long ll;

int main(){
    fio;
    ll n;
    cin>>n;

    ll curr = 0;
    vector<std::pair<ll, ll> > v;

    for(ll i=0; i<n; i++){
        ll a, b;
        cin>>a>>b;
        v.push_back(make_pair(b,a));
    }

    sort(v.begin(), v.end());

    ll total = 0;

    for(ll i=0; i<v.size(); i++){
        if(v[i].second >= curr){
            curr = v[i].first;
            total++;
        }
    }

    cout<<total<<endl;

    return 0;
}