#include <iostream>
#include "Neurona.h"

Neurona::Neurona(int id, double voltaje, int posX, int posY, int red, int green, int blue) :
        id(id), voltaje(voltaje), posX(posX), posY(posY), red(red), green(green), blue(blue) {}

void Neurona::print() const {
    std::cout << "Neurona: " << id << ", Voltaje: " << voltaje << ", Posición X: " << posX << ", Posición Y: "
              << posY << ", Color RGB: (" << red << "," << green << "," << blue << ")" << std::endl;
}
