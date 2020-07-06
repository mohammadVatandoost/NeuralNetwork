
#include "Neuron.hpp"
#include "CustomerData.hpp"


class NeuralNetworkLayer {
public:
    int neuron_num;
    Neuron *neurons;
    // vector<double> output;
    NeuralNetworkLayer() {}
    NeuralNetworkLayer(int neuron_num) {
        neurons = new Neuron[neuron_num]{{Sigmoid_Function, neuron_num}};
        neuron_num = neuron_num;
        // output.reserve(neuron_num);
        // output.reset(new double[neuron_num]);
    }

    vector<double> getOutput(vector<double> input) {
        vector<double> output;
        for(size_t i=0; i<neuron_num; i++) {
            output.push_back( neurons[i].getActivateValue(input) );
        }
        return output;
    }

    ~NeuralNetworkLayer() {
        delete[] neurons;
        // delete[] output;
    }    
};

class NeuralNetwork {
public:
    int layers_num;
    int activate_function = Sigmoid_Function;
    int input_size;
    NeuralNetworkLayer *nnLayers;
    NeuralNetwork() {}
    NeuralNetwork(int layers_num, int activate_function, int input_size) {
        layers_num = layers_num;
        activate_function = activate_function;
        input_size = input_size;
        nnLayers = new NeuralNetworkLayer[layers_num]{{input_size}};
    }

    double getResult(CustomerData cData) {
        // implement this
        // what to do for string data
        return 0;

    }

    ~NeuralNetwork() {
         delete[] nnLayers;
    }  
};

class TrainNN {

};

int main(int argc, char *argv[]) {
   vector<CustomerData> data_set = CustomerData::readDataSet();
   vector<CustomerData> train_data(data_set.begin(), data_set.begin() + (data_set.size()*TRAIN_DATA) );
   vector<CustomerData> test_data(data_set.begin() + (data_set.size()*TRAIN_DATA), data_set.end() );

   cout<< "data set size:"<< data_set.size() <<", train data size:"<< train_data.size()
   <<", test data size:"<< test_data.size() << endl;
//    NeuralNetworkLayer temp();
   size_t train_data_size = 1 ; //train_data.size();
   for(size_t i=0; i<train_data_size; i++) {
        
   }

   return 0;
}
