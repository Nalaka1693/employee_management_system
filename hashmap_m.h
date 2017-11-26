#include "hashmap_m.h"
#include <iostream>
#include <vector>
#include <string>

#ifndef HASHMAP_M_H
#define HASHMAP_M_H

template <class T>
class HashMap {
	private:
		vector<T> map;
	public:
		void insert(T const &in);
		void remove(string key);
		T find(string key) const;
};

#endif