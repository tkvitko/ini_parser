# ini-files parser

## Сборка
``cmake .``
``cmake --build .``

## Использование
```cpp
    IniParser parser("config.ini");
    std::string path = "Section1.var1";
    auto value = parser.get_value<std::string>(path);
```