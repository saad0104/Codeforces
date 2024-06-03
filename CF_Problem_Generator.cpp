#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> n >> m;

        string str;
        cin >> str;
        int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0, countF = 0, countG = 0;

        for (int i = 0; i < str.size(); i++)
        {

            if (str[i] == 'A')
            {
                countA++;
            }
            if (str[i] == 'B')
            {
                countB++;
            }
            if (str[i] == 'C')
            {
                countC++;
            }
            if (str[i] == 'D')
            {
                countD++;
            }
            if (str[i] == 'E')
            {
                countE++;
            }
            if (str[i] == 'F')
            {
                countF++;
            }
            if (str[i] == 'G')
            {
                countG++;
            }
        }


        int need = 0;
        if (countA < m)
        {
            need += (m - countA);
        }
        if (countB < m)
        {
            need += (m - countB);
        }
        if (countC < m)
        {
            need += (m - countC);
        }
        if (countD < m)
        {
            need += (m - countD);
        }
        if (countE < m)
        {
            need += (m - countE);
        }
        if (countF < m)
        {
            need += (m - countF);
        }
        if (countG < m)
        {
            need += (m - countG);
        }
        cout << need << endl;
    }

    return 0;
}
