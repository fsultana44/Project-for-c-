#pragma once
template<class T>
class Accume
{
private:
	T total;
public:
	Accume(T start) : total(start) {};
	T operator+= (T const& t) { return total = total + t; };
	T GetTotal() const { return total; }
};
