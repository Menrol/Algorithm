//
//  SumOfTwoIntegers.c
//  算法
//
//  Created by WRQ on 2017/12/2.
//  Copyright © 2017年 WRQ. All rights reserved.
//

/**
 * Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.
 
 * Example:
 * Given a = 1 and b = 2, return 3.
 */

#include <stdio.h>

long add(long a,long b) {
    return (long)&((char *)a)[b];
}

int getSum(int a, int b) {
    if (b == 0) {
        return a;
    }
    
    return getSum(a ^ b, (a & b) << 1);
}
