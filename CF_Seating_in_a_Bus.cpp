// Seating in a Bus

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n], b[n];
		bool ff = true;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			b[a[i]] = i;
		}
		for (int i = a[1] + 1; i <= n; i++)
			if (b[i - 1] > b[i])
				ff = 0;
		for (int i = a[1] - 1; i > 0; i--)
			if (b[i + 1] > b[i])
				ff = 0;
		if (ff)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
