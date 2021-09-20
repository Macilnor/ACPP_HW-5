#include <iostream>
#include <list>
#include <map>
#include <vector>
#include <algorithm>
#include "UniqueWords.h"

int main()
{
	std::vector<std::string> v_words{ "I", "won't", "pull", "the", "trigger",
									  "Just", "to", "see", "you", "die",
									  "No", "remedy", "to", "make", "me", "come", "alive",
									  "I'm", "ticking", "like", "a", "timebomb",
									  "(Need)", "no", "fuse", "just", "guts", "and", "gore",
									  "(To)", "initiate", "the", "burning", "of", "the", "core",
									  "I", "count", "down", "to", "zero", "pull", "the", "trigger", "no", "parole",
									  "No", "mercy", "have", "mercy", "no", "mercy", "on", "your", "soul",
									  "Kill", "by", "any", "means", "necessary",
									  "Win", "by", "any", "means", "necessary",
									  "Live", "by", "any", "means", "necessary",
									  "Die", "by", "any", "means", "necessary" };
	UniqueWords(v_words.begin(), v_words.end());

	std::cout << std::endl;

	std::list<std::string> l_words{ "I", "am", "not", "judgemental",
									"A", "sinner", "nor", "a", "saint",
									"Cause", "either", "you're", "my", "best", "friend", "or", "you", "ain't",
									"Come", "gather", "here", "around", "me",
									"feel", "my", "breath", "under", "your", "skin",
									"I'm", "deadly", "only", "when", "I'm", "getting", "caught",
									"Counting", "down", "to", "zero", "I'm", "a", "soldier", "without", "soul",
									"No", "mercy", "have", "mercy", "no", "mercy", "on", "your", "soul",
									"Kill", "by", "any", "means", "necessary",
									"Win", "by", "any", "means", "necessary",
									"Live", "by", "any", "means", "necessary",
									"Die", "by", "any", "means", "necessary" };
	UniqueWords(l_words.begin(), l_words.end());

	std::cout << std::endl;

	std::cout << std::endl << "Input 5 sentences. Sentence must contain '.' at the end." << std::endl;
	std::string input;
	std::map<size_t, std::string> sentences;
	while ((std::getline(std::cin, input, '.')) && (sentences.size() < 5))
	{
		for (auto it = input.begin(); it != input.end(); ++it)
		{
			if (*it == '\n')
			{
				input.erase(it);
				if (it == input.end())
					break;
			}
		}
		if (!input.empty())
		{
			sentences.insert({ input.length(), input });
		}

	}
	std::cout << std::endl;
	std::for_each(sentences.begin(), sentences.end(),
		[](std::pair<size_t, std::string> item) {
			std::cout << item.first << " " << item.second << std::endl; });
}

