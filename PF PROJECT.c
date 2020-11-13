#include <stdio.h>
int option,age,anumber,i=0,j;
float DAmount,WAmount;
char choise;
char Account_Holder_Name[5];
char ADDRESS[5];
int AGE[5];
float BALANCE[5];
float INTEREST[5];
int ACC_NUMBER[5];

void CREATE_NEW_ACCOUNT ();
void DEPOSIT_MONEY ();
void WITHDRAWAL_MONEY ();
void ACCOUNT_DETAILS ();

int main ()
{
system("COLOR F3");
 printf("\n\n\n\t\t***********************BANK OF CEYLON*************************\n\n\n");


printf("OPTIONS\n");
printf("1- Create Account\n");
printf("2- Deposit Money\n");
printf("3- Withdrawal Money\n");
printf("4- Display Account Details\n");
printf("5- Exit\n");

while (i<5)
{


    for(int j=1; j<=5; j++)
    {
printf("\n Enter the option (1/2/3/4/5)                      :");
scanf("%d", &option);


            switch(option)
            {
            case 1:
                CREATE_NEW_ACCOUNT ();
                break;
            case 2:

                DEPOSIT_MONEY ();
                break;
            case 3:
                WITHDRAWAL_MONEY ();
                break;
            case 4:
                ACCOUNT_DETAILS ();
                break;
            case 5:
                j=6;
                break;
            default:
                printf("\n\n##### Enter the valid option #####\n");

            }
     }

     i++;
printf("\n\n Do you want to create another account (y/n)       :");
     scanf("%s", & choise);

        switch(choise)
        {
        case 'Y': case 'y':

            continue;

        break;


        case 'N': case 'n':

            i=5;

         break;

        default:

        printf("\n Please enter valid option");
printf("\n\n Do you want to create another account (y/n)       :");
     scanf("%s", & choise);

        }

}

    return 0;
}



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
void ACCOUNT_DETAILS ()
{
    system("COLOR F9");
if(AGE[i]<18 && BALANCE[i]<1000)
{

        INTEREST[i]=BALANCE[i]*5/100;
}
else if (AGE[i]<18 && BALANCE[i]>1000)
{
       INTEREST[i]=BALANCE[i]*7/100;
}

else if ( AGE[i]>18 && BALANCE[i]<1000)
{
    INTEREST[i]=BALANCE[i]*2/100;
}
else
{
    INTEREST[i]=BALANCE[i]*3/100;
}


printf("\n\n Name of the account holder                        :%c    ",Account_Holder_Name[i]) ;
printf("\n\n Account number                                    :%d    ",ACC_NUMBER[i]);
printf("\n\n Age of the account holder                         :%d    ",AGE[i]);
printf("\n\n Address of the account holder                     :%c    ",ADDRESS[i]);
printf("\n\n Balance                                           :%.2f  ",BALANCE[i]);
printf("\n\n Interest                                          :%.2f  ",INTEREST[i]);
printf("\n\n Final Balance                                     :%.2f  ",BALANCE[i]+INTEREST[i]);
printf("\n\n");


}
















