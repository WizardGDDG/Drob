#pragma once
class Drob
{
public:
	double numerator;
	double denominator;

	void vod(double a, double b)
	{
		numerator = a;
		denominator = b;
	}

	double plus()
	{
		int a = numerator + denominator;
		return a;
	}
	double minus()
	{
		int a = numerator - denominator;
		return a;
	}
	double ymnojenie()
	{
		int a = numerator * denominator;
		return a;
	}
	double delenie()
	{
		int a = numerator / denominator;
		return a;
	}
};

