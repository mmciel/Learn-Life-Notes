unsigned char const _sys_read[] = "\x55\xb8\x03\x00\x00\x00\x89\xe5\x8b\x55\x10\x53\x8b\x4d\x0c\x8b\x5d\x08\xcd\x80\x5b\x5d\xc3";
unsigned char const _sys_write[] = "\x55\xb8\x04\x00\x00\x00\x89\xe5\x8b\x55\x10\x53\x8b\x4d\x0c\x8b\x5d\x08\xcd\x80\x5b\x5d\xc3";

int (*sys_read)(int, void*, unsigned long) = _sys_read;
void (*sys_write)(int, void const*, unsigned long) = _sys_write;

int const true = 1, false = 0;

int get_num(int fd, int *num)
{
    char c;
    int nread;
    int sign = 1;
    *num = 0;
    while(nread = sys_read(fd, &c, 1), nread > 0)
    {
        if(c == '-')
            sign = -1;
        else if(c >= '0' && c <= '9')
        {
            *num *= 10;
            *num += c - '0';
        }
        else
            break;
    }
    if(nread <= 0)
        return false;
    *num *= sign;
    return true;
}

void print_int(int fd, int num)
{
    char buf[16];
    int size = 0;
    while(num > 0)
    {
        buf[size] = num % 10 + '0';
        num /= 10;
        ++size;
    }
    if(size == 0)
    {
        buf[0] = '0';
        size = 1;
    }
    --size;
    while(size >= 0)
    {
        sys_write(fd, buf + size, 1);
        --size;
    }
    buf[0] = '\n';
    sys_write(fd, buf, 1);
}

int main()
{
    char c;
    int a, b;
    while(get_num(0, &a) && get_num(0, &b))
        print_int(1, a + b);
    return 0;
}
