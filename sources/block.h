#include <ctime>
//#include "blockchain.h"

class Block : private Blockchain
{
	size_t index;
	time_t timestamp;
	std::vector<std::multimap<std::pair<std::string, std::string>, size_t>> transactions; // = currentTransactions;
	size_t proof;
	size_t previousHash;
public:

	Block() : transactions()
	{

	}
};