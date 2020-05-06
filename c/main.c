#include <stdio.h>
#include "leetcode.h"
#include "util.h"

int main() {
    int question = 34;

    switch (question) {
        case 34:;
            {
                int nums[] = {5, 7, 7, 8, 8, 10}, target = 8, returnSize, *positions;
                positions = searchRange(nums, sizeof(nums) / sizeof(int), target, &returnSize);
                //printArray(nums, sizeof(nums)/sizeof(int), 'd', ",");
            }
            break;
        case 35:;
            {
                int nums[] = {5, 7, 7, 8, 8, 10}, target = 8;
            }
            break;
        default:
            printf("Not chose any one.");
    }
    return 0;
}
