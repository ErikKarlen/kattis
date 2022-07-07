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
//std::ifstream cin("3.in", std::ios::in);
//#endif 

double solution(double x, double y, double x1, double y1, double x2, double y2) {
    if (x1 <= x && x <= x2) {
        return std::min(std::abs(y-y1),std::abs(y-y2));
    } else if (y1 <= y && y <= y2) {
        return std::min(std::abs(x-x1),std::abs(x-x2));
    } else {
        double d11, d12, d21, d22;
        d11 = std::sqrt((x-x1)*(x-x1) + (y-y1)*(y-y1));
        d12 = std::sqrt((x-x1)*(x-x1) + (y-y2)*(y-y2));
        d21 = std::sqrt((x-x2)*(x-x2) + (y-y1)*(y-y1));
        d22 = std::sqrt((x-x2)*(x-x2) + (y-y2)*(y-y2));
        return std::min({d11, d12, d21, d22});
    }
}

int main() {
    int x, y, x1, y1, x2, y2;
    while (cin >> x >> y >> x1 >> y1 >> x2 >> y2) {
        cout << solution(x, y, x1, y1, x2, y2) << endl;
    }
}
