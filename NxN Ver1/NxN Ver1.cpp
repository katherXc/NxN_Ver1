﻿// main.cpp
#include <iostream>
using namespace std;

void printMultiplicationTable(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << i << "*" << j << "=" << i * j << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n = 1;
    cout << "請輸入乘法表的大小: ";
    cin >> n;

    printMultiplicationTable(n);

    return 0;
}
