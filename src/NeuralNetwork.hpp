#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H

#include "NeuralNetworkLayer.hpp"

class NeuralNetwork {
public:
    int layers_num;
    int activate_function = Sigmoid_Function;
    int input_size;
    vector<NeuralNetworkLayer> nnLayers;
    Neuron *last_neuron;
    NeuralNetwork() {}
    NeuralNetwork(int layers_num, int activate_function, int input_size) {
        this->layers_num = layers_num;
        this->activate_function = activate_function;
        this->input_size = input_size;
        // down line has problem
        nnLayers.resize(input_size);
        fill(nnLayers.begin(), nnLayers.end(), NeuralNetworkLayer(activate_function, input_size));
        // nnLayers = new NeuralNetworkLayer[layers_num]{{activate_function, input_size}};
        last_neuron = new Neuron(activate_function, input_size);
    }

    double getResult(vector<double> input) {
        vector<double> layer_output = input;
        // layer_output.assign(input.begin(), input.end());
        // cout<< "getResult "<<endl;

        cout<<endl;
        for(int i=0; i< layers_num; i++) {
            layer_output = nnLayers[i].getOutput(layer_output);            
        }
        // cout<< "last_neuron input_size:"<< last_neuron->input_size <<", "<< last_neuron->activate_function <<endl;
        // cout << "output : "<<last_neuron->getActivateValue(layer_output) <<endl;
        return last_neuron->getActivateValue(layer_output);

    }

    double train(vector<double> input, double y) {
        vector<double> layer_output = input;
        for(int i=0; i< layers_num; i++) {
            layer_output = nnLayers[i].getOutput(layer_output);
        }
        double result  = last_neuron->getActivateValue(layer_output);
        double error = logisticLossFunction(y, result) ;
        return last_neuron->getActivateValue(layer_output);

    }

    double logisticLossFunction(double y, double y_) {
        return -( (y*log2(y_)) + ( (1-y)*log(1-y_)   ) ) ;
    }

    ~NeuralNetwork() {
        //  delete[] nnLayers;
         delete last_neuron;
    }  
};

#endif