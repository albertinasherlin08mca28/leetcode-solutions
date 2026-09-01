int longestSubsequence(int* nums, int numsSize) {
    int total_xor = 0;
    bool has_nonzero = false;
    
    for (int i = 0; i < numsSize; i++) {
        total_xor ^= nums[i];
        if (nums[i] != 0) {
            has_nonzero = true;
        }
    }
    
    if (total_xor != 0) {
        return numsSize;
    }
    
    return has_nonzero ? (numsSize - 1) : 0;
}
