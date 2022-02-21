import time
import prime

MAX_INT = 2147483647

t1 = time.process_time()

for i in range(MAX_INT - 100, MAX_INT):
    prime.is_prime(i)
        
print(time.process_time() - t1, "seconds")