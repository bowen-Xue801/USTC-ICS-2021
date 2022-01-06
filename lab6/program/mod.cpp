void mod(short n, short &r1)
{
    r1 = n;
    short quotient, remainder;
    do 
    {
        div(r1, quotient);
        remainder = r1 & 7;
        r1 = quotient + remainder;
    } while (r1 > 7);
    r1 = (r1 == 7) ? 0 : r1;
}

void div(short &r1, short &r4)
{
    short mask0 = 8, mask1 = 1;
    do 
    {
        if (r1 & mask0) r4 += mask1;
        mask0 = mask0 + mask0;
        mask1 = mask1 + mask1;
    } while (mask0);
}