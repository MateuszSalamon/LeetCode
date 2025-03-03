/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    
    int* answer;
    answer = (int*)malloc(numsSize * sizeof(int));
    int less = 0;
    int greater = numsSize - 1;

    for(int lhs = 0; lhs < numsSize; lhs++)
    {
        for(int rhs = numsSize-1; rhs > 0; rhs--)
        {
            if(nums[lhs] < pivot)
            {
                answer[less] = nums[lhs];
                less++;
            }
            if(nums[rhs] > pivot)
            {
                answer[greater] = nums[rhs];
                greater--;
            }
        }
    }
    while (less <= greater)
    {
        answer[less] = pivot;
        less++;
    }
    return answer;
}
