#pragma once
#include "Figure.h"
class Parallelogram :
	public Figure
{
protected:
	double m_side;
	double m_height;
public:
	Parallelogram();
	Parallelogram(double s, double h);
	virtual double area() override;
	~Parallelogram();
};

