#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;

int	main()
{
    ll n;
    cin>>n;
    ll total = 0;
    for(ll i=5; n/i >= 1; i*=5){
        total += n/i;
        cout<<total<<endl;
    }

    return 0;
}
