#include "calculatorcontroller.h"

CalculatorController::CalculatorController(CalculatorModel* model, QObject *parent)
    : model(model) , QObject{parent}
{}

double CalculatorController::add() {
    return this->model->getOp1() + this->model->getOp2();
}
