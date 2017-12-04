//
//  LongestSubstringwithAtLeastKRepeatingCharacters.c
//  算法
//
//  Created by WRQ on 2017/12/3.
//  Copyright © 2017年 WRQ. All rights reserved.
//

/**
 * Find the length of the longest substring T of a given string (consists of lowercase letters only) such that every character in T appears no less than k times.
 
 * Example 1:
 
 * Input:
 * s = "aaabb", k = 3
 
 * Output:
 * 3
 
 * The longest substring is "aaa", as 'a' is repeated 3 times.
 * Example 2:
 
 * Input:
 * s = "ababbc", k = 2
 
 * Output:
 * 5
 
 * The longest substring is "ababb", as 'a' is repeated 2 times and 'b' is repeated 3 times.
 */

#include <stdio.h>
#include <string.h>
#include <err.h>

int longestSubstring(char* s, int k) {
    int str[26]={0};
    int index,i = 0,j,m;
    int allMoreThanK;
    int result = 0;
    unsigned long len = strlen(s);
    
    if (k > len) {
        return result;
    }
    
    if (k == len) {
        return k;
    }
    
    while (i + k <= len) {
        index = i;
        for (m = 0; m < 26; m++) {
            str[m] = 0;
        }
        for (j = i; j < len; j++) {
            str[s[j] - 'a']++;
            allMoreThanK = 1;
            for (m = 0; m < 26; m++) {
                if (str[m] > 0 && str[m] < k) {
                    allMoreThanK = 0;
                    break;
                }
            }
            if (allMoreThanK) {
                if (j - i + 1 > result) {
                    result = j - i + 1;
                }
                index = j;
            }
        }
        i = index + 1;
    }
    
    return result;
}
