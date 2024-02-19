//
//  5_3.cpp
//  STROUSTRUPX
//
//  Created by 大塚創太 on 2024/02/19.
//

#include <iostream>
#include <thread>

#include "5_3.hpp"

using namespace std;

//void f() { cout << "Hello "; }
//void f(vector<double>& v) {
//    for (double& x : v)
//        cout << x << ',';
//    cout << endl;
//}
void f(vector<double>& v, double* res)
{
    for (double& x : v)
        *res += x;
}
//void F::operator()() { cout << "Parallel World!" << endl; }
//void F::operator()() {
//    for (double& x : v)
//        cout << x << ',';
//    cout << endl;
//}
void F::operator()() {
    for (const double& x : v)
        *res += x;
}

void user()
{
    vector<double> some_vec {1,2,3,4,5,6,7,8,9};
    vector<double> vec2 {10,11,12,13,14};
    
    double res1;
    double res2;
    
//    thread t1 {f, ref(some_vec)};
//    thread t2 {F{vec2}};
    thread t1 {f, ref(some_vec), &res1};
    thread t2 {F{vec2, &res2}};
    
    t1.join();
    t2.join();
    
    cout << res1 << ' ' << res2 << endl;
}
