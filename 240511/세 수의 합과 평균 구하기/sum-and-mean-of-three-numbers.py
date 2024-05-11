arr = input().split()
arr = list(map(int, arr))
print(f"{sum(arr)}\n{int(sum(arr)/len(arr))}")