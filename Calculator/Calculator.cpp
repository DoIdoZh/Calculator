#include "Calculator.h"
#include <qdebug.h>
#include <qlineedit.h>
#include <iostream>
#include <qevent.h>

Calculator::Calculator(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	// 设置组件
	_setup();

	// 计算
	connect(ui.pushButtonCalc, &QPushButton::clicked, this, [=]() {
		_calc();
		}
	);

	// 清除计算器中的内容
	_clear();
}

void Calculator::_clear() {
	connect(ui.pushButtonClear, &QPushButton::clicked, this, [=]() {
		qDebug() << "清除干净了！";
		ui.lineEditLeft->clear();
		ui.lineEditRight->clear();
		ui.lineEditAns->clear();
		}
	);
}

void Calculator::_calc() {
	long long left = ui.lineEditLeft->text().toLongLong();
	qDebug() << "左边 = " << left;
	long long right = ui.lineEditRight->text().toLongLong();
	qDebug() << "右边 = " << right;

	std::string _opt = ui.comboBox->currentText().toStdString();
	char opt = _opt[0];
	long long ans = 0;
	bool judge = true;

	qDebug() << "操作数 = " << opt;

	switch (opt)
	{
	case '+':
		ans = left + right;
		break;
	case '-':
		ans = left - right;
		break;
	case '*':
		ans = left * right;
		break;
	case '/':
		if (right == 0) {
			judge = false;
		}
		else {
			ans = left / right;
		}
		break;
	default:
		break;
	}

	qDebug() << "右边 = " << ans;
	if (!judge) {
		ui.lineEditAns->setText("Null");
	}
	else {
		ui.lineEditAns->setText(QString::number(ans, 10));
	}


}

void Calculator::_setup() {
	ui.lineEditLeft->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
	ui.lineEditRight->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
}

void Calculator::keyPressEvent(QKeyEvent* event)
{
	switch (event->key())
	{
	case Qt::Key_Return:
		qDebug() << "Calculator -> Enter";
		_calc();
		break;

	default:
		qDebug() << event->key();
		break;
	}
}
