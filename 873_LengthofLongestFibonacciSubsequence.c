int lenLongestFibSubseq(int* arr, int arrSize) {
    int maxLen = 0;
    dparr[arrSize][arrSize] = {0};

    for(int curr = 2; curr < arrSize; curr++)
    {
        int start = 0;
        int end = curr - 1;
        while (start<end)
        {
            int pair = arr[start] + ar[end];
            if(pair > arr[curr])
            {
                end--;
            }
            else if(pair < arr[start])
            {
                start++;
            }
            else
            {
                dparr[end][curr] = dp[start][end] + 1;
                if(dparr[end][curr] > maxLen)
                {
                    maxLen = dp[end][curr];
                }
                end--;
                start++;
            }
        }

    }
    return maxLen == 0 ? 0: maxLen+2;
}
