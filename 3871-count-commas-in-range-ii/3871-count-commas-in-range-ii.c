long long countCommas(long long num) {
    long long division=1000;
    long long result=0;
    while(num>=division)
    {
        result+=num-division+1;
        division*=1000;

    }
    return result;
}