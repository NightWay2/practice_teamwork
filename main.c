#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

int buying(bool* isUserLoggedIn, char* email_from_login);
int account_info(bool* isUserLoggedIn, char* email_from_login);
void display_list_of_products();
void recomendation_algoritm();

int main() {
    int menu_item;
    char email_from_login[32];
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    bool isUserLoggedIn = false;
    printf("Вітаємо вас у нашому застосунку сервісу замовлення їжі!\n");
    while (true) {
        printf("Оберіть пункт меню для того щоб продовжити:\n 1. Дії щодо аккаунта\n 2. Інформація щодо товарів\n 3. Купівля\n 5. Вихід\n");
        printf("Введіть цифру пункту меню:\n");
        menu_item = getch();
        switch (menu_item) {
            case '1':
                account_info(&isUserLoggedIn, email_from_login);
                break;
            case '2':
                display_list_of_products();
                break;
            case '3':
                buying(&isUserLoggedIn, email_from_login);
                break;
            case '4':
                recomendation_algoritm();
                break;
            case '5':
                exit(1);
            default:
                printf("\nВиберіть коректну цифру\n");
        }
    }
}