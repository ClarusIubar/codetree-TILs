arr = input().split()
arr = list(map(int, arr))
print(f"{sum(arr)} {sum(arr)/len(arr):.1f}")