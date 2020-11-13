void CREATE_NEW_ACCOUNT ()
{system("COLOR F4");
printf("\n Enter the account holder name                     :");
scanf("%s", &Account_Holder_Name[i]);


printf("\n Enter the account holder age                      :");
scanf("%d",&age);

while(age<=0 || age>=120)
{
printf(" Enter the valid age\n");
printf("Enter the account holder age                         : ");
scanf("%d",&age);
}
AGE[i]=age;

printf("\n Enter the address                                 :");
scanf("%s",&ADDRESS[i]);
printf("\n Enter the Account Number                          :");
scanf("%d", & ACC_NUMBER[i]);
printf("\n\n##*****## Successfully Created Your Account ##*****##");
printf("\n\n");

}
