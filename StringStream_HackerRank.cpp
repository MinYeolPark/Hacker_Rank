#include <sstream>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> parseInts(string str)
{
	vector<int> vect_ret;
	stringstream ss(str);
	ss.str(str);

	for (int i = 0; ss >> i; ss.ignore())
	{
		vect_ret.push_back(i);
	}

	return vect_ret;
}
int main()
{
	string str;
	cin >> str;
	vector<int>	integers = parseInts(str);
	for (int i = 0; i < integers.size(); i++)
	{
		cout << integers[i] << "\n";
	}


	return 0;
}
