void prime(short &r0, short &r1)
{
    r1 = 1;
    short i = 2, squ, temp;
    while (1) 
    {
        square(i, squ);
        if (squ > r0) break;
        temp = -r0;
        do 
        {
            temp += i;
        } while (temp < 0);
        if (temp == 0)
        {
            r1 = 0;
            break;
        }
        i++;
    }
}

void square(short &r3, short &r4)
{
    short mask = 1, a = r3, b = r3;
    r4 = 0;
    do
    {
        if (a & mask)
        {
            r4 += b;
            a &= (a - 1);
        }
        b += b;
        mask += mask;
    } while (a);
}