// File name:	1.cpp
// Author:		John Conder
// Date:		08/08/2012
//
// Problem: 
//
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
#include <vector>

int SumOfMultiples(std::vector<int> const multiples, int const range=1000)
{
	int sum = 0;
	for ( int i = 0; i < range; ++i )
	{
		for ( auto it = multiples.begin(); it != multiples.end(); ++it )
		{
			if ( i % *it == 0 )
			{
				sum += i;
				break;
			}
		}
	}

	return sum;
}

int main()
{
	std::vector<int> _list;
	_list.push_back(3);
	_list.push_back(5);

	std::cout << "Project Oiler #1: ";
	std::cout << std::endl << SumOfMultiples(_list);

	std::cin.get();

	return 0;
}