#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;

int	main()
{
    int n;
    cin >> n;

    vector<int> a;

    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            a.push_back(i);
        }
    }
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            a.push_back(i);
        }
    }

    if(n<=3 and n!=1){
        cout<<"NO SOLUTION";
    }else{
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
    }

    return 0;
}
