#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int min;
    // Определили переменную минуты
    printf("Сколько минут вы принимали душ?\n");
    min = get_int();
    // Тут чел должен ввести целое число минут
    int bottles;
    // Определили переменную бутылки
    bottles = min*12;
    // Присвоили бутылкам количество минут умножить на 12 (т.к. 1 минута душа тратит 12 бутылок)
    printf("%i\n",bottles);
    // Показали челу сколько он истратил бутылок
}
