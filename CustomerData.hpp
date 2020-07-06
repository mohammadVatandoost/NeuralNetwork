#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H

#include "Global.hpp"

class CustomerData {
public:    
    int RowNumber, CustomerId, CreditScore,  Age, Tenure, NumOfProducts, HasCrCard, IsActiveMember, Exited;
    string Surname, Geography,  Gender;
    float Balance, EstimatedSalary;
    
    int encoded_Geography, encoded_Gender;

    

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

    doublePtr* getArrayDoubleData() {
        doublePtr *data = new doublePtr[10];
        *data[0] = CreditScore;
        *data[1] = CreditScore;
        *data[2] = encoded_Geography;
        *data[3] = encoded_Gender;
        *data[4] = Age;
        *data[5] = Tenure;
        *data[6] = Balance;
        *data[7] = NumOfProducts;
        *data[8] = HasCrCard;
        *data[9] = IsActiveMember;
        *data[10] = EstimatedSalary;
        return data;
    }

    static CustomerData parseLine(string line) {
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

    static vector<CustomerData> readDataSet() {
    vector<CustomerData> data_set;
    map<string, int> geography;
    int geography_counter = 0;
    map<string, int> gender;
    int gender_counter = 0;
    ifstream data_file("./Churn_Modelling.csv");
    if (data_file.is_open()) {
        std::string line;
        bool isFirst = true;
        while (std::getline(data_file, line)) {
            if(isFirst) {
                isFirst = false;
            } else {
                CustomerData cData = parseLine(line);
                if( geography.find(cData.Geography) == geography.end() ) {
                    geography.insert(pair<string, int>(cData.Geography, geography_counter));
                    geography_counter++;
                } 
                cData.encoded_Geography = geography_counter-1;
                if(gender.find(cData.Gender) == gender.end()  ) {
                    gender.insert(pair<string, int>(cData.Gender, gender_counter));
                    gender_counter++;
                }
                cData.encoded_Gender = gender_counter-1;
                data_set.push_back(cData);
            }
        }
        data_file.close();
    } else {
        cout<< "data_file  can not opned"<<endl;
    } 
    return data_set;
    }
};






#endif
