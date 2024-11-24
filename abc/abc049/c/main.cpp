#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;

  reverse(S.begin(), S.end());

  vector<string> dict = {"dream", "dreamer", "erase", "eraser"};
  for (int i = 0; i < dict.size(); i++)
  {
    reverse(dict.at(i).begin(), dict.at(i).end());
  }

  bool can_divide = true;

  for (int i = 0; i < S.size();)
  {
    bool can2_divide = false;
    for (int j = 0; j < dict.size(); j++)
    {
      string d = dict.at(j);
      if (S.substr(i, d.size()) == d)
      {
        can2_divide = true;
        i += d.size();
      }
    }

    if (!can2_divide)
    {
      can_divide = false;
      break;
    }
  }

  if (can_divide)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}
