#include "block.h"

Block::Block()
{
	time_t rawtime;
	time(&rawtime);
	timestamp = std::move(ctime(&rawtime));
}

Block::setProof(size_t proofWork)
{
	proof = std::move(proofWork);
}

Block::setPreviousHash(std::string previousHashBlock)
{
	// TODO: prevHash
	previousHash = std::move(previousHashBlock) || hash(getChain().back().previousHash);
}

Block::getIndex()
{
	return index;
}