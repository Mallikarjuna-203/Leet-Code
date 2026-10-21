int reverse(int x){
     long long sign=1;
    if(x<0)
    {
        sign=-1;
        x=sign*x;
    }
    long long int temp=x;
    long long rem=0;
    while(temp>0)
    {
        rem=temp%10+rem*10;
        temp/=10;
    }
    if(rem>INT_MAX||rem<INT_MIN)
        return 0;
    return sign*rem;

}