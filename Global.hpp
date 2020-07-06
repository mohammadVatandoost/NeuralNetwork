#ifndef GLOBAL_H
#define GLOBAL_H

#include<iostream>
#include <memory>
#include<vector>
#include <fstream>
#include <numeric>
#include <map>
#include <cmath>

using namespace std;


#define Sigmoid_Function 1
#define TRAIN_DATA 0.8
#define WEIGHT_INITIAL_VALUE 1

using intPtr = unique_ptr<int>;
using doublePtr = unique_ptr<double>;
using doublePtrArray = unique_ptr<double[]>;

#endif
