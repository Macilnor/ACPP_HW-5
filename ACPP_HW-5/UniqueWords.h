#pragma once
#include <string>
#include <set>
#include <iostream>

template <class iterator>
void UniqueWords(iterator begin, iterator end)
{
	std::set<std::string> uniqueWords;
	std::copy(begin, end, std::inserter(uniqueWords, uniqueWords.begin()));
	std::copy(uniqueWords.begin(), uniqueWords.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
}