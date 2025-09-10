int reverse(int x){
    long int rem, rev=0;
    while(x != 0)
    {
        rem = x%10;
        rev = rev*10+rem;
        x /= 10;
    }
    if (rev > INT_MAX || rev < INT_MIN) {
        return 0;
    }

    return rev;
}