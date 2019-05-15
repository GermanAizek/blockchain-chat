#include <ctime>
#include "blockchain.h"

class Block : private Blockchain
{
	size_t index;
	std::time timestamp;
	std::vector<std::multimap<std::pair<std::string, std::string>, size_t>> transactions;
	size_t proof;
	auto previousHash;

	Block() : transactions(currentTransactions)
	{

	}
};