#include <bits/stdc++.h>
using namespace std;

char change_alphabet(char c, int N)
{
  vector<char> alphabet_list = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  int index;
  for (int i = 0; i < alphabet_list.size(); i++)
  {
    if (c == alphabet_list.at(i))
    {
      index = i;
    }
  }

  int changed_index = (index + N) % 26;
  return alphabet_list.at(changed_index);
}

int main()
{
  int N;
  string S;
  cin >> N >> S;
  for (int i = 0; i < S.size(); i++)
  {
    S.at(i) = change_alphabet(S.at(i), N);
  }
  cout << S << endl;
}
