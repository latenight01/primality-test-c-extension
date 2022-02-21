# primality test c extension
 A Python module for primality test using [6k+-1 optimization](https://en.wikipedia.org/wiki/Primality_test#Simple_methods) written in C which is almost 
 37 times faster than the same function written in pure Python

## Installation
```
python setup.py install
```
## Usage
```py
import prime
prime.is_prime(2147483647)
```
