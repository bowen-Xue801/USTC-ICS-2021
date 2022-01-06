void fib(short &r0, short &r7)
{
    short f = 1, f1 = 1, f2 = 2;
    do 
    {
        temp = f + f;
        f = f1;
        f1 = f2;
        f2 = temp + f1;
        r0 --;
    } while (r0 > 0);
    r7 = f & 1023;
}