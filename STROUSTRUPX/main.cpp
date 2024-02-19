//
//  main.cpp
//  STROUSTRUPX
//
//  Created by 大塚創太 on 2024/02/17.
//

#include <iostream>
#include <list>
#include <string>
#include "3_4.cpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    _3_4::Vector<char> vc(200);
    _3_4::Vector<std::string> vs(17);
    _3_4::Vector<std::list<int>> vli(45);
    
    vs[0] = "Hello";
    vs[1] = "World";
    vs[2] = "!";
    
    _3_4::write(vs);
    _3_4::f2(vs);
    
    _3_4::Vector<int> vi(10);
    for (int i = 0; i < 10; ++i)
        vi[i] = i;
    int val {10};
    std::cout << val << std::endl;
    val = _3_4::sum(vi, val);
    std::cout << val << std::endl;
    
    _3_4::Less_than<int> lti {42};
    _3_4::Less_than<std::string> lts {"Backus"};
    bool b1 = lti(41);
    std::cout << b1 << std::endl;
    bool b2 = lti(42);
    std::cout << b2 << std::endl;
    bool b3 = lts("Backur");
    std::cout << b3 << std::endl;
    bool b4 = lts("Backus");
    std::cout << b4 << std::endl;
    
    std::list<std::string> lst {"Backus", "Backur", "Backut"};
    _3_4::f3(vi, lst, 5, "Backus");
    _3_4::f4(vi, lst, 5, "Backus");
    
    cout << "first: ";
    _3_4::variadic(1,2.2,"hello");
    cout << endl << "second: ";
    _3_4::variadic(0.2, "c", "yuck!", 0, 1, 2);
    cout << endl;
    
    return 0;
}
