/***************************************************************
 * G.L. 10/2/2016
 *
 * Calculate broker's commission (Prob from King)
 *
 * Transaction size     Commission rate
 * under $2,500         $30+1.7%
 * $2,500 - $6250       $56 + 0.66%
 * $6,250 - $20,000     $76 + 0.34%
 * $20,000 - $50,000    $100 + 0.22%
 * $50,000 - $500,000   $155 + 0.11%
 * Over $500,000        $255 + 0.09%
 * Min charge is $39
 *
 * Enter value of trade: 30000
 * Commission: $166.00
 **************************************************************/
#include<stdio.h>

int main()
{
  float trade, comm;

  printf("Enter value of trade:");
  scanf("%f", &trade);

  printf("trade: %.2f\n", trade);

  if (trade < 2500)
    comm = .017 * trade + 30.00;
  else if (trade < 6250)
    comm = .0066 * trade + 56;
  else if (trade < 20000)
    comm = .0034 * trade + 76;
  else if (trade < 50000)
    comm = .0022 * trade + 100;
  else if (trade < 500000)
    comm = .0011 * trade + 155;
  else
    comm = .0009 * trade + 255;

  if (comm < 39.00)
    comm = 39.00;

  printf("Commission: $%.2f\n", comm);

  return 0;

}
