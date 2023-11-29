#include <iostream>
using namespace std;

int main()
{
	int n, m;
	int sumx = 0;
	int sumy = 0;
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++) {
		int dx, dy;
		cin >> dx >> dy;
		sumx += dx;
		sumy += dy;
	}

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		cout << x + sumx << " " << y + sumy << endl;
	}

	return 0;
}