class Solution {
public:
     int mySqrt(int x) {
        long start = 0, end = x;

        while (start <= end) {
            long mid = start + ((end - start) / 2);
            if (mid * mid <= x) {
                start = mid + 1;
            } else { // > x, we need to close the walls in from the right
                end = mid - 1;
            }
        }
        return (int)start - 1;
    }
};

