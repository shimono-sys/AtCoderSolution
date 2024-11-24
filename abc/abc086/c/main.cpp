#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  int t[110000], x[110000], y[110000];
  cin >> N;
  for (int i = 0; i < N; i++)
    cin >> t[i + 1] >> x[i + 1] >> y[i + 1];

  bool result = true;
  for (int i = 0; i < N; i++)
  {
    int dt = t[i + 1] - t[i];
    int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);

    if (dist > dt)
    {
      result = false;
      break;
    }
    else if (dt % 2 == 0)
    {
      if (dist % 2 != 0)
      {
        result = false;
        break;
      }
    }
    else
    {
      if (dist % 2 == 0)
      {
        result = false;
        break;
      }
    }
  }

  if (result)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
