#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    freopen("aplusbb.in", "r", stdin);
    freopen("aplusbb.out", "w", stdout);

    long long a, b;
    cin>>a>>b;
    cout<<a + b * b;
    return 0;
}
