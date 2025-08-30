#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> Si(N);
  for (auto& s : Si) cin >> s;
  int x;
  string y;
  cin >> x >> y;

  for (int i = 0; i < N; i++) {
    if (i+1 == x && Si[i] == y) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}
