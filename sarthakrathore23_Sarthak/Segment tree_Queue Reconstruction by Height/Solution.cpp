class Solution {
 public:
  vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
    vector<vector<int>> ans;

    sort(begin(people), end(people), [](const auto& n, const auto& m) {
      return n[0] == m[0] ? n[1] < m[1] : n[0] > m[0];
    });

    for (const auto& p : people)
      ans.insert(begin(ans) + p[1], p);
    return ans;
  }
};