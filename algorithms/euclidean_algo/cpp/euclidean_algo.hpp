long long euclidean_GCD(long long x, long long y) {
    long long r;
    do {
        r = x % y;
        x = y;
        y = r;
    } while(r!=0);
    return x;
}