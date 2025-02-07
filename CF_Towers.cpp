// Towers

#include <bits/stdc++.h>
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastio();
    int n;
    cin >> n;
    vector<int> vc;

    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        vc.push_back(q);
    }
    int mx = *max_element(vc.begin(), vc.end());

    set<int> st;
    for (int x : vc)
    {
        st.insert(x);
    }

    int size = st.size();

    vector<int> freq(mx + 1, 0);

    for (int i = 0; i < vc.size(); i++)
    {
        freq[vc[i]]++;
    }

    int height = *max_element(freq.begin(), freq.end());

    cout << height << " " << size << endl;

    return 0;
}
