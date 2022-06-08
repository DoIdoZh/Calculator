#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Calculator.h"

class Calculator : public QMainWindow
{
	Q_OBJECT

public:
	Calculator(QWidget* parent = Q_NULLPTR);

protected:
	virtual void keyPressEvent(QKeyEvent* event);

private:
	void _clear();
	void _calc();
	void _setup();

private:
	Ui::CalculatorClass ui;
};
