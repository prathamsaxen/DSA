#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

class Solution {
private:
    vector<int> nextSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> next = nextSmallerElement(heights, n);
        vector<int> prev = prevSmallerElement(heights, n);

        int area = 0;  // Initialize area to 0

        for (int i = 0; i < n; i++) {
            int length = heights[i];

            if (next[i] == -1) {
                next[i] = n;  // If there's no next smaller element, use n
            }

            int breadth = next[i] - prev[i] - 1;
            int newArea = length * breadth;
            area = max(area, newArea);
        }

        return area;
    }

public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Initialize the heights array for the first row
        vector<int> heights(m, 0);
        int max_area = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // Update the heights array
                if (M[i][j] == 0) {
                    heights[j] = 0;
                } else {
                    heights[j] += M[i][j];
                }
            }

            // Calculate the maximum area for the updated histogram
            max_area = max(max_area, largestRectangleArea(heights));
        }

        return max_area;
    }
};

int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
    return 0;
}
