#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int n = 25;
	const int m = 30;
	int k, l;
	cout << "Enter coordinates of a point" << endl;
	cin >> k >> l;
	while (k >= n || l >= m) {
		cout << "Wrong Input" << endl;
		cin >> k >> l;
	}
	int array[n][m];
	array[k][l] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (abs(l - j) > abs(k - i)) {
				array[i][j] = abs(l - j) + 1;
			}
			else {
				array[i][j] = abs(k - i) + 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}
	system("pause");
}