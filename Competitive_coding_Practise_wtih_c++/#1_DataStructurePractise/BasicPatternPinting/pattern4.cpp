#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j <i; j++)
            cout << " ";
        for (; j < n; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}



// *****
//  ****
//   ***
//    **
//     *