// Copyright 2021 NNTU-CS
int gcd(int a, int b) {
    int c = 0;
    bool f = 0;
    while (f == 0) {
        if (a >= b)
            a = a-b;
        else
            a = b-a;
        if (a%b == 0) {
            c = b;
            f = 1;
        }
        if (b%a == 0) {
            c = a;
            f = 1;
        }
    }
    return c;
}
