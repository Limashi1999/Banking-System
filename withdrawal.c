void WITHDRAWAL_MONEY ()
{
system("COLOR F6");
printf("\n Enter the account number                          :");
scanf("%d", &anumber);
while(ACC_NUMBER[i]!=anumber)
{
printf("\n Please enter valid account number                 :");
scanf("%d",& anumber);
}
    if(ACC_NUMBER[i]==anumber)
    {
printf("\n Enter the withdrawal amount                       :");
scanf("%f",& WAmount);
    if (BALANCE[i]>=WAmount)
    {
        BALANCE[i]-=WAmount;

    printf("\nBalance                                            :%.2f",BALANCE[i]);
    }
    else
    {
    printf("\n *******INSUFFICIENT BALANCE******** ");
    }

    }


    printf("\n\n");
}
