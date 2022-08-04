#include <bits/stdc++.h>
using namespace std;
int func()
{
        int n;
        cin >> n;
        if (n == 3)
        {
            cout << 3<< " " << 2 << " " << 1 << endl;
            return 0;
        }
        cout << n-1 << " " << n-2 << " ";
        for (int i = 1; i < n - 3; i++)
        {
            cout << i << " ";
        }
        cout << n - 3 << " " << n  << endl;
    return 0;
}
int main(){
    int t;cin>>t;
    while(t--){
        func();
    }
}