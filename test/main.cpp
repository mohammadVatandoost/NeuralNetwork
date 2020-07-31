#include "gtest/gtest.h"
#include "NeuronTest.hpp"
#include "NeuralNetworkLayerTest.hpp"
#include "NeuralNetworkTest.hpp"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}