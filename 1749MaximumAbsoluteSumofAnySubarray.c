int maxAbsoluteSum(int* nums, int numsSize) {

    int big_sum = 0;
    int big_diff = 0;
    int sum_in_window = 0;
    int index = 0;

    for(index = 0; index <= numsSize - 1; index++)
    {

        sum_in_window += nums[index];
        if(sum_in_window > big_sum)
        {
            big_sum = sum_in_window;
        }
        if(sum_in_window < big_diff)
        {
            big_diff = sum_in_window;
        }
    }

    return big_sum - big_diff < 0 ? big_diff - big_sum : big_sum - big_diff;
    
}
