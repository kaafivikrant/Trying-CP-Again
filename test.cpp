#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
typedef long long ll;

void reverseWords(string s) {
    vector<string> temp;
    string tempstr;
    for(int i=0; i<s.size(); i++){
        tempstr.push_back(s[i]);
        if(s[i] == ' '){
            temp.push_back(tempstr);
            tempstr.clear();
        }
    }
    temp.push_back(tempstr);
    for(int i=0; i<temp.size(); i++){
        for(int j=temp[i].size()-1; j>=0; j--){
            swap(temp[i][0], temp[i][j]);
        }
    }
    s.clear();
    for(int i=0; i<temp.size(); i++){
        s = s + temp[i];
    }
    cout << s << endl;
}


int main(){
    

    return 0;
}