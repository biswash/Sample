#include "progressbar.h"

progressbar::progressbar(QWidget *parent)
    : QWidget(parent)
{
	win = new QWidget;
	win->setWindowTitle(("LCD Number"));
	layout = new QVBoxLayout(this);
	bar = new QProgressBar();
	spin = new QSpinBox;
	spin->setMaximum(99);
	spin->setMinimum(0);
	bar->resize(200,25);
	bar->setOrientation(Qt::Horizontal);//Orientation can also be vertical
	bar->setRange(0,99);
	connect(spin , SIGNAL(valueChanged(int)), bar, SLOT(setValue(int)));
	layout->addWidget(spin,Qt::AlignCenter);
		
	layout->addWidget(bar,Qt::AlignCenter);
	win->setLayout(layout);
	win->showMaximized();
}

progressbar::~progressbar()
{

}
