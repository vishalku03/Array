
#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
     bool check(string &word)
     {
          int l = 0;
          int r = word.size() - 1;

          while (l < r)
          {
               if (word[l] != word[r])
               {
                    return false;
               }
               l++;
               r--;
          }
          return true;
     }
     string firstPalindrome(vector<string> &words)
     {
          for (int i = 0; i < words.size(); i++)
          {
               if (check(words[i]))
                    return words[i];
          }
          return "";
     }
};

//LEETCODE PROBLEM  - 2105