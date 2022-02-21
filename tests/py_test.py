import time

MAX_INT = 2147483647

def is_prime(n: int) -> bool:
    if n <= 3:
        return n > 1
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i ** 2 <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

t1 = time.process_time()

for i in range(MAX_INT - 100, MAX_INT):
    is_prime(i)
        
print(time.process_time() - t1, "seconds")