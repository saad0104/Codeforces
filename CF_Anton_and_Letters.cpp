// Anton and Letters

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string arr;
    getline(cin, arr);
    list<char> l1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != '{' && arr[i] != '}' && arr[i] != ',' && arr[i] != ' ')
        {
            l1.push_back(arr[i]);
        }
    }

    l1.sort();
    l1.unique();
    int l = l1.size();
    cout << l << endl;

    return 0;
}
