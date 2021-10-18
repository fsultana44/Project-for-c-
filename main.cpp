#include<iostream>
#include <string>
#include"Accume.h"
using namespace std;
using std::cout;
using std::endl;

//#include "Utility.h"

template<class T >
T max(T const& t1, T const& t2)
{
	return t1 < t2 ? t2 : t1;
};



int main()
{
	// arithmetic operations
	int i = 0;
	i += 2;
	i *= 3;
	i -= 2;
	i /= 4;

	int j = i++;
	j = ++i;
	j = i--;
	j = --i;

	j = 2;
	j = 0;

	//conditional operation
	if (i==3)
	{
		cout << " value is 3" << endl;
		cout << " i" << i << endl;
	}

	// demo for template function
	string s1 = "Country";
	string s2 = "Bangladesh";
	cout << " max number between 33 and 44 is" << std::max(33, 44) << endl;
	cout << " max of " <<s1 <<"and " <<s2 << "is " << std::max(s1, s2) << endl;

	// demo for template class

	Accume<int> integers(0);
	integers += 4;
	integers += 5;
	cout << integers.GetTotal() << endl;

	Accume<string> strings("");
	strings += "month ";
	strings += "November";
	cout << strings.GetTotal() << endl;



	return 0;

}