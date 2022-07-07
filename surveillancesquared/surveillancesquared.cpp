#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

/*
The lines below should be commented out when handing it into kattis tool and 
using std::cin; above should be un commented. 
*/
#define _FILE_INPUT
#ifdef _FILE_INPUT
std::ifstream cin("dvds2.in", std::ios::in);
#endif 

double scalar_product(int x1, int y1, int x2, int y2)
{
    return x1 * x2 + y1 * y2;
}

double vector_magnitude(int x, int y)
{
    return sqrt(x*x + y*y);
}

bool is_visible(int x, int y, int a, int b, int x_other, int y_other)
{
    double costheta = scalar_product(a, b, x_other-x, y_other-y) / (vector_magnitude(a, b) * vector_magnitude(x_other-x, y_other-y));
    return costheta >= sqrt(2.0) / 2.0;
}

int main() {
    int x = 0;
    int y = 0;
    int a = 1;
    int b = 1;
    int x_other = 3;
    int y_other = 4;

    //cin >> k;
    ////cout << "k: " << k << endl << endl;
    //for (int i = 0; i < k; ++i) {
    //    int min_ops = 0;
    //    int n;
    //    std::vector<int> stack;

    //    cin >> n;
    //    //cout << "n: " << n << endl;
    //    for (int j = 0; j < n; ++j) {
    //        int d;
    //        cin >> d;
    //        stack.push_back(d);
    //        //cout << "d" << j << ": " << d << endl;
    //    }

    //    for (int j = 0; j < n; ++j) {
    //        for (int u = j; u < n; ++u) {
    //            if (stack[j] > stack[u]) {
    //                min_ops++;
    //                break;
    //            }
    //        }
    //    }
    //    //cout << "min_ops: " << min_ops << endl;
    //    //cout << endl;
    //    answers.push_back(min_ops);
    //}

    //for (int ans : answers) {
    //    cout << ans << endl;
    //}
}
