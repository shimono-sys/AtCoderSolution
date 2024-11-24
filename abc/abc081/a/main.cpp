#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int count = 0;
  for (char str : s)
  {
    if (str == '1')
      count++;
  }

  cout << count << endl;
}
