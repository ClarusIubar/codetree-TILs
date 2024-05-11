arr = input().split()
arr = list(map(int, arr))

a = sum(arr)
b = int(sum(arr)/len(arr))
c = a - b

print(f"{a}\n{b}\n{c}")