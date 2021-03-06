#pragma once

#include <iostream>
#include "Point.hpp"

class Line
{
	private:
		Point p1;
		Point p2;
	public:
		Line() { }
		void set(int x1,int y1,int x2,int y2);
		void set(const Point& p1,const Point& p2);
		string to_string();
};
