#include <stdio.h>

int removeDuplicates(int *, int);

int main()
{
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int res = removeDuplicates(nums, 10);
    printf("%d\n", res);
    for (int i = 0; i < res; i++)
    {
        printf("%d", nums[i]);
    }
    return 0;
}

int removeDuplicates(int *nums, int numsSize)
{
    int prev, index, uniq;
    prev = nums[0];
    uniq = 1;
    index = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (prev != nums[i])
        {
            uniq++;
            prev = nums[i];
            nums[index + 1] = nums[i];
            index++;
        }
    }
    return uniq;
}