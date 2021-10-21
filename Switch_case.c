main()
{
    int choice,a,b,s,i=1;
    printf("\n1.Addition");
    printf("\n2.Odd-Even");
    printf("\n3.Printing N numbers");
    printf("\n4.Exit");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice){
case 1:
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("Sum of %d and %d is %d",a,b,s);
    break;
case 2:
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0)
        printf("Number is even");
    else
        printf("Number is odd");
        break;
case 3:
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
        printf("\n%d",i);
        break;
case 4: exit(0);
default :
    printf("Enter a valid choice");
    getch();
    }

}
