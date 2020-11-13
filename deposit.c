void DEPOSIT_MONEY ()
{

system("COLOR F5");
printf("\n Enter the account number                          :");
scanf("%d",& anumber);

while(ACC_NUMBER[i]!=anumber)
{
printf("\n Please enter valid account number                 :");
scanf("%d",& anumber);
}
if(ACC_NUMBER[i]==anumber)
{
printf("\n Enter the deposit amount                          :");
scanf("%f",& DAmount);
BALANCE[i]+=DAmount;

printf("\n Balance                                           :%.2f",BALANCE[i]);
}

printf("\n\n");


}
