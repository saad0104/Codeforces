//Boy or Girl

#include<bits/stdc++.h>
using namespace std;
int main()
{  
	string name;
	cin >> name;
	
	int s=size(name);

	vector<char>nm;
	for(int i=0;i<s;i++)
	{
		nm.push_back(name[i]);
	}

  
  sort(nm.begin(),nm.end());

  auto it = unique(nm.begin(), nm.end());

  nm.resize(distance(nm.begin(), it));



	int sz= nm.size();

  if(sz%2 == 0)
  {
    	cout << "CHAT WITH HER!" << endl;
  }

  else
  {
	    cout << "IGNORE HIM!" << endl;
  }
  
	return 0;
}
