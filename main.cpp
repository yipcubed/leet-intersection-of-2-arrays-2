#include <cstring>
#include <climits>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>


using namespace std;

ostream& operator<<(ostream& os, const vector<int>& v) {
  os << "[";
  for (int i : v) {
    os << i << " ";
  }
  os << "]";
  return os;
}

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = [](){ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      vector<int> result;
      map<int, int> seen;
      for (int i: nums1) {
        ++seen[i];
      }
      for (int i: nums2) {
        if (seen[i] > 0) {
          --seen[i];
          result.push_back(i);
        }
      }
      return result;
    }
};

void test1() {
  Solution S;
  vector<int> v1{4,9,5};
  vector<int> v2{9,4,9,8,4};
  cout << "[9,4]? " << S.intersect(v1, v2) << endl;

}

void test2() {
  Solution S;
}

void test3() {
  Solution S;
}

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;
  
  return 0;
}

