#include "Calculadora.h"


Calculadora::Calculadora(std::string nombre_, std::string modelo_) : nombre(nombre_), modelo(modelo_) {
}

Calculadora::~Calculadora() {
}

std::string Calculadora::to_string() {
    std::stringstream salida;
    salida << "Marca -> " << this->nombre << std::endl
        << "Modelo -> " << this->modelo;
    return std::string();
}

void Calculadora::imprimir() {
    std::cout << this->to_string() << std::endl;
}

float Calculadora::sumar(std::stack<float> valores) {
    float aux = 0;
    while (!(valores.empty())) {
        float valor = valores.top();
        valores.pop();
        aux += valor;
    }
    return aux;
}


float Calculadora::restar(float valor1, float valor2) {
    return ( valor1 - valor2 );
}


float Calculadora::multiplicar(float valor1, float valor2) {
    return ( valor1 * valor2 );
}


float Calculadora::dvidir(float valor1, float valor2) {
    try {
        if (valor2 == 0.00)
        {
            throw valor2;
        }
    }
    catch (valor2)
    {
        cout << "No se puede dividir por 0!!!";
    }
    return 0;
}
