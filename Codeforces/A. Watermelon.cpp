#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
typedef long long ll;

int main(){

    ll size;
    cin >> size;

    if(size <=2){
        cout << "NO" << endl;
        return 0;
    }

    if(size%2 == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}