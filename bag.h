#pragma once
#include <vector>
#include <algorithm>
using namespace std;
template<typename T>
struct bag
{
	vector<T> vect; //don't touch

	void add(T element)
	{
		vect.push_back(element);
	}
	void printElements()
	{
		for (int i = 0;i<vect.size();i++)
		{
			std::cout << vect[i] << endl;
		}
	}
	void remove(int element)
	{
		vector<T> newVect;
		for (int i = 0;i < vect.size();i++)
		{
			if (i != element)
			{
				newVect.push_back(vect[i]);
			}
		}
		vect = newVect;
	}
	int indexOf(T element) // not for classes.
	{
		auto it = std::find(vect.begin(), vect.end(), element);

		if (it != vect.end()) {
			std::size_t index = std::distance(vect.begin(), it);
			return index;
		}
	}
	int size()
	{
		return vect.size();
	}
	void clear()
	{
		vect.clear();
	}
	void sort()
	{
		std::sort(begin(vect),end(vect));
	}
	void addVect(vector<T> element)
	{
		for (int i = 0;i < element.size();i++)
		{
			vect.push_back(element[i]);
		}
	}
	void change(int element,T i)
	{
		vect[element] = i;
	}
	T at(int element)
	{
		return vect[element];
	}
};