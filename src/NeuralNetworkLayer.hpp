#ifndef NEURALNETWORKLAYER_H
#define NEURALNETWORKLAYER_H

#include "Neuron.hpp"


class NeuralNetworkLayer {
public:
    int neuron_num;
    // Neuron *neurons;
    vector<Neuron> neurons;
    // vector<double> output;
    NeuralNetworkLayer() {}
    NeuralNetworkLayer(int activate_function, int neuron_num) {
        // neurons = new Neuron[neuron_num]{{activate_function, neuron_num}};
        neurons.resize(neuron_num);
        fill(neurons.begin(), neurons.end(), Neuron(activate_function, neuron_num) );
        this->neuron_num = neuron_num;
    }

    vector<double> getOutput(vector<double> input) {
        vector<double> output;
        for(size_t i=0; i<neuron_num; i++) {
            output.push_back( neurons[i].getActivateValue(input) );
        }
        return output;
    }

    ~NeuralNetworkLayer() {
        // delete[] neurons;
        // delete[] output;
    }    
};

#endif

