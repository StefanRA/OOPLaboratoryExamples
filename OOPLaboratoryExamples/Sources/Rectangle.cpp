/***************************************************************************************************
Object-oriented programming laboratory
Author: Stefan Rapeanu-Andreescu
***************************************************************************************************/

#include "stdafx.h"
#include "Rectangle.hpp"

Rectangle::Rectangle(double width, double height)
	: m_width(width)
	, m_height(height)
{
}

Rectangle::Rectangle(const Rectangle& rectangle)
{
	m_width = rectangle.m_width;
	m_height = rectangle.m_height;
}

void Rectangle::SetWidth(double width)
{
	m_width = width;
}

double Rectangle::GetWidth() const
{
	return m_width;
}

void Rectangle::SetHeight(double height)
{
	m_height = height;
}

double Rectangle::GetHeight() const
{
	return m_height;
}

bool operator==(const Rectangle & first, const Rectangle & second)
{
	return first.m_height == second.m_height && first.m_width == second.m_width;
}

bool operator!=(const Rectangle & first, const Rectangle & second)
{
	return !(first == second);
}

std::istream & operator>>(std::istream & stream, Rectangle & rectangle)
{
	stream >> rectangle.m_width >> rectangle.m_height;
	return stream;
}

std::ostream & operator<<(std::ostream & stream, const Rectangle & rectangle)
{
	stream << rectangle.m_width << ' ' << rectangle.m_height;
	return stream;
}
