class Solution {
public:
    int numTeams(vector<int>& rating) {
        int resultado = 0;
        for (int j = 0; j < rating.size(); ++j) {
            int max_left = 0; int min_left = 0;
            int max_right = 0; int min_right = 0;

            for (int i = j-1; i >= 0; --i) {
                if (rating[i] > rating[j]) ++max_left;
                else ++min_left;
            }

            for (int k = j +1; k < rating.size(); ++k) {
                if (rating[k] > rating[j]) ++max_right;
                else ++min_right;
            }
            resultado += max_left*min_right + min_left*max_right;
        } 
        return resultado;
    }


};