#include "blockchain.h"
#include "block.h"

size_t Blockchain::newTransaction(std::string sender, std::string recipient, size_t amount)
{
	currentTransactions.push_back(
		make_pair(make_pair(sender, recipient), amount)
	);

	return this->getLastBlock() + 1;
}

Block Blockchain::newBlock(size_t proof, size_t previousHash)
{
	Block block;

	// reset list transactions
	currentTransactions.clear();

	chain.push_back(block);

	return block;
}

auto Blockchain::hash(Block block)
{


	return;
}

Block Blockchain::getLastBlock()
{
	return chain.back();
}