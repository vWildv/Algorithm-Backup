#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#define vise "bkpstor"
using namespace std;
string str;
int main() {
  while (cin >> str) {
    if (str.find(vise) != -1)
      printf("Warning\n");
    else
      printf("Safe\n");
  }
  return 0;
}
