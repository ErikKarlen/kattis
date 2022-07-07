#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>

using std::endl;
using std::cin;
using std::cout;

/*
The lines below should be commented out when handing it into kattis tool and 
using std::cin; above should be un commented. 
*/
//#define _FILE_INPUT
//#ifndef _FILE_INPUT
//using std::cin;
//#else
//std::ifstream cin("1.in", std::ios::in);
//#endif 

int solution(int n) {
    int days = 1;
    int printers = 1;
    while (printers < n) {
        days++;
        printers *= 2;
    }
    return days;
}

int main() {
    int n;
    while (cin >> n) {
        cout << solution(n) << endl;
    }
}
