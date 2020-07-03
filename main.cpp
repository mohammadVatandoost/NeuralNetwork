#include<iostream>
#include<vector>
#include <fstream>
#include <numeric>
#include <memory>

using namespace std;

#define Sigmoid_Function 1

#define WEIGHT_INITIAL_VALUE 1

using intPtr = unique_ptr<int>;
using doublePtr = unique_ptr<double>;

class CustomerData {
public:    
    int RowNumber, CustomerId, CreditScore,  Age, Tenure, NumOfProducts, HasCrCard, IsActiveMember, Exited;
    string Surname, Geography,  Gender;
    float Balance, EstimatedSalary;
    CustomerData() {}
    CustomerData(int RowNumber, int CustomerId, string Surname, int CreditScore, 
    string Geography, string Gender, int Age, int Tenure, float Balance, int NumOfProducts, 
    	int HasCrCard, int IsActiveMember, float EstimatedSalary, int Exited) {
        RowNumber = RowNumber; 
        CustomerId = CustomerId;
        Surname = Surname;
        CreditScore = CreditScore ;
        Geography = Geography ;
        Gender = Gender;
        Age = Age;
        Tenure = Tenure ;
        Balance = Balance; 
        NumOfProducts = NumOfProducts;
        HasCrCard = HasCrCard;
        IsActiveMember = IsActiveMember ;
        EstimatedSalary = EstimatedSalary ;
        Exited = Exited;
    }
};

CustomerData parseLine(string line) {
    string delimiter = ",";
    size_t pos = 0;
    string token;
    CustomerData cTemp;
    int counter = 0;
    while ((pos = line.find(delimiter)) != string::npos) {
        token = line.substr(0, pos);
        line.erase(0, pos + delimiter.length());
        switch (counter) {
        case 0: {
            cTemp.RowNumber = stoi(token);
            break;
        }
        case 1: {
            cTemp.CustomerId = stoi(token);
            break;
        }
        case 2: {
            cTemp.Surname = token;
            break;
        }
        case 3: {
            cTemp.CreditScore = stoi(token);
            break;
        }
        case 4: {
            cTemp.Geography = token;
            break;
        }
        case 5: {
            cTemp.Gender = token;
            break;
        }
        case 6: {
            cTemp.Age = stoi(token);
            break;
        }
        case 7: {
            cTemp.Tenure = stoi(token);
            break;
        }
        case 8: {
            cTemp.Balance = stod(token);
            break;
        }
        case 9: {
            cTemp.NumOfProducts = stoi(token);
            break;
        }
        case 10: {
            cTemp.HasCrCard = stoi(token);
            break;
        }
        case 11: {
            cTemp.IsActiveMember = stoi(token);
            break;
        }
        case 12: {
            cTemp.EstimatedSalary = stoi(token);
            break;
        }
        default: {
            cout<< "parseLine too long line"<<endl;
            break;
        }
        }
        counter++;
    }
    cTemp.Exited = stoi(line);
    return cTemp;
}

vector<CustomerData> readDataSet() {
    vector<CustomerData> data_set;
    ifstream data_file("./Churn_Modelling.csv");
    if (data_file.is_open()) {
        std::string line;
        bool isFirst = true;
        while (std::getline(data_file, line)) {
            if(isFirst) {
                isFirst = false;
            } else {
                CustomerData cData = parseLine(line);
                data_set.push_back(cData);
            }
        }
        data_file.close();
    } else {
        cout<< "data_file  can not opned"<<endl;
    } 
    return data_set;
}

class Neuron {
public:
    int activate_function = Sigmoid_Function;
    doublePtr *weights;
    doublePtr *inputs;
    int input_size;
    Neuron() {}
    Neuron(int activate_function, int input_size) {
        input_size = input_size;
        activate_function = activate_function;
        weights = new doublePtr[input_size];
        inputs = new doublePtr[input_size];
        for(size_t i=0; i< input_size; i++) {  weights[i] = WEIGHT_INITIAL_VALUE; }
    }
    ~Neuron() {
        delete[] weights;
        delete[] inputs;
    }  

    double getActivateValue() {
        return inner_product(weights, weights + (sizeof(double)*input_size), inputs, 0);
    }   
};

class NeuralNetworkLayer {
public:
    int neuron_num;
    Neuron *neurons;
    doublePtr *output;
    NeuralNetworkLayer() {}
    NeuralNetworkLayer(int neuron_num) {
        neurons = new Neuron[neuron_num];
        output = new doublePtr[neuron_num];
    }
    ~NeuralNetworkLayer() {
        delete[] neurons;
        delete[] output;
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
        nnLayers = new NeuralNetworkLayer[layers_num];
    }

    double getResult(CustomerData cData) {
        // implement this
        return 0;

    }

    ~NeuralNetwork() {
         delete[] nnLayers;
    }  
};

class TrainNN {

};

int main(int argc, char *argv[]) {
   vector<CustomerData> data_set = readDataSet();
   cout<< "data set size:"<< data_set.size() << endl;
   return 0;
}
