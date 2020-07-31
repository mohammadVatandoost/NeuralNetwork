
#include "Neuron.hpp"
#include "CustomerData.hpp"
#include "NeuralNetwork.hpp"





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
