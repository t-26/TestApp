//
//  TestClass.cpp
//  TestApp
//
//  Created by pdj on 2022/06/16.
//

#include "TestClass.hpp"
#include <iostream>

TestClass::TestClass() {
    std::cout << __FUNCTION__ << std::endl;
}

TestClass::~TestClass() {
    std::cout << __FUNCTION__ << std::endl;
}

int TestClass::func(const int a, const int b) {
    std::cout << __FUNCTION__ << std::endl;

    return a + b;
}

int TestClass::func2(const int a, const int b) {
    std::cout << __FUNCTION__ << std::endl;

    return a + b;
}
