#ifndef NEURON_H
#define NEURON_H

#include "Global.hpp"

class Neuron {
public:
    int activate_function = Sigmoid_Function;
    // doublePtrArray weights;
    vector<double> weights;
    double b;
    // doublePtr *inputs;
    int input_size;
    Neuron() {}
    Neuron(int activate_function, int input_data_size) {
        
        input_size = input_data_size;
        activate_function = activate_function;
        weights.resize(input_size);
        fill(weights.begin(), weights.end(), WEIGHT_INITIAL_VALUE);
        b = NEURON_CONSTANT_VALUE;
        // weights.reset(new double[input_size]);

        // inputs = new doublePtr[input_size];
    }
    ~Neuron() {
        // delete[] weights;
        // delete[] inputs;
    }  

    double getActivateValue(vector<double> inputs) {
        return  sigmoid(inner_product(weights.begin(), weights.end(), inputs.begin(), b)) ; // 0.0 for double calculation
    }

    static double sigmoid(double x) {
        return 1 / (1+exp(-x));
    }   
};


#endif

