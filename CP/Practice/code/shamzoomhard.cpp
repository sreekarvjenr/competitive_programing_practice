#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

int dfs(char u, unordered_map<char, vector<char>>& g, unordered_map<char, int>& v, vector<char>& o) {
    if (v[u] == 1) return 0;
    if (v[u] == 2) return 1;
    v[u] = 1;
    for (char w : g[u]) {
        if (dfs(w, g, v, o) == 0) return 0;
    }
    v[u] = 2;
    o.push_back(u);
    return 1;
}

string ArrayChallenge(string strArr[], int arrLength) {
    unordered_map<char, vector<char>> g;
    unordered_set<char> nodes;
    
    for (int i = 0; i < arrLength; i++) {
        char a = strArr[i][0], b = strArr[i][2];
        char op = strArr[i][1];
        if (op == '>') swap(a, b);
        g[a].push_back(b);
        nodes.insert(a);
        nodes.insert(b);
    }
    
    unordered_map<char, int> v;
    vector<char> o;
    
    for (char u : nodes) {
        if (v[u] == 0) {
            if (dfs(u, g, v, o) == 0) return "0";
        }
    }
    
    reverse(o.begin(), o.end());
    
    unordered_map<char, int> pos;
    for (int i = 0; i < o.size(); i++) {
        pos[o[i]] = i;
    }
    
    for (auto& p : g) {
        for (char w : p.second) {
            if (pos[p.first] > pos[w]) return "0";
        }
    }
    
    return to_string(1);
}

int main() {
    string A[] = {"A>B", "B<K", "R<G"};
    int arrLength = sizeof(A) / sizeof(A[0]);
    cout << "Test case 1: " << ArrayChallenge(A, arrLength) << endl;
    
    string B[] = {"A>B", "A<K", "C<K", "C>Z"};
    arrLength = sizeof(B) / sizeof(B[0]);
    cout << "Test case 2: " << ArrayChallenge(B, arrLength) << endl;
    
    return 0;
}

    // {"A>B", "B<K", "R<G"}, {"A>B", "A<K", "C<K", "C>Z"}