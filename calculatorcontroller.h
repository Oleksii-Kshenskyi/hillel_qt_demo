#ifndef CALCULATORCONTROLLER_H
#define CALCULATORCONTROLLER_H

#include <QObject>

#include "calculatormodel.h"

class CalculatorController : public QObject
{
    Q_OBJECT
public:
    explicit CalculatorController(CalculatorModel* model, QObject *parent = nullptr);
    Q_INVOKABLE double add();

    Q_INVOKABLE void setOp1(QString op1_val);
    Q_INVOKABLE void setOp2(QString op2_val);

private:
    CalculatorModel* model;
};

#endif // CALCULATORCONTROLLER_H
