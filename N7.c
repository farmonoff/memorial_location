#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char market_name[30];
    int product_quantity;
    int market_storey;
    int market_type;
} Market;

Market fill_inf() {
    Market market1;
    printf("Market name: "); scanf("%s", market1.market_name);
    printf("Quantity of products: "); scanf("%d", &market1.product_quantity);
    printf("Market storeys: "); scanf("%d", &market1.market_storey);
    printf("Type of the market:\n1.Supermarket\n2.Hypermarket\nChoose: "); scanf("%d", &market1.market_type);
    return market1;
}   

void output(Market *market1) {
    if (market1->market_storey >= 2 && market1->market_type == 2)
    {
        puts("");
        printf("Market name: %s\nQuantity of products: %d\nMarket storeys: %d\nType of the market: Hypermarket\n", market1->market_name, market1->product_quantity, market1->market_storey);
    }
}

int main() {

    Market market1 = fill_inf();

    output(&market1);

return 0;    
}