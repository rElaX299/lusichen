#include<iostream>
#include<string>
using namespace std;

string name;
#define MAX_CITY_SIZE 3
#define ENOUGH 0
#define NOT_ENOUGH 1

typedef struct city_info_s{
    string city_name;
    int city_num;
    int price;
} city_info_t;

void remind_info();
void remind_input(int city, int price);
void remind_input_again(int price, int money);
void remind_charge(int price, int money);

int calculate_charge(int price, int money);
int is_enough(int price, int money);