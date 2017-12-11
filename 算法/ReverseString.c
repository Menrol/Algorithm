//
//  ReverseString.c
//  算法
//
//  Created by WRQ on 2017/12/11.
//  Copyright © 2017年 WRQ. All rights reserved.
//

/**
 * Write a function that takes a string as input and returns the string reversed.
 
 * Example:
 * Given s = "hello", return "olleh".
 
 */

#include <stdio.h>
#include <string.h>

char* reverseString(char* s) {
    char temp;
    unsigned long len = strlen(s);
    int i = 0;
    int j = (int)len - 1;
    
    while (i < j) {
        temp = s[i];
        s[i++] = s[j];
        s[j--] = temp;
    }
    
    return s;
}
