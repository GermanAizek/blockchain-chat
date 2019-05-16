#include "blockchain.h"
#include "block.h"

size_t Blockchain::newTransaction(std::string sender, std::string recipient, size_t amount)
{
	currentTransactions.push_back(
		make_pair(make_pair(sender, recipient), amount)
	);

	return this->getLastBlock() + 1;
}

bool Blockchain::newBlock(size_t proof, auto previousHash = nullptr)
{
	Block block;

	// reset list transactions
	currentTransactions = nullptr;

	chain.push_back(block);

	return block;
}

bool Blockchain::hash(auto block)
{


	return;
}

auto Blockchain::getLastBlock()
{
	return chain.back();
}