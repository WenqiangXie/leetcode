// 16. 3Sum Closest
// https://leetcode.com/problems/3sum-close
//
// Runtime: 364 ms, faster than 6.34% of C online submissions for 3Sum Closest.
// Memory Usage: 5.6 MB, less than 100.00% of C online submissions for 3Sum Closest.
//

#include <stdio.h>
#include <math.h>

int threeSumClosest(int *nums, int numsSize, int target) {
    int sum, flag = 0;
    for (int ii = 0; ii < numsSize - 2; ii++) {
        for (int jj = ii + 1; jj < numsSize - 1; jj++) {
            for (int mm = jj + 1; mm < numsSize; mm++) {
                if (0 == flag) {
                    sum = nums[ii] + nums[jj] + nums[mm];
                    flag = 1;
                } else {
                    sum = abs(nums[ii] + nums[jj] + nums[mm] - target) < abs(sum - target) ? nums[ii] + nums[jj] +
                                                                                             nums[mm] : sum;
                }
            }
        }
    }
    return sum;
}
