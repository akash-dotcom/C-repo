// 1.Takes Nothing,Returns Nothing
// 2.Takes Something, Returns Nothing
// 3.Takes Nothing,Returns Something
// 4.Takes Something,Returns Something

// 1.Takes Nothing,Returns Nothing

main()
{
    add();
    getch();
}

void add()
{
    int a, b, c;
    printf("Enter two  numbers:");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("Sum is %d", c);
}

// 2.Takes Something, Returns Nothing

main()
{
    int x, y;
    printf("Enter two numbers:");
    scanf("%d%d", &x, &y);
    add(x, y);
    getch();
}

void add(int a, int b)
{
    int c;
    c = a + b;
    printf("Sum is %d", c);
}

// 3.Takes Nothing,Returns Something

void main()
{
    int s;
    s = add();
    printf("%d", s);
}

int add()
{
    int a, b, c;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    c = a + b;
    return (c);
}

// 4.Takes Something,Returns Something
void main()
{
    int a, b, s;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    s = add(a, b);
    printf("The sum is %d", s);
}

int add(int x, int y)
{
    int c;
    c = x + y;
    return (c);
}
