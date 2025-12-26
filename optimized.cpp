class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());

        int totalSatisfaction = 0; 
        int currentSum = 0; 

        
        for (int i = satisfaction.size() - 1; i >= 0; i--) {
           
            if (currentSum + satisfaction[i] > 0) {
                currentSum += satisfaction[i];
                totalSatisfaction += currentSum;
            } else {
                
                break;
            }
        }

        return totalSatisfaction;
    }
};