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
