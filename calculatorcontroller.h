#ifndef CALCULATORCONTROLLER_H
#define CALCULATORCONTROLLER_H

#include <QObject>

#include "calculatormodel.h"

class CalculatorController : public QObject
{
    Q_OBJECT
public:
    explicit CalculatorController(CalculatorModel* model, QObject *parent = nullptr);
    double add();

private:
    CalculatorModel* model;
};

#endif // CALCULATORCONTROLLER_H
