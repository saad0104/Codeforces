//Upscaling

#include <bits/stdc++.h>
using namespace std;

void odd()
{
    cout << "##";
}
void even()
{
    cout << "..";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    odd();
                }

                else if ((i + j) % 2 != 0)
                {
                    even();
                }
            }
            cout << endl;
            for (int j = 1; j <= n; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    odd();
                }

                else if ((i + j) % 2 != 0)
                {
                    even();
                }
            }
            cout << endl;
        }
    }
    return 0;
}
