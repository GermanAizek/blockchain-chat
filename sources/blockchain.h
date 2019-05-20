//#include "block.h"
#include <vector>
#include <map>

// std::string sender
// std::string recipient
// size_t amount
using DataTransaction = std::multimap<std::pair<std::string, std::string>, size_t>;

class Blockchain
{
private:
	std::vector<Block> chain;
	std::vector<DataTransaction> currentTransactions;

public:
	std::vector<DataTransaction>& getCurrentTransactions()
	{
		return currentTransactions;
	}

	std::vector<Block>& getChain()
	{
		return chain;
	}

	size_t newTransaction(std::string sender, std::string recipient, size_t amount);
	Block newBlock(size_t proof, size_t previousHash);

	auto hash(Block block);
	Block getLastBlock();

	Blockchain() { }
	~Blockchain() { }
};