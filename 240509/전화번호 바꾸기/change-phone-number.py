arr = input().split("-")
a = int(arr[0])
x = int(arr[1])
y = int(arr[2])

x, y = y, x
print(f"{a:03d}-{x}-{y}")