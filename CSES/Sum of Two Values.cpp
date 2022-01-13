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
    ll n, x;
    cin>>n>>x;

    vector<std::pair<ll, ll> > a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i].first;
        a[i].second = i+1;
    }

    sort(a.begin(), a.end());

    ll i=0;
    ll j = n-1;

    while(i < j){
        if(a[i].first + a[j].first == x){
            cout<<a[i].second<<" "<<a[j].second<<endl;
            return 0;
        }
        if(a[i].first + a[j].first < x){
            i++;
        }else{
            j--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}