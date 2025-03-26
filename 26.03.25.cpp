#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x = 6;
    int y = 1;
    vector<vector<int>> maze = { {1, 1, 1, 1, 1, 1, 1},{1, 0, 0, 0, 0, 0, 3},{1, 0, 1, 0, 1, 0, 1}, {0, 0, 1, 0, 0, 0, 1 }, {1, 0, 1, 0, 1, 0, 1}, {1, 0, 0, 0, 0, 0, 1},{1, 2, 1, 0, 1, 0, 1}};
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
    int count = 15;
    while (true) {
        maze[x][y] = 0;
        char dir;
        cout << "enter dir(N, E, W, S): ";
        cin >> dir;
        switch (toupper(dir)) {
        case 'N':
            x -= 1;
            break;
        case 'E':
            y += 1;
            break;
        case 'S':
            x += 1;
            break;
        case 'W':
            y -= 1;
            break;
        default:
            continue;
        }
        if (x <= 0 || x >= 7 || y <= 0 || y >= 7 ) {
            cout << "dead" << endl;
            break;
        }
        if (maze[x][y] == 1) {
            cout << "dead" << endl;
            break;
        }
        if (maze[x][y] == 3) {
            cout << "finish" << endl;
            break;
        }
        count--;  
        maze[x][y] = 2;
        system("cls");
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 7; j++) {
                cout << maze[i][j] << " ";
            }
            cout << endl;
        }
        cout << "Moves left: " << count << endl;
        if (count == 0) {
            cout << "lost" << endl;
            break;
        }
    }
}
