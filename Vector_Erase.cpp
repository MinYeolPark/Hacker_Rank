#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<int> v;
	int n,x;
	cin >> n;


	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i]<<" ";
	}
	cout << endl;
	
	int a, b, c;
	cin >> a;
	
	v.erase(v.begin() + a - 1);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cin >> b >> c;
	v.erase(v.begin() + b - 1, v.begin() + c - 1);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " " ;
	}

}
