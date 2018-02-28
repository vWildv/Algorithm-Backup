#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<string>& combination
  (vector<string>& res, const size_t& choose, const size_t& from);
bool compare (const char& lhs, const char& rhs);

int main () {
  vector<string> res;
  const size_t choose = 3, from = 5;
  combination (res, choose, from);
  for (size_t i = 0; i != res.size(); ++i) {
    cout << res[i] << '\t';
    for (size_t j = 0; j != from; ++j) {
      if (res[i][j] == '1') {
        cout << j + 1 << ' ';
      }
    }
    cout << endl;
  }
  return 0;
}

vector<string>& combination
  (vector<string>& res, const size_t& choose, const size_t& from) {
  string wk = string (choose, '1') + string (from - choose, '0');
  res.push_back (wk);
  size_t found = string::npos;
  while ((found = wk.find("10")) != string::npos) {
    // 1. swap found
    wk[found] ^= wk[found + 1];
    wk[found + 1] ^= wk[found];
    wk[found] ^= wk[found + 1];
    // 2. sort before
    sort (wk.begin(), wk.begin() + found, compare);
    res.push_back (wk);
  }
  return res;
}
bool compare (const char& lhs, const char& rhs) {
  return lhs > rhs;
}