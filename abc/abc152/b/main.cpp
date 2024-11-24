#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  string str_a, str_b;
  for (int i = 0; i < b; i++)
  {
    str_a += to_string(a);
  }

  for (int i = 0; i < a; i++)
  {
    str_b += to_string(b);
  }

  if (str_a > str_b)
    cout << str_b << endl;
  else
    cout << str_a << endl;
}
