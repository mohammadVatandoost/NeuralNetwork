#ifndef NEURALNETWORKLAYERTEST_H
#define NEURALNETWORKLAYERTEST_H

#include <gtest/gtest.h>
#include "../src/NeuralNetworkLayer.hpp"
#include <../src/CustomerData.hpp>

using namespace testing;

TEST(NeuralNetworkLayer, Initilize) {
    NeuralNetworkLayer nnLayer(Sigmoid_Function, CustomerData::getInputSize());
    ASSERT_EQ(nnLayer.neuron_num, CustomerData::getInputSize());
    for(int i=0; i<nnLayer.neuron_num; i++ ) {
        ASSERT_EQ(nnLayer.neurons[i].input_size, CustomerData::getInputSize());
        ASSERT_EQ(nnLayer.neurons[i].activate_function, Sigmoid_Function);
    }
}

TEST(NeuralNetworkLayer, OutPut_Calculation) {
   NeuralNetworkLayer nnLayer(Sigmoid_Function, CustomerData::getInputSize());
   vector<double> input;
    for(int i=0; i<CustomerData::getInputSize(); i++) {
        input.push_back(1);
    }
   
   ASSERT_EQ(nnLayer.getOutput(input).size(), CustomerData::getInputSize());
   ASSERT_GT(nnLayer.getOutput(input)[0], 0.5);
   ASSERT_GT(nnLayer.getOutput(input)[1], 0.5);
}


#endif
