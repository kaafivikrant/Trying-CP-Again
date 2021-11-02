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
    vector<ll> v1;
    vector<ll> v2;

    ll temp = (n*(n+1)/2);
    if(temp%2==1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        ll total = temp/2LL;
        while(n){
            if(total-n >= 0){
                v1.push_back(n);
                total-=n;
            }
            else{
                v2.push_back(n);
            }
            n--;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        ll size1 = v1.size();
        ll size2 = v2.size();
        cout<<v1.size()<<endl;
        for(ll i=0;i<size1;i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        cout<<v2.size()<<endl;
        for(ll i=0;i<size2;i++){
            cout<<v2[i]<<" ";
        }
    }
    return 0;
}
