//
//  5_3.hpp
//  STROUSTRUPX
//
//  Created by 大塚創太 on 2024/02/19.
//

#ifndef __3_hpp
#define __3_hpp

#include <vector>

using namespace std;

//void f();
//void f(vector<double>& v);
void f(vector<double>& v, double* res);
//struct F {
//    vector<double>& v;
//    F(vector<double>& vv) :v{vv} {}
//    void operator()();
//};
class F {
public:
    F(const vector<double>& vv, double* p) :v{vv}, res{p} {}
    void operator()();
private:
    const vector<double>& v;
    double* res;
};
void user();

#endif /* __3_hpp */
