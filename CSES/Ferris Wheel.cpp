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
    ll n, x;
    cin>>n>>x;
    vector<ll> a(n);
    for(ll i=0; i<n ;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());

    int i=0;
    int j=n-1;
    int count = 0;
    while(i<=j){
        if(a[i]+a[j]<=x){
            i++;
            j--;
            count++;
        }
        else{
            j--;
            count++;
        }
    }

    cout<<count<<endl; 

    

    return 0;
}
