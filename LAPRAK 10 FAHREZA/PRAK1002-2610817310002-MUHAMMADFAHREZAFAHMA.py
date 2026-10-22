def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)

n = int(input())
hasil = [str(fibonacci(i)) for i in range(n)]
print(" ".join(hasil))