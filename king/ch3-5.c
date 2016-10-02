#include <stdio.h>

/********************************************
 * Solution to King - Chapter 3, ex 5
 *
 * George Lee 10/1/2016
 *
 * Output:
 * Enter item number:23
 * Enter unit price:23.56
 * Enter purchase date (mm/dd/yy):10/23/99
 * Item		Unit		Purchase
 *			Price		Date
 * 23			$     23.56	10/23/99
 **********************************************/

int main()
{
   int item, mm, dd, year; 
   float price;
   printf("\e[1;1H\e[2J");

   printf("Enter item number:");
   scanf("%d", &item);
   printf("Enter unit price:");
   scanf("%f", &price);
   printf("Enter purchase date (mm/dd/yy):");
   scanf("%d/%d/%d", &mm, &dd, &year);
   printf("Item\t\tUnit\t\tPurchase\n");
   printf("\t\tPrice\t\tDate\n");
   printf("%d\t\t$%10.2f\t%d/%d/%d\n", item, price, mm, dd, year);


}
