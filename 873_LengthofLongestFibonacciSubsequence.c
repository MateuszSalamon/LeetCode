int lenLongestFibSubseq(int* arr, int arrSize) {
    int maxLen = 0;
    int dparr[arrSize][arrSize];
    memset(dparr, 0, sizeof(dparr));

    for(int curr = 2; curr < arrSize; curr++)
    {
        int start = 0;
        int end = curr - 1;
        while (start<end)
        {
            int pair = arr[start] + arr[end];
            if(pair > arr[curr])
            {
                end--;
            }
            else if(pair < arr[curr])
            {
                start++;
            }
            else
            {
                dparr[end][curr] = dparr[start][end] + 1;
                if(dparr[end][curr] > maxLen)
                {
                    maxLen = dparr[end][curr];
                }
                end--;
                start++;
            }
        }

    }
    return maxLen == 0 ? 0: maxLen+2;
}
