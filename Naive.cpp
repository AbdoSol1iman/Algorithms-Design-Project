class Solution {
public:
//Naive
    int maxSatisfaction(vector<int>& satisfaction)
    {
        sort(satisfaction.begin(), satisfaction.end());
        int n = satisfaction.size();
        int maxSat = 0;

        // try all possible starting points
        for (int i = 0; i < n; i++)
        {
            int time = 1;
            int current = 0;

            for (int j = i; j < n; j++) 
            {
                current += satisfaction[j] * time;
                time++;
            }

            maxSat = max(maxSat, current);
        }

        return maxSat;
    }
};