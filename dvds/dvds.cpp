#include <iostream>
#include <fstream>
#include <vector>

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
//std::ifstream cin("dvds2.in", std::ios::in);
//#endif 

int main() {
    std::vector<int> answers;
    int k;
    cin >> k;
    //cout << "k: " << k << endl << endl;
    for (int i = 0; i < k; ++i) {
        int min_ops = 0;
        int n;
        std::vector<int> stack;

        cin >> n;
        //cout << "n: " << n << endl;
        for (int j = 0; j < n; ++j) {
            int d;
            cin >> d;
            stack.push_back(d);
            //cout << "d" << j << ": " << d << endl;
        }

        for (int j = 0; j < n; ++j) {
            for (int u = j; u < n; ++u) {
                if (stack[j] > stack[u]) {
                    min_ops++;
                    break;
                }
            }
        }
        //cout << "min_ops: " << min_ops << endl;
        //cout << endl;
        answers.push_back(min_ops);
    }

    for (int ans : answers) {
        cout << ans << endl;
    }
}
