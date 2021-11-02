#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;

int	main()
{
    ll t;
    cin>>t;

    while(t--){
        ll x, y;
        cin>>x>>y;
        if(x<y){
            if(y%2){
                ll temp = y*y;
                cout<<temp-x+1<<endl;
            }else{
                ll temp = (y-1)*(y-1)+1;
                cout<<temp+x-1<<endl;
            }
        }else{
            if(!(x%2)){
                ll temp = x*x;
                cout<<temp-y+1<<endl;
            }else{
                ll temp = (x-1)*(x-1)+1;
                cout<<temp+y-1<<endl;
            }
        }
    }

    return 0;
}
