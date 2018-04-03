int Solution::isPrime(int A) {
    if (A == 1) {
        return false;
    }

    int max = (sqrt(A));
    for (int i = 2; i <= max; i++) {
        if ((A%i) == 0) { //not prime
            return false;
        }
    }
    return true;
}
