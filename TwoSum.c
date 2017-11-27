//
//  TwoSum.c
//  算法
//
//  Created by Apple on 2017/11/25.
//  Copyright © 2017年 WRQ. All rights reserved.
//

/**
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 
 * Example:
 * Given nums = [2, 7, 11, 15], target = 9,
 
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 */

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
    int *result = (int *)malloc(numsSize * sizeof(int));
    int i,j;
    int index = 0;
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[index] = i;
                result[index + 1] = j;
                index += 2;
            }
        }
    }
    
    return result;
}
