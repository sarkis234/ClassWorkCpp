#include <iostream>
using namespace std;
void printArr(int** arr, int s) {
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
int main()
{
	srand(time(NULL));
	int s = 10;
	int** arr = new int* [s];
	for (int i = 0; i < s; i++) {
		arr[i] = new int[s]{};
	}
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < s + 15; i++) {
		int x = rand() % 10;
		int y = rand() % 10;
		arr[x][y] = 1;
	}
	printArr(arr, s);

	int count = 1;
	while (count != 0) {
		count = 0;
		int** arr2 = arr;
		for (int i = 0; i < s; i++) {
			for (int j = 0; j < s; j++) {
				int flagCount = 0;
				if (i != 0 && j != 0 && arr[i - 1][j - 1] == 1 ) {
					flagCount++;
				}
				if (i != 0 && arr[i - 1][j] == 1) {
					flagCount++;
				}
				if (j != 0 && arr[i][j - 1] == 1) {
					flagCount++;
				}
				if (j != 9 && arr[i][j + 1] == 1) {
					flagCount++;
				}
				if (i != 9 && arr[i + 1][j] == 1) {
					flagCount++;
				}
				if (i != 9 && j != 0 && arr[i + 1][j - 1] == 1) {
					flagCount++;
				}
				if (i != 0 && j != 9 && arr[i - 1][j + 1] == 1) {
					flagCount++;
				}
				if (i != 9 && j != 9 && arr[i + 1][j + 1] == 1) {
					flagCount++;
				}
				if (flagCount == 3 && arr[i][j] == 0) arr2[i][j] = 1;
			}
		}
		arr = arr2;
		printArr(arr, s);
	}
}