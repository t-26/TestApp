//
//  main.cpp
//  TestApp
//
//  Created by pdj on 2022/06/16.
//

#include <iostream>
#include "TestClass.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    TestClass t;
    t.func(1, 2);
    
    return 0;
}
