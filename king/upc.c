/***************************************************************
 * Compute a  U n i v e r s a l P r o d u c t C o d e (UPC) digit check
 *
 * Add the first, third, fifth, seventh, ninth and 11th digits
 * Add the 2nd, 4th, 6th, 8th, and 10 digits
 * Multiply the 1st sum by 3 and add it to the 2nd sum
 * Subtract 1 from the total
 * Compute the remainder when the adjusted total is divided by 10.
 * Subtract the remainder from 9.
 *
 * Enter the first (single) digit: 0
 * Enter the first group of five digits: 24600
 * Enter second group of five digits: 01003
 * Check digit: 0
 **************************************************************/
 #include <stdio.h>

 int main()
 {
   int a, b, c, d, e, f, g, h, i, j, k, sum1, sum2, sum3, subtotal, total;

    printf("\e[1;1H\e[2J");   //clear screen

    printf("Enter the first (single) digit:");
    scanf("%1d", &a);

    printf("Enter the first group of five digits:");
    scanf("%1d%1d%1d%1d%1d", &b,&c,&d,&e,&f);

    printf("Enter second group of five digits:");
    scanf("%1d%1d%1d%1d%1d", &g, &h, &i, &j, &k);

    // Add the first, third, fifth, seventh, ninth and 11th digits
    sum1 = a + c + e + g + i + k;

    //Add the 2nd, 4th, 6th, 8th, and 10 digits
    sum2 = b + d + f + h + j;

    // Multiply the 1st sum by 3 and add it to the 2nd sum
    sum3 = (sum1 * 3) + sum2;

    // Subtract 1 from the total
    subtotal = sum3 - 1;

    // Compute the remainder when the adjusted total is divided by 10.
    // Subtract the remainder from 9.
    total  = 9 - (subtotal % 10);

    printf("Check digit: %d\n", total);

    return 0;
 }
