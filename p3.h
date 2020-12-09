//
// Created by rudri on 10/11/2020.
//

#ifndef poo1_sp6_2020_2_P3_H
#define poo1_sp6_2020_2_P3_H

#include <vector>
#include <thread>
#include <mutex>

using namespace std;

extern mutex mtx;

void pregunta_3();

template <typename T, template<typename ...> class Container>
void get_primes(Container<T>& cnt, T start, T stop) {
}

#endif //poo1_sp6_2020_2_P3_H
