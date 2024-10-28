#define BASE_SELLER 1500.00
#define BONUS_RATE 200.00
#define COMMISSION 0.02
int main()
{
    int number;
    float price;
    float bonus;
    float commission;
    float salary;
    printf("input number sold and price:\n");
    scanf("%d %f",&number,&price);
    bonus=BONUS_RATE*number;
    commission=COMMISSION*number*price;
    salary=BASE_SELLER+bonus+commission;
    printf("\n");
    printf("salary=%.2f",salary);
    return 0;
}