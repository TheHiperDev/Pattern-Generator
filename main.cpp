#include <iostream>
#include <string>
using namespace std;

void pyramid(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void matrix(int n, int m, int width) {
    int a[n][m];
    int x = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = x;
            x++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(width);
            cout << a[i][j];
        }
        cout << endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Use --help for usage\n";
        return 1;
    }

    string cmd = argv[1];

    if (cmd == "--help") {
        cout << "Usage:\n";
        cout << "   pattern.exe <command> [arguments]\n\n";
        cout << "Commands:\n";
        cout << "   --pyramid <rows>                    Print a pyramid\n";
        cout << "   --matrix <rows> <columns> <width>   Generate a matrix\n\n";
        return 0;
    }

    else if (cmd == "--pyramid") {
        if (argc < 3) {
            cout << "Missing arguments: pattern.exe --pyramid <rows>\n";
            return 1;
        }

        int rows = stoi(argv[2]);
        pyramid(rows);
    }

    else if (cmd == "--matrix") {
        if (argc < 4) {
            cout << "Missing arguments: pattern.exe --matrix <rows> <columns> <width>\n";
        }

        int n = stoi(argv[2]);
        int m = stoi(argv[3]);
        int w = stoi(argv[4]);

        matrix(n, m, w);
    }

    else {
        cout << "Unknown command: " << cmd << endl;
        cout << "Use --help\n";
    }

    return 0;
}
