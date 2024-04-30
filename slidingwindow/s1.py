def longest_subarray(nums):
    max_len = 0
    left = 0
    count_zero = 0

    for right in range(len(nums)):
        if nums[right] == 0:
            count_zero += 1

        while count_zero > 1:
            if nums[left] == 0:
                count_zero -= 1
            left += 1

        max_len = max(max_len, right - left)

    return max_len

nums = [1, 1, 0,0, 1, 1, 1]
print(longest_subarray(nums)) 
