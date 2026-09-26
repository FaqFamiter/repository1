#include <iostream>
#include <string>

int main() {
    // === ОБЪЯВЛЕНИЕ ПЕРЕМЕННЫХ ===

    // Личные данные (заполнить собственными данными)
    std::string firstName = "Ян";     // Имя
    std::string lastName = "Долежал";      // Фамилия
    int age = 17;                    // Возраст (целое число)
    char gender = ' M';              // Пол ('M' или 'F')
    double height = 183;            // Рост в метрах
    double weight = 65;            // Вес в килограммах

    // Учебные данные
    std::string group = "252";         // Номер группы
    int course = 2;                 // Курс (1-4)
    double averageGrade = 4.7;      // Средний балл
    bool hasScholarship = true;    // Наличие стипендии

    // Контактные данные
    std::string email = "milanovich.yan@gmail.com";         // Адрес электронной почты
    std::string phone = "79033734655";         // Номер телефона

    // === ВЫВОД ИНФОРМАЦИИ ===

    std::cout << "==============================" << std::endl;
    std::cout << "     ПРОФИЛЬ ПОЛЬЗОВАТЕЛЯ     " << std::endl;
    std::cout << "==============================" << std::endl;

    std::cout << std::endl;
    std::cout << "--- Личные данные ---" << std::endl;
    std::cout << "Имя: " << firstName << std::endl;
    std::cout << "Фамилия: " << lastName << std::endl;
    std::cout << "Возраст: " << age << " лет" << std::endl;
    std::cout << "Пол: " << gender << std::endl;
    std::cout << "Рост: " << height << " м" << std::endl;
    std::cout << "Вес: " << weight << " кг" << std::endl;

    std::cout << std::endl;
    std::cout << "--- Учебные данные ---" << std::endl;
    std::cout << "Группа: " << group << std::endl;
    std::cout << "Курс: " << course << std::endl;
    std::cout << "Средний балл: " << averageGrade << std::endl;
    std::cout << "Стипендия: " << (hasScholarship ? "Да" : "Нет") << std::endl;

    std::cout << std::endl;
    std::cout << "--- Контактные данные ---" << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "Телефон: " << phone << std::endl;

    std::cout << std::endl;
    std::cout << "==============================" << std::endl;

    return 0;
}
