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
    cin >> n;

    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    ll max = INT16_MIN;
    ll max_end = 0;

    for(int i=0; i<n; i++){
        max_end = max_end + a[i];
        if(max_end > max){
            max = max_end;
        }
        if(max_end < 0){
            max_end = 0;
        }
        cout<<endl;
    }

    cout << max << endl;

    return 0;
}