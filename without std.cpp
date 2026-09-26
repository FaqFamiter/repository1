
#include <iostream>

int main()
{
    ::cout << "Hello";  // ошибки: глобальная область видимости не содержит "cout", "cout": не является членом "`global namespace'", глобальная область видимости не содержит "cout"
    return 0;
}
