#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(5);

    cout << s.size() << endl;

    cout << s.top() << endl;

    // if (s.empty())
    // {
    //     /* code */
    //     cout << "Empty";
    // }
    // else
    // {
    //     cout << "Not Empty";
    // }
    while (!s.empty())
    {
        /* code */
        int x = s.top();
        cout << "";
        s.pop();
    }

    return 0;
}