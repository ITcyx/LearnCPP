#pragma once

#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>

class Sales_item 
{
private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;

public:
	Sales_item();
	Sales_item(std::string const&);
	Sales_item(std::istream&);
	friend std::istream& operator>>(std::istream&, Sales_item&);
	friend std::ostream& operator<<(std::ostream&, Sales_item const&);
	friend bool operator==(Sales_item const&, Sales_item const&);
	friend bool operator!=(Sales_item const&, Sales_item const&);
	friend bool compareIsbn(Sales_item const&, Sales_item const&);
	Sales_item operator+(Sales_item const&);
	Sales_item& operator+=(Sales_item const&);
	std::string isbn() const;
	double avg_price() const;
};

Sales_item::Sales_item() : units_sold(0), revenue(0.0)
{}

Sales_item::Sales_item(std::string const& book) : bookNo(book), units_sold(0), revenue(0.0)
{}

Sales_item::Sales_item(std::istream& is)
{
	is >> *this;
}

std::istream& operator>>(std::istream& in, Sales_item& s)
{
	double price;
	in >> s.bookNo >> s.units_sold >> price;
	if (in)
		s.revenue = s.units_sold * price;
	else
		s = Sales_item();
	return in;
}

std::ostream& operator<<(std::ostream& out, Sales_item const& s)
{
	out << s.bookNo << " " << s.units_sold << " " << s.revenue << " " << s.avg_price();
	return out;
}

inline bool operator==(Sales_item const& lhs, Sales_item const& rhs)
{
	return lhs.units_sold == rhs.units_sold &&lhs.revenue == rhs.revenue &&lhs.isbn() == rhs.isbn();
}

inline bool operator!=(Sales_item const& lhs, Sales_item const& rhs)
{
	return lhs.units_sold != rhs.units_sold || lhs.revenue != rhs.revenue || lhs.isbn() != rhs.isbn();
}

inline bool compareIsbn(Sales_item const& lhs, Sales_item const& rhs)
{
	return lhs.isbn() == rhs.isbn();
}

Sales_item Sales_item::operator+(Sales_item const& rhs)
{
	Sales_item ret(*this);
	ret.units_sold += rhs.units_sold;
	ret.revenue += rhs.revenue;
	return ret;
}

Sales_item& Sales_item::operator+=(Sales_item const& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

std::string Sales_item::isbn() const
{
	return bookNo;
}

double Sales_item::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}

#endif