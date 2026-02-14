
//make a recursion n to m of sum

#include <iostream>
using namespace std;

int sum(int n, int m)
{
    if (n == m)
        return m+1;
    return n + sum(n + 1, m);
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << sum(n, m) << endl;
    return 0;
}