#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<numeric>
#include<algorithm>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define temps int temp = 0;cin >> temp;

using namespace std;
typedef long long ll;

int	main()
{
    fio;
    ll n;
    cin >> n;
    vector<ll> a;

    for(ll i=0; i<n; i++){
        temps;
        a.push_back(temp);
    }

    sort(a.begin(), a.end());

    ll sum1 = a[0];
    ll sum2 = 0;

    for(ll i=1; i<n; i++){
        if(sum2 > sum1){
            sum2 += a[i];
        }
        else{
            sum1 += a[i];
        }
    }

    cout<<max(sum1, sum2) - min(sum1, sum2)<<endl;

    return 0;
}
