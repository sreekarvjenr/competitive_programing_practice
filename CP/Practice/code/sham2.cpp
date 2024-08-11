#include <bits/stdc++.h>

using namespace std;

string solution(string word) {
    string final = word;
    int n = word.size();

    for(int i = 1; i < n; i++) {
        string temp = word;
        reverse(temp.begin(), temp.begin() + i);
        final = min(final, temp);
    }

    for(int i = 1; i < n; i++) {
        string temp = word;
        reverse(temp.end() - i, temp.end());
        final = min(final, temp);
    }

    return final;
}

int main() {
    string word = "dbaca";
    cout << solution(word) << endl;
    return 0;
}
