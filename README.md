# Eratosthenes Sieve in C++


## Features

- Uses a **dynamically allocated array** for the sieve.  
- Handles **command line arguments**.  
- Validates input and prints error message for invalid or missing arguments.  
- Structured with separate functions:
  - `control_arguments(argc, argv, N)` — checks input arguments and stores `N`.  
  - `create_sieve(N)` — creates the sieve and marks prime numbers.  
  - `print_primes(sieve, N)` — prints prime numbers and their count.

---

## Compilation and Run

### Using g++ (CLI)
```bash
g++ eratosthenes.cpp -o eratosthenes
./eratosthenes <N>
