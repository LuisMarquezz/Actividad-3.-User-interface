#include <iostream>
#include "AdminNeuronas.h"

void AdminNeuronas::agregarInicio(const Neurona &neurona) {
    neuronas.push_front(neurona);
}

void AdminNeuronas::agregarFinal(const Neurona &neurona) {
    neuronas.push_back(neurona);
}

void AdminNeuronas::mostrar() const {
    for (const auto &neurona : neuronas) {
        neurona.print();
    }
}
