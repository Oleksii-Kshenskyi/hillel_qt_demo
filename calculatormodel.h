#ifndef CALCULATORMODEL_H
#define CALCULATORMODEL_H

#include <QObject>

class CalculatorModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(double op1 READ getOp1 WRITE setOp1 NOTIFY op1Changed)
    Q_PROPERTY(double op2 READ getOp2 WRITE setOp2 NOTIFY op2Changed)
    Q_PROPERTY(QString operation READ getOperation WRITE setOperation NOTIFY operationChanged)
    Q_PROPERTY(bool op1Valid READ getOp1Valid WRITE setOp1Valid NOTIFY op1ValidChanged)
    Q_PROPERTY(bool op2Valid READ getOp2Valid WRITE setOp2Valid NOTIFY op2ValidChanged)

public:
    explicit CalculatorModel(double op1_val, double op2_val, QObject *parent = nullptr);

    double getOp1();
    void setOp1(double op1_val);

    double getOp2();
    void setOp2(double op2_val);

    QString getOperation();
    void setOperation(QString op_val);

    bool getOp1Valid();
    void setOp1Valid(bool opv_val);

    bool getOp2Valid();
    void setOp2Valid(bool opv_val);

signals:
    void op1Changed(double op1_val);
    void op2Changed(double op2_val);
    void operationChanged(QString op_val);
    void op1ValidChanged(bool opv_val);
    void op2ValidChanged(bool opv_val);

private:
    double op1;
    double op2;
    QString operation;
    bool op1Valid;
    bool op2Valid;
};

#endif // CALCULATORMODEL_H
