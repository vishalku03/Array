#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int findMaximum(int arr[], int n)
     {
          int l = 0;
          int r = n - 1;
          while (l <= r)
          {
               int mid = l + (r - l) / 2;
               if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                    return arr[mid];
               else if (arr[mid] < arr[mid - 1] && arr[mid + 1] < arr[mid])
               {
                    r = mid - 1;
               }

               else if (arr[mid] > arr[mid - 1] && arr[mid + 1] > arr[mid])
               {
                    l = mid + 1;
               }
          }
     }
};

// gfg