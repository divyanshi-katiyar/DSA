
class Solution {
public:
    int digitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<int, int>> arr;

        for (int x : nums) {
            arr.push_back({digitSum(x), x});
        }

        sort(arr.begin(), arr.end());

        unordered_map<int, int> originalIndex;
        for (int i = 0; i < n; i++) {
            originalIndex[nums[i]] = i;
        }

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || originalIndex[arr[i].second] == i)
                continue;

            int j = i;
            int cycleSize = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = originalIndex[arr[j].second];
                cycleSize++;
            }

            swaps += cycleSize - 1;
        }

        return swaps;
    }
};
