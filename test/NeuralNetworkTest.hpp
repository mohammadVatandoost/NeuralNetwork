#ifndef NEURALNETWORKTEST_H
#define NEURALNETWORKTEST_H

#include <gtest/gtest.h>
#include "../src/NeuralNetwork.hpp"
#include <../src/CustomerData.hpp>

using namespace testing;

TEST(NeuralNetwork, OutPut_Calculation) {
   NeuralNetwork nn(1, Sigmoid_Function, CustomerData::getInputSize());
   vector<double> input;
    for(int i=0; i<CustomerData::getInputSize(); i++) {
        input.push_back(1);
    }
   ASSERT_EQ(nn.layers_num, 1);
   ASSERT_EQ(nn.input_size, CustomerData::getInputSize());
   ASSERT_GT(nn.getResult(input), 0.5);
}


TEST(NeuralNetwork, Train_Test) {
   NeuralNetwork nn(1, Sigmoid_Function, CustomerData::getInputSize());
   vector<double> input;
    for(int i=0; i<CustomerData::getInputSize(); i++) {
        input.push_back(1);
    }
   ASSERT_EQ(nn.logisticLossFunction(1,1), 0);
   ASSERT_GT(abs( nn.logisticLossFunction(1,1) ), 0.5);
}



#endif