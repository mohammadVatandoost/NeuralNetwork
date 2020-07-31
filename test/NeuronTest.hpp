#ifndef NEURONTEST_H
#define NEURONTEST_H


#include <gtest/gtest.h>
// #include <gmock/gmock-matchers.h>
#include <../src/Neuron.hpp>
#include <../src/CustomerData.hpp>

using namespace testing;

TEST(NeuronTest, Sigmoid_Activation)
{
    Neuron neuron(Sigmoid_Function, CustomerData::getInputSize());
    vector<double> input;
    for(int i=0; i<CustomerData::getInputSize(); i++) {
        input.push_back(0.995);
    }
    cout<<"Sigmoid Value:" <<  Neuron::sigmoid(10) <<endl;
    cout<<"Activate Value:" <<  neuron.getActivateValue(input) <<endl;

    ASSERT_GT(Neuron::sigmoid(10), 0.5);
    ASSERT_GT(neuron.getActivateValue(input), 0.5);

}

TEST(NeuronTest, Initialization) {
   Neuron neuron(Sigmoid_Function, CustomerData::getInputSize());
   ASSERT_EQ(neuron.input_size, CustomerData::getInputSize());
   ASSERT_EQ(neuron.weights.size(), CustomerData::getInputSize());
}

#endif 
