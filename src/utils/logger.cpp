// logger.cpp
#include "logger.h"
#include <iostream>

void Logger::log(const std::string &message) {
    std::cout << message << std::endl;
}