//
//  main.cpp
//  ini_parser
//
//  Created by tkvitko on 15.03.2024.
//

#include <iostream>
#include "IniParser.hpp"
#include "exceptions.h"



int main(int argc, const char * argv[]) {
    
    IniParser parser("/Users/tkvitko/c/netology/cpp_advanced/ini_parser/config/config.ini");
    std::string path = "Section1.var1";
    auto value = parser.get_value<std::string>(path);
    std::cout << value << std::endl;
    
    return 0;
}
