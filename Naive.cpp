class Solution {
public:
//Naive
    int maxSatisfaction(vector<int>& satisfaction)
    {
        sort(satisfaction.begin(), satisfaction.end()); //→ O(n log n)
        int n = satisfaction.size();
        int maxSat = 0;

        // try all possible starting points
        for (int i = 0; i < n; i++) //→ O(n)
        {
            int time = 1;
            int current = 0;

            for (int j = i; j < n; j++) // Nested loop → O(n^2)
            {
                current += satisfaction[j] * time; //→ O(1)
                time++;
            }

            maxSat = max(maxSat, current);//→ O(1)
        }

        return maxSat;
    }
};
