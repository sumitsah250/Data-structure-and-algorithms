MOD = 10**9 + 7

def num_permutations(n, requirements):
    # Maximum possible number of inversions
    max_inversions = n * (n - 1) // 2

    # Initialize dp table
    dp = [[0] * (max_inversions + 1) for _ in range(n + 1)]
    dp[0][0] = 1  # Base case: 1 way to arrange 0 elements with 0 inversions

    # Populate dp table
    for length in range(1, n + 1):
        for inv in range(max_inversions + 1):
            dp[length][inv] = dp[length - 1][inv]  # Exclude current element
            if inv >= length:
                dp[length][inv] = (dp[length][inv] + dp[length][inv - length]) % MOD

    # Calculate prefix sum array
    prefix = [[0] * (max_inversions + 1) for _ in range(n + 1)]
    for length in range(n + 1):
        for inv in range(max_inversions + 1):
            prefix[length][inv] = dp[length][inv]
            if inv > 0:
                prefix[length][inv] = (prefix[length][inv] + prefix[length][inv - 1]) % MOD
            if length > 0:
                prefix[length][inv] = (prefix[length][inv] + prefix[length - 1][inv]) % MOD

    # Calculate total valid permutations for each requirement
    total_valid_permutations = 1
    for end, cnt in requirements:
        if end >= 0 and cnt <= max_inversions:
            count_valid = (prefix[end][cnt] - (prefix[0][cnt - 1] if cnt > 0 else 0)) % MOD
            total_valid_permutations = (total_valid_permutations * count_valid) % MOD

    return total_valid_permutations

# Example usage
n1 = 3
requirements1 = [[2, 2], [0, 0]]
print(num_permutations(n1, requirements1))  # Expected Output: 2

n2 = 3
requirements2 = [[2, 2], [1, 1], [0, 0]]
print(num_permutations(n2, requirements2))  # Expected Output: 1

n3 = 2
requirements3 = [0, 0],
