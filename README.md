# Tarea #8: Programación Concurrente

Problemas del curso de Programación Orientada a Objetos 2 - CS1103

## Problema #1 - Suma concurrente

Implementar una función **`sumar`** que utilizando concurrencia realice la suma de todo los valores numericos de un
contenedor secuencial. Generalizar el programa para que acepte cualquier tipo de contenedor secuencial.
```cpp
template <typename T, template <typename...> class Container>
T sumar(Container<T>& cnt);
```
**Casos de uso**
```cpp
    size_t n = 0;
    cin >> n;
    vector<long long> v1(n);
    for (auto &item: v1)
        cin >> item;
    auto total = sumar(v1);
    cout << total << endl;
```

## Problema #2 - Incremento Concurrente
Implementar una función **`increase_values`** que utilizando concurrencia realice incremente todos los valores de un vector en
un valor dado. Generalizar el programa para que acepte cualquier tipo de contenedor secuencial.
```cpp
template<typename T, template<typename ...> class Container>
void increase_values(Container<T>& cnt, T value);
```
**Casos de uso**
```cpp
    size_t n = 0;
    int value = 0;
    cin >> n;
    cin >> value;
    vector<int> v1(n);
    for (auto &item: v1)
        cin >> item;
    increase_values(v1, value);
    auto current = begin(v1);
    cout << *current++;
    while(current != end(v1))
        cout << " " << *current++;
    cout << endl;
```
## Problema #3 - Buscar números primos
Elaborar la función **`get_primes`** que utilizando concurrencia genere una colección de números primos entre **`start`** y **`stop`** (sin incluir `stop`) y que los
almacene en un contenedor. El programa deberá asegurarse que los números sean almacenados en orden.
```cpp
template <typename T, template<typename ...> class Container>
void get_primes(Container<T>& cnt, T start, T stop);
```
**Casos de uso**
```cpp
    int first = 0;
    int last = 0;
    cin >> first >> last;
    vector<int> primes;
    get_primes(primes, first, last);
    auto current = begin(primes);
    cout << *current++;
    while(current != end(primes))
        cout << " " << *current++;
    cout << endl;
```