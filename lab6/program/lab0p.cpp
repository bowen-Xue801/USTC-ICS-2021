void lab0p(short &r0, short &r1, short &r7)
{
    if (!r0)
    {
        return;
    }
    else if (r0 < 0)
    {
        r0 = - r0;
        r1 = - r1;
    }
    short mask = 1;
    while (r0)
    {
        if (mask & r1)
        {
            r7 += r1;
            r0 &= r0 - 1;
        }
        r1 += r1;
        mask += mask;
    }
}