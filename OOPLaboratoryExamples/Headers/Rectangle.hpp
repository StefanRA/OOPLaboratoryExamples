/***************************************************************************************************
Object-oriented programming Laboratory
Author: Stefan Rapeanu-Andreescu
***************************************************************************************************/

#pragma once

#include <vector>
#include <iostream>

class Rectangle
{
public:
	Rectangle(double width = 0, double height = 0);
	Rectangle(const Rectangle& rectangle);

	void SetWidth(double width);
	double GetWidth() const;

	void SetHeight(double height);
	double GetHeight() const;

	friend bool operator==(const Rectangle& first, const Rectangle& second);
	friend bool operator!=(const Rectangle& first, const Rectangle& second);

	friend std::istream& operator>>(std::istream& stream, Rectangle& rectangle);
	friend std::ostream& operator<<(std::ostream& stream, const Rectangle& rectangle);

private:
	double m_width;
	double m_height;
};