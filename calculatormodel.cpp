#include "calculatormodel.h"

CalculatorModel::CalculatorModel(double op1_val, double op2_val, QObject *parent)
    : op1(op1_val), op2(op2_val), operation("+"), op1Valid(true), op2Valid(true), QObject{parent}
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

QString CalculatorModel::getOperation() {
    return this->operation;
}

void CalculatorModel::setOperation(QString op_val) {
    this->operation = op_val;
}

bool CalculatorModel::getOp1Valid() {
    return this->op1Valid;
}

void CalculatorModel::setOp1Valid(bool opv_val) {
    this->op1Valid = opv_val;
    emit this->op1ValidChanged(this->op1Valid);
}

bool CalculatorModel::getOp2Valid() {
    return this->op2Valid;
}

void CalculatorModel::setOp2Valid(bool opv_val) {
    this->op2Valid = opv_val;
    emit this->op2ValidChanged(this->op2Valid);
}

