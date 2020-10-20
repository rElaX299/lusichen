//todo:实现自动售票机

#include "shop.hpp"

city_info_t city_route[MAX_CITY_SIZE] = {
    {"BeiJing", 0, 1000},
    {"NanJing", 1, 100},
    {"ShangHai", 2, 200}
};

void remind_info()
{
    cout << "select your destination" << endl;
    for (int i = 0; i < MAX_CITY_SIZE; i++) {
        cout << city_route[i].city_name << "-------" << city_route[i].city_num << endl;
    }
}

void remind_input(int city, int price)
{
    string name = city_route[city].city_name;
    cout << "your destination is " << name << ". " << "the price is " << price << endl;
    cout << "input your money" << endl;
}

void remind_input_again(int price, int money)
{
    int needed_money = price - money;
    cout << "your money is not enough, please add " << needed_money << endl;
}

void remind_charge(int price, int money)
{
    int charge = -(price - money);
    cout << "your money is enough. your charge is " << charge << endl;
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
    cin >> city;

    price = city_route[city].price;

    remind_input(city, price);
    cin >> money;

    flag = is_enough(price, money);
    while (flag != ENOUGH) {
        remind_input_again(price, money);
        cin >> temp_money;
        money += temp_money;
        flag = is_enough(price, money);
    }

    charge = calculate_charge(price, money);
    remind_charge(price, money);

    return 0;
}