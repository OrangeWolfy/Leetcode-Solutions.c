#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *sum = malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                sum[0] = i;
                sum[1] = j;
                return sum;
            }
        }
    }

    return sum;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int numsSize = 4;
    int target = 9;
    int *returnSize;

    int *sum = twoSum(nums, numsSize, target, returnSize);
    printf("[%d, %d]", sum[0], sum[1]);

    free(sum);
    return 0;
}
