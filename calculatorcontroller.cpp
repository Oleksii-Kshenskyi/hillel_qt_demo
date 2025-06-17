#include "calculatorcontroller.h"

CalculatorController::CalculatorController(CalculatorModel* model, QObject *parent)
    : model(model) , QObject{parent}
{}

double CalculatorController::add() {
    return this->model->getOp1() + this->model->getOp2();
}

double CalculatorController::mul() {
    return this->model->getOp1() * this->model->getOp2();
}

double CalculatorController::sub() {
    return this->model->getOp1() - this->model->getOp2();
}

double CalculatorController::div() {
    return this->model->getOp1() / this->model->getOp2();
}

double CalculatorController::performOperation() {
    QString op = this->model->getOperation();
    if(op == "+") {
        return this->add();
    } else if(op == "-") {
        return this->sub();
    } else if(op == "*") {
        return this->mul();
    } else if(op == "/") {
        return this->div();
    } else {
        throw std::invalid_argument("ERROR: unexpected operation type (should be impossible!)");
    }
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

Q_INVOKABLE void CalculatorController::setOperation(QString op_val) {
    this->model->setOperation(op_val);
}
