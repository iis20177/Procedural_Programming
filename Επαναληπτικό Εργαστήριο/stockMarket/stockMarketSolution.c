/* Stock Market Analysis*/

#include <stdio.h>

float find_max_tab(int size, float array[size]);
int find_interesting(int size, float array[], float inter_array[], float value);
void print_table_w_max(int size, float array[], float max);
void print_tab(int size, float array[]);
float assess_CDS(float cds, int risk);
void high_low(int r, int c, float table[r][c], int which_row, int*high, int*low);

int main(){
    float stock_prices[10] = {34.5, 22.4, 77.8, 22.1, 10.0, 11.25, 12, 13, 16, 20.5 };
    float deriv_prices[5] = {30.5, 21.4, 89.8, 20.1, 10.0};
    float cds_prices[11] = {38.5, 33.4, 67.8, 12.1, 16.0, 10.25, 11, 23, 36, 10.1 ,30.4};
    int risk[11] = {90,10,20,30,50,60,30,30,30,10,10};

    float deriv_day_data[5][10] = {
                {30.5,25,22,32.3,30.5,32.6,38.9,40,22,30.5},
                {22.5,21.4,14,40.3,22.5,12.6,38.9,40,39,21.4},
                {30.5,25,22,89.8,34.5,89.8,38.9,40,30,89.8},
                {20.2,35,20.1,12.3,20.1,32.6,38.9,40,22,20.1},
                {45.5,10.0,22,10.0,14.5,23.6,48.9,8,10.0,10.0}
   };

    float interesting_stock[10];
    int ni_stock;
    float interesting_cds[11];
    int ni_cds;
    float max_stock, max_deriv, max_cds;
    int i, high, low;


    /* Calculating Max Values */
    /*
    max_stock = stock_prices[0];
    for(i=1;i<10;i++)
        if (stock_prices[i] > max_stock) {max_stock = stock_prices[i];}

    max_deriv = deriv_prices[0];
    for(i=1;i<5;i++)
        if (deriv_prices[i] > max_deriv) {max_deriv = deriv_prices[i];}

    max_cds = cds_prices[0];
    for(i=1;i<11;i++)
        if (cds_prices[i] > max_cds) {max_cds = cds_prices[i];}
    */

    max_stock = find_max_tab(10, stock_prices);
    max_deriv = find_max_tab(5, deriv_prices);
    max_cds = find_max_tab(11, cds_prices);

    /* Finding Interesting Values */
    /*
    ni_stock=0;
    for(i=0;i<10;i++)
        if (stock_prices[i] > max_stock / 2)
            {interesting_stock[ni_stock++] = stock_prices[i];}

    ni_cds=0;
    for(i=0;i<11;i++)
        if (cds_prices[i] > max_cds / 2)
            {interesting_cds[ni_cds++] = cds_prices[i];}
    */

    ni_stock = find_interesting(10, stock_prices, interesting_stock, max_stock);
    ni_cds = find_interesting(11, cds_prices, interesting_cds, max_cds);

    /* Printing */

    printf("Stock Prices.\n");

    /*
    for(i=0;i<30;i++) printf("-");
    printf("\n");
    */
    print_seperator(30);

    /*
    printf("Max Price:: %4.2f \n",max_stock);
    for(i=0;i<10;i++)
        printf("%s(%3.2f) ",(max_stock == stock_prices[i] ? "-Max-" : ""),stock_prices[i]);
    printf("\n");
    */

    print_table_w_max(10, stock_prices, max_stock);

    printf("Interesting Stock Prices:");

    /*
    for(i=0;i<ni_stock;i++) printf("[%4.2f] ", interesting_stock[i]);
    printf("\n");
    */

    print_tab(ni_stock, interesting_stock);

    /*
    for(i=0;i<10;i++) printf("-");
    printf("\n");
    */

    print_seperator(10);

    /* Derivatives */
    printf("Derivative Prices.\n");

    /*
    for(i=0;i<30;i++) printf("-");
    printf("\n");
    */

    print_seperator(30);

    /*
    printf("Max Price:: %4.2f \n",max_deriv);
    for(i=0;i<5;i++)
        printf("%s(%3.2f) ",(max_deriv == deriv_prices[i] ? "-Max-" : ""),deriv_prices[i]);
    printf("\n");
    */

    print_table_w_max(5, deriv_prices, max_deriv);

    /*
    for(i=0;i<10;i++) printf("-");
    printf("\n");
    */
    print_seperator(10);

    /* Cds Prices */

    printf("CDS Prices.\n");

    /*
    for(i=0;i<30;i++) printf("-");
    printf("\n");
    */

    print_seperator(30);

    /*
    printf("Max Price:: %4.2f \n",max_cds);
    for(i=0;i<11;i++)
        printf("%s(%3.2f) ",(max_cds == cds_prices[i] ? "-Max-" : ""),cds_prices[i]);
    printf("\n");
    */

    print_table_w_max(11, cds_prices, max_cds);

    printf("Interesting CDS Prices:");

    /*
    for(i=0;i<ni_cds;i++) printf("[%4.2f] ", interesting_cds[i]);
    printf("\n");
    */

    print_tab(ni_cds, interesting_cds);

    /*
    for(i=0;i<10;i++) printf("-");
    printf("\n");
    */

    print_seperator(10);

    printf("CDS Assessment\n");
    for (i=0; i<11; i++)
        {
            printf("CDS assessment: cds %4.2f Risk %d Value %4.2f\n", cds_prices[i], risk[i], assess_CDS(cds_prices[i], risk[i]));
        }

    print_seperator(30);

    printf("Derivative Low High\n");

    for (i=0;i<5;i++)
        {
            high_low(5, 10, deriv_day_data, i, &high, &low);
            printf("Derivative %d, high %d / low %d values\n", i, high, low);
        }

    return 0;
}

float find_max_tab(int size, float array[size]){
    int i;
    float max;
    max = array[0];
    for (i=1; i<size; i++)
        if (array[i] > max) {max = array[i];}
    return max;
}

int find_interesting(int size, float array[], float inter_array[], float value){
    int i, counter=0;
    for(i=0;i<size;i++)
        if (array[i] > value / 2)
            {inter_array[counter++] = array[i];}
    return counter;
}

void print_seperator(int size){
    int i;
    for(i=0;i<size;i++) printf("-");
            printf("\n");
}

void print_table_w_max(int size, float array[], float max){
    int i;
    printf("Max Price:: %4.2f \n", max);
    for(i=0;i<size;i++)
        printf("%s(%3.2f) ",(max == array[i] ? "-Max-" : ""), array[i]);
    printf("\n");
}

void print_tab(int size, float array[]){
    int i;
    for(i=0;i<size;i++) printf("[%4.2f] ", array[i]);
        printf("\n");
}

float assess_CDS(float cds, int risk){
    if (cds<20 && risk<50) return 20;
    if (cds>=20 && risk<80) return 10+(cds*risk/100);
    return 100 + (cds*risk/100);
}

void high_low(int r, int c, float table[r][c], int which_row, int*high, int*low){
    *high=0;
    *low=0;
    int j;
    for (j=0; j<c; j++)
    {
        if (table[which_row][j] > table[which_row][c-1]) (*high)++;
        if (table[which_row][j] < table[which_row][c-1]) (*low)++;
    }
}
