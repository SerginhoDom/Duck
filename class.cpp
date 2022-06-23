#include "class.h"

namespace Duck {
    void notQuack::quack() {}
    void Quack::quack() {
        std::cout << "Quack\n";
    }
    void Fly::fly() {
        std::cout << "*Flying*";
    }
    void notFly::fly() {
        std::cout << "*not Flying*";
    }
    void Duck_base::swim() {
        std::cout << "bool-bool\n";
    }
    void MarlladDuck::display() {
        std::cout << "MarlledDuck\n";
    }
    void RedheadDuck::display() {
        std::cout << "RedheadDuck\n";
    }
}