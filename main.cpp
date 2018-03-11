// Devin Checa
using namespace std;
#include <algorithm>
#include <iostream>
#include <vector>
#include "modify.h"
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	for_each(v.begin(), v.end(), [] (int val)
	{
		cout << val << endl;
	});
	modify addTo(10);
	int test = addTo.change([] (int a) -> int { return 10 + a; });
	cout 
		<< "First "
		<< addTo.value
		<< endl
		<< "Add to returns: "
		<< test 
		<< endl;
	return 0;
}
