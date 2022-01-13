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
    int sum = 0;

    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }

    ll median = sum/n;

    ll count = 0;

    for(int i=0; i<n; i++){
        if(a[i] > median){
            count += a[i] - median;
        }
        else{
            count += median - a[i];
        }
    }

    cout << count << endl;


    return 0;
}