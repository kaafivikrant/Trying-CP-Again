#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;
#define mod 1000000007

ll find(ll n){
    if(n == 0){
        return 1;
    }
    else{
        return 2 * find(n-1) % mod;
    }
}

int	main()
{
    ll n;
    cin>>n;

    cout<<find(n)<<endl;

    return 0;
}
