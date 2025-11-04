#include <iostream>
#include <string>

using namespace std;

/// function for control arguments
bool control_arguments(int argc, char* argv[], int &N) {
    if (argc != 2)
        return false;
    try {
        N = stoi(argv[1]);
        if (N < 2)
            return false;
        return true;
    }
    catch (...) {
        return false;
    }
}

/// function for make array and do the sieve
bool* create_sieve(int N) {
    bool* sieve = new bool[N];
    for (int i = 0; i < N; i++)
        sieve[i] = true;
    sieve[0] = false;
    sieve[1] = false;

    for (int i = 2; i * i < N; i++) {
        if (sieve[i]) {
            for (int j = i * i; j < N; j += i) {
                sieve[j] = false;
            }
        }
    }
    return sieve;
}

/// function for print prime numbers and count len
int print_primes(const bool* sieve, int N) {
    int count = 0;
    for (int i = 2; i < N; i++) {
        if (sieve[i]) {
            cout << i << " ";
            count++;
        }
    }
    cout << "\n" << count << endl;
    return count;
}

/// the main function
int main(int argc, char* argv[]) {
    int N;

    if (!control_arguments(argc, argv, N)) {
        cerr << "Error: invalid or missing argument.\n";
        return 1;
    }

    bool* sieve = create_sieve(N);
    print_primes(sieve, N);
    delete[] sieve;

    return 0;
}
