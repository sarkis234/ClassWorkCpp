#include <iostream>
using namespace std;
#define random(a, b) a + rand() % (b - a + 1)
// #7
void copyArray(int** arr1, int**& arr2) {
    int s1 = _msize(arr1) / sizeof(arr1[0]);
    int s2 = _msize(arr1[0]) / sizeof(arr1[0][0]);
    for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2; j++) {
            arr2[i][j] = arr1[i][j];
        }
    }
}
// #8
void addElem(int*& arr, int ind, int elem) {
    int s = _msize(arr) / sizeof(arr[0]);
    int* buf = new int[s + 1];
    for (int i = 0; i < ind; i++) {
        buf[i] = arr[i];
    }
    buf[ind] = elem;
    for (int i = ind + 1; i < s + 1; i++) {
        buf[i] = arr[i-1];
    }
    delete[] arr;
    arr = buf;
}
// #9
void addCol(int**& arr1, int* arr2, int ind) {
    int s1 = _msize(arr1) / sizeof(arr1[0]);
    int s2 = _msize(arr1[0]) / sizeof(arr1[0][0]);
    int** buf = new int* [s1];
    for (int i = 0; i < s1; i++) {
        buf[i] = new int[s2 + 1];
        for (int j = 0; j < ind; j++) {
            buf[i][j] = arr1[i][j];
        }
        buf[i][ind] = arr2[i];
        for (int j = ind + 1; j < s2 + 1; j++) {
            buf[i][j] = arr1[i][j-1];
        }
    }
    delete[] arr1;
    arr1 = buf;
}
// #10
void delCols(int**& arr, int ind, int n) {
    int s1 = _msize(arr) / sizeof(arr[0]);
    int s2 = _msize(arr[0]) / sizeof(arr[0][0]);
    int** buf = new int* [s1];
    for(int i = 0; i < s1; i++) {
        buf[i] = new int[s2 - n];
        for (int j = 0; j < ind; j++) {
            buf[i][j] = arr[i][j];
        }
        for (int j = ind + n; j < s2+2; j++) {
            buf[i][j - n] = arr[i][j];
        }
    }
    delete[] arr;
    arr = buf;
}
// #11
void delStr(int**& arr) {
    int s1 = _msize(arr) / sizeof(arr[0]);
    int s2 = _msize(arr[0]) / sizeof(arr[0][0]);
    int min = arr[0][0];
    int ind = 0;
    for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2; j++) {
            if (min > arr[i][j]) {
                min = arr[i][j];
                ind = i;
            }
        }
    }
    int** buf = new int*[s1 - 1];
    for (int i = 0; i < ind; i++) {
        buf[i] = arr[i];
    }
    for (int i = ind; i < s1 - 1; i++) {
        buf[i] = arr[i + 1];
    }
}
int main()
{
    srand(time(NULL));
    // #1
    /*int a, b, c, d;
    cout << "enter four numbers ";
    cin >> a >> b >> c >> d;
    if (a < b) a = b;
    if (a < c) a = c;
    if (a < d) a = d;
    cout << "max: " << a;*/

    // #2
    /*for (int i = 0; i > -25; i -= 3) {
        cout << i << " ";
    }*/

    // #3
    /*int s;
    cout << "enter size ";
    cin >> s;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = s-i; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }*/
    
    // #4
    /*int num, summ = 0, c = -1;
    do {
        cout << "enter num ";
        cin >> num;
        summ += num;
        c++;
    } while (num != 0);
    cout << "avg: " << float(summ) / c;*/

    // #5
    /*const int SIZE = 5;
    int arr[SIZE];
    int a, b;
    cout << "enter diapazon ";
    cin >> a >> b;
    if (a > b) swap(a, b);
    for (int i = 0; i < SIZE; i++) {
        arr[i] = random(a, b);
        cout << arr[i] << " ";
    }*/

    // #6
    /*int s1 = 5;
    int s2 = 4;
    int sum = 0, minSum = 0, ind = 0;
    int** arr = new int* [s1];
    for (int i = 0; i < s1; i++) {
        arr[i] = new int[s2];
        for (int j = 0; j < s2; j++) {
            arr[i][j] = random(1, 10);
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    for (int j = 0; j < s2; j++) {
        for (int i = 0; i < s1; i++) {
            sum += arr[i][j];
        }
        if (j == 0) minSum = sum;
        if (minSum > sum) {
            minSum = sum;
            ind = j;
        }
        sum = 0;
    }
    cout << "index of min column: " << ind;*/

    // #7
    /*int** arr = new int*[4];
    int** arr2 = new int*[4];

    for (int i = 0; i < 4; i++) {
        arr[i] = new int[3];
        arr2[i] = new int[3];
        for (int j = 0; j < 3; j++) {
            arr[i][j] = random(1, 10);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    copyArray(arr, arr2);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }*/

    // #8
    /*int* arr = new int[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = random(1, 10);
        cout << arr[i] << " ";
    }
    cout << endl;
    addElem(arr, 2, 10);
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }*/

    // #9
    /*int** arr = new int* [3];
    int* arr2 = new int[3]{1, 2, 3};
    for (int i = 0; i < 3; i++) {
        arr[i] = new int[3];
        for (int j = 0; j < 3; j++) {
            arr[i][j] = random(1, 10);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << arr2[i] << " ";
    }
    addCol(arr, arr2, 1);
    cout << endl << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }*/

    // #10
    /*int** arr = new int* [4];
    for (int i = 0; i < 3; i++) {
        arr[i] = new int[6];
        for (int j = 0; j < 6; j++) {
            arr[i][j] = random(1, 10);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    delCols(arr, 2, 2);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }*/

    // #11
    int** arr = new int* [4];
    for (int i = 0; i < 3; i++) {
        arr[i] = new int[6];
        for (int j = 0; j < 6; j++) {
            arr[i][j] = random(1, 10);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    delStr(arr);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
