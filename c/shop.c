//todo:实现自动售票机

#include "shop.h"

city_info_t city_route[MAX_CITY_SIZE] = {
    {"BeiJing", 0, 1000},
    {"NanJing", 1, 100},
    {"ShangHai", 2, 200}
};

void remind_info()
{
    printf("select your destination\n");
    for (int i = 0; i < MAX_CITY_SIZE; i++) {
        printf("%s-----%d\n", city_route[i].city_name, city_route[i].city_num);
    }
}

void remind_input(int city, int price)
{
    char name[10];
    strcpy(name, city_route[city].city_name);
    printf("your destination is %s. the price is %d.\n", name, price);
    printf("input your money\n");
}

void remind_input_again(int price, int money)
{
    int needed_money = price - money;
    printf("your money is not enough, please add %d\n", needed_money);
}

void remind_charge(int price, int money)
{
    int charge = -(price - money);
    printf("your money is enough. your charge is %d\n", charge);
}

void remind_quit()
{
    printf("input q to quit\n");
    while (1) {
        if (getchar() == 'q') {
            break;
        } else {
            printf("input q to quit\n");
        }
    }
}

int calculate_charge(int price, int money)
{
    return money - price;
}

int is_enough(int price, int money)
{
    int ret;
    if (money >= price) {
        ret = ENOUGH;
    } else {
        ret = NOT_ENOUGH;
    }
    return ret;
}

int main()
{
    int flag = 0;
    int city = 0;

    int price = 0;

    int money = 0;
    int temp_money = 0;
    int charge = 0;

    remind_info();
    scanf("%d", &city);

    price = city_route[city].price;

    remind_input(city, price);
    scanf("%d", &money);

    flag = is_enough(price, money);
    while (flag != ENOUGH) {
        remind_input_again(price, money);
        scanf("%d", &temp_money);
        money += temp_money;
        flag = is_enough(price, money);
    }

    charge = calculate_charge(price, money);
    remind_charge(price, money);

    remind_quit();
    return 0;
}
