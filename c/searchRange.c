//
// Created by wenqi on 4/16/2020.
//
// 34. Find First and Last Position of Element in Sorted Array
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
//

#include "leetcode.h"

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *searchRange(int *nums, int numsSize, int target, int *returnSize) {
    if(numsSize == 0)
        return NULL;
    printf("[");
    printArray(nums, (numsSize - 1) / 2, 'd', " ");
    printf("]");
    printf("%d", *(nums + (numsSize - 1) / 2));
    printf("[");
    printArray(nums + (numsSize - 1) / 2 + 1, numsSize / 2, 'd', " ");
    printf("]\n");
    //searchRange(nums, (numsSize - 1) / 2, target, returnSize);
    //searchRange(nums + (numsSize - 1) / 2 + 1, numsSize / 2, target, returnSize);

    int imid = (numsSize - 1) / 2, ileft = -1, iright = -1, *index;
    if(*(nums + imid) == target){
        // number in mid index is same as target

    }else if(*(nums + imid) < target){
        // number in mid index is less than target
    }else{
        // number in mid index is max than target
    }
}