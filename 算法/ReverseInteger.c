//
//  ReverseInteger.c
//  算法
//
//  Created by WRQ on 2017/12/10.
//  Copyright © 2017年 WRQ. All rights reserved.
//

/**
 * Given a 32-bit signed integer, reverse digits of an integer.
 
 * Example 1:
 
 * Input: 123
 * Output:  321
 * Example 2:
 
 * Input: -123
 * Output: -321
 * Example 3:
 
 * Input: 120
 * Output: 21
 * Note:
 * Assume we are dealing with an environment which could only hold integers within the 32-bit signed integer range. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
 */

#include <stdio.h>

int reverse(int x) {
    long result = 0;
    
    while (x != 0) {
        result = result * 10 + x % 10;
        x = x/10;
    }
    
    if (result > 2147483647 || result < -2147483647) {
        return 0;
    }
    
    return (int)result;
}
