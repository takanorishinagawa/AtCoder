#include <bits/stdc++.h>
using namespace std;

int main() {
  long long x, y;
  cin >> x >> y;

  string tmp;
  for (int i = 0; i < 8; i++) {
    tmp = to_string(x + y);
    reverse(tmp.begin(), tmp.end());

    x = y;
    y = stoll(tmp);
  }

  cout << y << endl;
}
