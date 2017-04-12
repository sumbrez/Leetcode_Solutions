/*
033. Search in Rotated Sorted Array
https://leetcode.com/problems/search-in-rotated-sorted-array/

c 9 ms
*/

/*
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.
*/

int search(int* nums, int numsSize, int target) {
    for (int i=0;i<numsSize;i++)
        if (nums[i]==target)
            return i;
    return -1;
}
