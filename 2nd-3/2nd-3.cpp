#include <iostream>
using namespace std;

int main()
{
	int x, y, sum = 0;
	cin >> x;
	cin >> y;
	cout << "N 값은 :" << x << ',' << "M 값은 :" << y << endl;

	for (int i = 1; i <= x; i++)
	{
		if (i % y == 0)
		{
			sum = sum + i;
		}
	}
	cout << sum << endl;
	return 0;
}