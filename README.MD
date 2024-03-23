# ini-files parser

## Сборка
``cmake .``
``cmake --build .``

## Использование
```cpp
#include "IniParser.hpp"

IniParser parser("config.ini");
std::string path = "Section1.var1";
auto value = parser.get_value<std::string>(path);
```

## Пример ini-файла с учетом всех обрабатываемых ошибок
```ini
[Section1=]
; комментарий о разделе
var1=5.0 ; комментарий к отдельному параметру
var2=какая-то строка

[Section2]
var1=1
var2=значение_2

; Секция может быть пустой
[Section3]
[Section4]
Mode=1
Vid=2

; Секции могут повторяться
[Section1]
var3=значение
var1=1.0 ; будет присвоено последнее значение
```
