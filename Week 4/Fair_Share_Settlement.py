def calculate_net_amount(T, test_cases):
    results = []
    
    for i in range(T):
        N, K = test_cases[i]
        individual_share = N // K
        net_amount = N - (individual_share * K)
        results.append(net_amount)
    
    return results

# Input
T = int(input())
test_cases = []

for _ in range(T):
    N, K = map(int, input().split())
    test_cases.append((N, K))

# Calculate and output the results
results = calculate_net_amount(T, test_cases)

for result in results:
    print(result)
