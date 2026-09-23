class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int planted = 0;

        for (int i = 0; i < flowerbed.size(); ++i) {
            bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);
            bool rightEmpty = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0);

            if (flowerbed[i] == 0 && leftEmpty && rightEmpty) {
                ++planted;
                ++i;  // La siguiente posición queda descartada
            }
        }

        return planted >= n;
    }
};