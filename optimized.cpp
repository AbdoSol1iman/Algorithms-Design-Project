class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end()); // O(n log n)

        int totalSatisfaction = 0; 
        int currentSum = 0; 

        
        for (int i = satisfaction.size() - 1; i >= 0; i--) { // Single loop → O(n)
           
            if (currentSum + satisfaction[i] > 0) { //→  O(1)
                currentSum += satisfaction[i]; // → O(1)
                totalSatisfaction += currentSum; // → O(1)
            } else {
                
                break;
            }
        }

        return totalSatisfaction;
    }
};
