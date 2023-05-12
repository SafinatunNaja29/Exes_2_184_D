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
			cout << "\nArray should have and maximum 81 elements.\n\n";
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

void BinarySearch() {
	char ch;
	do {
		cout << " masukan element yang ingin dicari:\n ";
		cin >> n;
		int safinatun = 0;
		int naja = n - 1;
		while (safinatun <= naja) {
			int mid = (safinatun + naja) / 2;
			if (saff[mid] == n) {
				cout << " found " << endl;
				return;
			}
			else if (n < saff[mid]) {
				naja = mid - 1;
			}
			else (n > saff[mid]); {
				safinatun = mid + 1;

			}
			cout << " not found " << endl;
		}
		while (ch == 'y' || ch == 'Y');
	}

int main() 
{
	input;
	BinarySearch;
	return 0;
}