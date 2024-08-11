#include <bits/stdc++.h>

using namespace std;

string solution(vector<vector<int>> operations) {
    string res = "";
    set<int> obstacles;
    
    for (const auto& op : operations) {
        if (op[0] == 1) {
            obstacles.insert(op[1]);
        } else {
            int x = op[1], size = op[2];
            auto it = obstacles.lower_bound(x);
            if (it != obstacles.end() && *it <= x + size - 1) {
                res += '1';
            } else {
                res += '0';
            }
        }
    }
    
    return res;
}

int main() {
    vector<vector<int>> operations = { {1, 2}, {1, 5}, {2, 5, 2}, {2, 6, 3}, {2, 2, 1}, {2, 3, 2} };
    cout << solution(operations) << endl; // Expected output: "1010"
    return 0;
}
