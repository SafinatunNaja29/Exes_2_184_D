#include <iostream>
using namespace std;

int saff[35];
int n;
int i;

void input() {
	while (true) {
		cout << "enter the number of elements in the array : ";
		cin >> n;
		if (n <= 35)
			break;
		else
			cout << "\nArray should have and maximum 35 elements.\n\n";
	}
	cout << "\n------------------\n";
	cout << "Enter Array Elements\n";
	cout << "--------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ".";
		cin >> saff[i];
	}
}

void Algorithm() {
	char ch;
	do {
		cout << " masukan element yang ingin dicari:\n ";
		cin >> n;
		int safinatun = 0;
		int naja = n - 1;
		while (safinatun <= naja) {
			int mid = (safinatun + naja) / 2;
			if (saff[mid] == n) {
				cout << " Found " << endl;
				return;
			}
			else if (n < saff[mid])
				naja = mid - 1;

			else (n > saff[mid]);
			safinatun = mid + 1;

			if (mid == n) cout << " Not Found ";
			cout << "\nNumber of Comparisons : " << n << endl;
			cout << "\n continue search (y/n): ";
			cin >> ch;
		} 
	} while ((ch == 'y') || (ch == 'Y'));
} 

int main()
{
	input();
	Algorithm();
	return 0;
}