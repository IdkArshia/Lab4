#include <stdio.h>
int main()
{
char Name[30],id[30];
 float units_cons,sc,am,nam;
 printf("Enter your Name: ");
 scanf("%s",&Name);
 printf("Enter your Customer ID: ");
 scanf("%s",&id);
 printf("Enter your units consumed: ");
 scanf("%f",&units_cons);
 printf("Customer ID:%s \n",id);
 printf("Customer Name:%s \n",Name);
 printf("Units Consumed:%.2f \n",units_cons);
 if(units_cons<=199)
  {
   am=16.20*units_cons;
   sc=0;
   nam=am;
 printf("Amount Charges @Rs.16.20 per unit:%.2f \n",am);
printf("Subcharge Amount:%.2f \n",sc);
printf("Net amount paid by the customer:%.2f \n",nam);
   }
 else if(units_cons>=200 && units_cons<300 )
  {
   am=20.10*units_cons;
   sc=0;
   nam=am;
 printf("Amount Charges @Rs.20.10 per unit:%.2f \n",am);
printf("Subcharge Amount:%.2f\n",sc);
printf("Net amount paid by the customer:%.2f\n",nam);
   }
 else if(units_cons>=300 && units_cons<500 )
  {
   am=27.10*units_cons;
   sc=0;
   nam=am;
printf("Amount Charges @Rs.27.10 per unit:%.2f\n",am);
printf("Subcharge Amount:%.2f\n",sc);
printf("Net amount paid by the customer:%.2f\n",nam);
   }
  else if(units_cons>500)
  {
   am=35.90*units_cons;
   sc=am*0.15;
   nam=am+sc;
   printf("Amount Charges @Rs.35.90 per unit:%.2f\n",am);
printf("Subcharge Amount:%.2f\n",sc);
printf("Net amount paid by the customer:%.2f\n",nam);
   }
   return 0;
}

   