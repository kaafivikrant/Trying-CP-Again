#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
typedef long long ll;

void tower_of_hanoi(int n, int from, int to, int aux) {
    if (n == 1) {
        cout << from << " " << to << endl;
        return;
    }
    tower_of_hanoi(n - 1, from, aux, to);
    cout << from <<" "<< to << endl;
    tower_of_hanoi(n - 1, aux, to, from);
}

int	main()
{
    fio;
    ll n;
    cin >> n;
    cout<<(1<<n)-1<<endl;
    tower_of_hanoi(n, 1, 3, 2);

    return 0;
}
