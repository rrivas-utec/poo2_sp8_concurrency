//
// Created by rudri on 10/11/2020.
//

#ifndef poo1_sp6_2020_2_P1_H
#define poo1_sp6_2020_2_P1_H

#include <future>
#include <thread>
#include <iterator>
using namespace std;

void pregunta_1();

template <typename T, template <typename...> class Container>
T sumar(Container<T>& cnt) {
    return T{};
}

#endif //poo1_sp6_2020_2_P1_H
