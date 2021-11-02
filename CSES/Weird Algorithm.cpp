#include<iostream>
#include<vector>
using namespace std;

int	main()
{
    long long n = 0;
    cin>>n;
    vector<long long> v;
    v.push_back(n);

    while(n>1 || n<1){
        if(n%2 == 0){
            n = n/2;
            v.push_back(n);
        }
        else{
            n = 3*n+1;
            v.push_back(n);
        }
    }

    for(long long itr : v){
        cout<<itr<<" ";
    }

    return 0;
}
