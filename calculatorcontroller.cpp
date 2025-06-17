#include "calculatorcontroller.h"

CalculatorController::CalculatorController(CalculatorModel* model, QObject *parent)
    : model(model) , QObject{parent}
{}

double CalculatorController::add() {
    return this->model->getOp1() + this->model->getOp2();
}

void CalculatorController::setOp1(QString op1_val) {
    bool ok = false;
    double op1 = op1_val.toDouble(&ok);

    if(ok) {
        this->model->setOp1(op1);
    }
}

void CalculatorController::setOp2(QString op2_val) {
    bool ok = false;
    double op2 = op2_val.toDouble(&ok);

    if(ok) {
        this->model->setOp2(op2);
    }
}
