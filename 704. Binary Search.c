#include <stdio.h>

int search(int *, int, int);

int main()
{
    int nums[] = {-1, 0, 3, 5, 9, 12};
    printf("%d", search(nums, 6, 9));
    return 0;
}

int search(int *nums, int numsSize, int target)
{
    int min = 0;
    int max = numsSize - 1;
    int mid;
    while (min <= max)
    {
        mid = (min + max) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            max = mid - 1;
        else
            min = mid + 1;
    }
    return -1;
}