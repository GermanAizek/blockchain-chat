#include "block.h"
#include <vector>
#include <map>

class Blockchain
{
private:
	std::vector<Block> chain;
	std::vector<std::multimap<std::pair<std::string, std::string>, size_t>> currentTransactions;

public:
	size_t newTransaction(std::string sender, std::string recipient, size_t amount);
	Block newBlock(size_t proof, size_t previousHash);

	bool hash(Block block);
	auto getLastBlock();
};