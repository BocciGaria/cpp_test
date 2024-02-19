//
//  3_4.hpp
//  STROUSTRUPX
//
//  Created by 大塚創太 on 2024/02/17.
//

#ifndef __4_hpp
#define __4_hpp

#include <iostream>
#include <list>
#include <string>

namespace _3_4 {

template<typename T>
class Vector {
private:
    T* elem;
    int sz;
public:
    Vector(int s);
    ~Vector() { delete[] elem; }
    
    T& operator[](int i);
    const T& operator[](int i) const;
    
    int size() const { return sz; }
};

template<typename T>
Vector<T>::Vector(int s)
{
    if (s < 0) throw "Negative size";
    elem = new T[s];
    sz = s;
}

template<typename T>
T& Vector<T>::operator[](int i)
{
    if (i < 0 || size() <= i)
        throw "out of range";
    return elem[i];
}

template<typename T>
const T& Vector<T>::operator[](int i) const
{
    if (i < 0 || size() <= i)
        throw "out of range";
    return elem[i];
}

template<typename T>
inline const T* begin(const Vector<T>& x)
{
    return x.size() ? &x[0] : nullptr;
}

template<typename T>
inline const T* end(const Vector<T>& x)
{
    return begin(x) + x.size();
}

inline void write(const Vector<std::string>& vs);

inline void f2(Vector<std::string>& vs);

template<typename C, typename P>
inline int count(const C& c, P pred);


template<typename T>
class Less_than {
    const T val;
public:
    Less_than(const T& v) :val(v) {}
    bool operator()(const T& x) const { return x < val; }
};

inline void f3(const Vector<int>& vec, const std::list<std::string>& lst, int x, const std::string& s);

inline void f4(const Vector<int>& vec, const std::list<std::string>& lst, int x, const std::string& s);

template<typename Container, typename Value>
inline Value sum(const Container& c, Value v);

template<typename T, typename... Tail>
inline void variadic(T head, Tail... tail);
inline void variadic() {}

}


#endif /* __4_hpp */
