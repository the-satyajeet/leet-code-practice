class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) {
            return true;
        }
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.size()-1 || flowerbed[i+1] == 0)) {
                flowerbed[i] = 1;
                n--;
                if (n == 0) {
                    return true;
                }
            }
        }
        return false;
    }
};


/*
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();
        int count = 0;
        for(int i = 0; i < s; ++i) {
            if(flowerbed[i] == 0) {
                int prev = (i == 0) ? 0 : flowerbed[i-1];
                int next = (i == s - 1) ? 0 : flowerbed[i+1];

                if(prev == 0 && next == 0) {
                    flowerbed[i] = 1;
                    count += 1;
                }
            }
        }
        return count >= n;
    }
};
*/