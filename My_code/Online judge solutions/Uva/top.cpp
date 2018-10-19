#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
class CubeStickers 
{
public:
  string isPossible(vector <string>);
};
 
string CubeStickers::isPossible(vector <string> s)
 {
  int n = s.size(), i, ans = 2;
  sort(s.begin(),s.end());
  for (i=2;i<n;i++)
    if (s[i] != s[i-1] || s[i] != s[i-2]) ans++;
  if (ans >= 6)
  {
	  printf("y");
	  return "YES";
  }
  printf("n");

  return "NO";
}