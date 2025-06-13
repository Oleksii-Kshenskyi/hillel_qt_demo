#include "calculatormodel.h"

CalculatorModel::CalculatorModel(double op1_val, double op2_val, QObject *parent)
    : op1(op1_val), op2(op2_val), QObject{parent}
{}

double CalculatorModel::getOp1() {
    return this->op1;
}

void CalculatorModel::setOp1(double op1_val) {
    this->op1 = op1_val;
}

double CalculatorModel::getOp2() {
    return this->op2;
}

void CalculatorModel::setOp2(double op2_val) {
    this->op2 = op2_val;
}
