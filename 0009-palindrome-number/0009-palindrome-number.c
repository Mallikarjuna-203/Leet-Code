bool isPalindrome(int x) {
    unsigned int temp=x;
    unsigned int remd=0;
    while(temp>0)
    {
        remd=temp%10+remd*10;
        temp/=10;

    }
    if(remd==x)
    {
        return true;
    }
        return false;
    
    
}