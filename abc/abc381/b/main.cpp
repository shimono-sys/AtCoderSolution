#include <bits/stdc++.h>
using namespace std;

int main()
{
  string T;
  cin >> T;

  bool condition1 = true;
  bool condition2 = true;
  bool condition3 = true;
  bool result;

  // 条件1
  if (T.size() % 2 != 0)
  {
    condition1 = false;
  }

  // 条件2
  for (int i = 1; i <= T.size() / 2; i++)
  {
    if (T.at(2 * i - 2) != T.at(2 * i - 1))
    {
      condition2 = false;
      break;
    }
  }

  // 条件3
  for (char a : T)
  {
    int count = 0;
    for (char b : T)
    {
      if (a == b)
        count++;
    }

    if (count != 2)
    {
      condition3 = false;
      break;
    }
  }

  result = condition1 && condition2 && condition3;
  if (result)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
