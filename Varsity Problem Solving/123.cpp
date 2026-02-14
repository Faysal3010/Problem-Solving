

"// Rhombus pattern for N lines. E.g. for N=4:
//    ****
//   ****
//  ****
// ****
"

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << ""Enter number of rows: "";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "" "";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << ""+"";
        }
        cout << endl;
    }
    return 0;
}