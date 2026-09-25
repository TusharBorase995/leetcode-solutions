class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sorted = score;

        sort(sorted.begin(), sorted.end(), greater<int>());

        vector<string> answer;

        for (int i = 0; i < score.size(); i++) {
            int rank = find(sorted.begin(), sorted.end(), score[i]) - sorted.begin();

            if (rank == 0) {
                answer.push_back("Gold Medal");
            }
            else if (rank == 1) {
                answer.push_back("Silver Medal");
            }
            else if (rank == 2) {
                answer.push_back("Bronze Medal");
            }
            else {
                answer.push_back(to_string(rank + 1));
            }
        }

        return answer;
    }
};