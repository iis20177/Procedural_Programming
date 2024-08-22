#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

#define SALESMEN 4
#define PRODUCTS 5
void calculateSales(int S, int P, int salesTable[S][P], int price[], int sp[]);
void calculateProductSales(int S, int P, int salesTable [S][P], int prods[]);
void maxArray(int size, int table[], int *max, int *pos);
void printArray(int size, int table[]);

int main()
{
    int price[PRODUCTS]={250,150,320,210,920};
    int sales[SALESMEN][PRODUCTS]={
                    {10,4,5,6,7},
                    {7,0,12,1,3},
                    {4,19,5,0,8},
                    {3,2,1,5,6}};
    int salesPerson[SALESMEN];
    int productSales[PRODUCTS];
    int MaxSalesMan,MaxProduct;
    int items,income;

    calculateSales(SALESMEN,PRODUCTS,sales,price,salesPerson);
    calculateProductSales(SALESMEN,PRODUCTS,sales,productSales);
    maxArray(SALESMEN,salesPerson,&income,&MaxSalesMan);
    maxArray(PRODUCTS,productSales,&items,&MaxProduct);

    printf("SalesMan-Sales \n");
    printArray(SALESMEN,salesPerson);
    printf("Best SalesMan was %d with %d sales\n",MaxSalesMan,income);

    printf("Product-Items \n");
    printArray(PRODUCTS,productSales);
    printf("Best Product was %d with %d items\n",MaxProduct,items);

    return 0;
}
void calculateSales(int S, int P, int salesTable[S][P], int price[], int sp[])
{
    int i,j;
    for(i=0; i<S; i++)
    {
        sp[i]=0;
        for(j=0; j<P; j++)
            sp[i]+=salesTable[i][j]*price[j];
    }
}


void calculateProductSales(int S, int P, int salesTable [S][P], int prods[])
{
    int i,j;
    for(j=0; j<P; j++)
    {
        prods[j]=0;
        for(i=0; i<S; i++)
              prods[j]+=salesTable[i][j];
    }
}

void maxArray(int size, int table[], int *max, int *pos)
{
    int i;
    *max=table[0];
    *pos=0;
    for(i=1; i<size; i++)
        if(table[i] > *max)
        {
            *max=table[i];
            *pos=i;
        }
}
void printArray(int size, int table[])
{
    int i;
    for (i=0; i<size; i++)
        printf("   %d     %d  \n",i,table[i]);
}

