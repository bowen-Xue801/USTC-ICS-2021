void rec(short &r0, short &mem)
{
    r0 = 0;
    func(r0, mem);
}

void func(short &r0, short &mem)
{
    r0 ++;
    short temp = mem;
    temp --;
    mem = temp;
    if (temp == 0) return;
    func(r0, mem);
}