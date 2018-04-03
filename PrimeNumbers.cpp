vector<int> Solution::sieve(int A) {
    vector <int> prime;

    int primearray[A];
    for (int i = 0; i <= A; i++) {
        primearray[i] = 1; //set everything prime
    }
    //if (A == 1 ){
    primearray[0] = 0;
  //  primearray[1] = 0;
   // }

    for (int i = 2; i <= (sqrt(A)) ; i++)  {
        if (primearray[i] == 1) { //means its prime
            for (int j = 2; i*j <= A; j++) {
                primearray[i*j] = 0; //setting it as not prime
            }
        }
    }

    for (int i = 2; i < A; i++) {
        if (primearray[i] == 1) {
            prime.push_back(i);
        }
    }
    return prime;
}
