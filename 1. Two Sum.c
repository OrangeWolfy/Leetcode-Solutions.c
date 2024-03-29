/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *sum = malloc(2 * sizeof(int));
    *returnSize = 2;

    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                sum[0] = i;
                sum[1] = j;
                return sum;
            }
        }
    }

    return sum;
}
