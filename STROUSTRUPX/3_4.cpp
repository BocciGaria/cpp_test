//
//  3_4.cpp
//  STROUSTRUPX
//
//  Created by 大塚創太 on 2024/02/17.
//

#include "3_4.hpp"

void _3_4::write(const Vector<std::string>& vs)
{
    for (int i = 0; i != vs.size(); ++i)
        if (vs[i] != "")
            std::cout << vs[i] << std::endl;
}

void _3_4::f2(Vector<std::string>& vs)
{
    for (auto& s : vs)
        if (s != "")
            std::cout << s << std::endl;
}

template<typename C, typename P>
int _3_4::count(const C& c, P pred)
{
    int cnt = 0;
    for (const auto& x : c)
        if (pred(x))
            ++cnt;
    return cnt;
}

void _3_4::f3(const Vector<int>& vec, const std::list<std::string>& lst, int x, const std::string& s)
{
    std::cout << "number of values less than " << x
              << ": " << count(vec, Less_than<int>{x})
              << std::endl;
    std::cout << "number of values less than " << s
              << ": " << count(lst, Less_than<std::string>{s})
              << std::endl;
}

void _3_4::f4(const _3_4::Vector<int>& vec, const std::list<std::string>& lst, int x, const std::string& s)
{
    std::cout << "number of values less than " << x
              << ": " << count(vec, [&](int a){ return a < x; })
              << std::endl;
    std::cout << "number of values less than " << s
              << ": " << count(lst, [&](std::string a){ return a < s; })
              << std::endl;
}

template<typename Container, typename Value>
Value _3_4::sum(const Container& c, Value v)
{
    for (auto x : c)
        v += x;
    return v;
}

template<typename T, typename... Tail>
void _3_4::variadic(T head, Tail... tail)
{
    std::cout << head << " ";
    _3_4::variadic(tail...);
}
