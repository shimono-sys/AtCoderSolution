#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, count = 0;
  string S;
  cin >> N >> S;

  for (int i = 0; i < S.size(); i++)
  {
    if (S.substr(i, 3) == "ABC")
    {
      count++;
    }
  }

  cout << count << endl;
}
