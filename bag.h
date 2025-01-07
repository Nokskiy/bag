#pragma once
#include <vector>
#include <algorithm>

using namespace std;
template<typename T>
struct bag
{
public:
	vector<T> vect;

public:
	void add(T element)
	{
		vect.push_back(element);
	}
	void remove(int element)
	{
		if (element != vect.size() - 1)
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
		else
		{
			vect.pop_back();
		}
	}
	int indexOf(T* element)
	{
		for (int i = 0;i < vect.size();i++)
		{
			if (element == &vect[i])
			{
				return(i);
			}
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
	void reverse()
	{
		vector<T> newVect;
		for (int i = vect.size() - 1;i > 0;i--)
		{
			newVect.push_back(vect[i]);
		}
		newVect.push_back(vect[0]);
		vect = newVect;
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
	void printElements(std::string text = "")
	{
		for (int i = 0;i < vect.size();i++)
		{
			std::cout << vect[i] << text << endl;
		}
	}
	void printPointers(std::string text = "")
	{
		for (int i = 0;i < vect.size();i++)
		{
			std::cout << &vect[i] << text << endl;
		}
	}
	auto getPointer(int element)
	{
		return &vect[element];
	}
};
