#include<stdio.h>
int main()
{
    float purchase_price, year_of_service, annual_depreciation;
    printf("enter purchase value:");
    scanf("%f",&purchase_price);
    printf("enter year of service:");
    scanf("%f",&year_of_service);
    printf("enter annual dep:");
    scanf("%f",&annual_depreciation);

    float salvage_value=(annual_depreciation*year_of_service)/purchase_price;
    printf("salvage value=%.3f",salvage_value);
    return 0;
}