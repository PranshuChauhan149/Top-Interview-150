#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  string correctSpace(vector<string> &ansRow, int maxWidth)
  {
    int size = 0;
    int w = ansRow.size();
    for (int i = 0; i < w; i++)
    {
      size += ansRow[i].size();
    }

    int gaps = w - 1;
    int totalSpaces = maxWidth - size;

    if (gaps == 0)
    {
      string line = ansRow[0] + string(totalSpaces, ' ');
      return line;
    }

    int spacePerGap = totalSpaces / gaps;
    int extraSpaces = totalSpaces % gaps;

    string line = "";
    for (int i = 0; i < w; i++)
    {
      line += ansRow[i];

      if (i < gaps)
      {
        int spacesToInsert = spacePerGap + (extraSpaces-- > 0 ? 1 : 0);

        for (int j = 0; j < spacesToInsert; j++)
        {
          line += ' ';
        }
      }
    }

    return line;
  }

  string leftAlign(vector<string> &ansRow, int maxWidth)
  {
    string line = "";
    for (int i = 0; i < ansRow.size(); i++)
    {
      line += ansRow[i];
      if (i != ansRow.size() - 1)
        line += " ";
    }

    int remainingSpaces = maxWidth - line.size();
    line += string(remainingSpaces, ' ');

    return line;
  }

  vector<string> fullJustify(vector<string> &words, int maxWidth)
  {

    int n = words.size();
    vector<vector<string>> ans;
    vector<string> a;
    int c = 0;
    int i = 0;

    while (i < n)
    {
      if (c + words[i].size() <= maxWidth)
      {
        if (c == 0)
          ans.push_back({});
        ans.back().push_back(words[i]);
        c += words[i].size() + 1;
        i++;
      }
      else
      {
        a.push_back(correctSpace(ans.back(), maxWidth));
        c = 0;
      }
    }

    a.push_back(leftAlign(ans.back(), maxWidth));

    return a;
  }
};
int main()
{
}