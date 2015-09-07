#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H

#include <QWidget>
#include "ui_progressbar.h"
#include <QProgressBar>
#include <QSpinBox>
#include <QVBoxLayout>

class progressbar : public QWidget
{
    Q_OBJECT

public:
	progressbar(QWidget *parent = 0);
    ~progressbar();

private:
	QWidget* win;
	QVBoxLayout* layout;
	QProgressBar* bar;
	QSpinBox* spin;
};

#endif // PROGRESSBAR_H
