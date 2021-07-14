class Solution {
 public:
  string customSortString(string order, string str) {
    unordered_map<char, int> map;
    string res = "";

    for (int i = 0; i < str.size(); i++) {
      map[str[i]]++;
    }

    for (int i = 0; i < order.length(); i++) {
      while (map[order[i]]) {
        res += order[i];
        map[order[i]]--;
      }
    }

    for (auto iter : map) {
      while (iter.second) {
        res += iter.first;
        iter.second--;
      }
    }

    return res;
  }
};
