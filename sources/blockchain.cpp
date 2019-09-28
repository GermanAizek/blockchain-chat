#include "blockchain.h"
#include "Classes/block.h"

Blockchain::Blockchain()
{

}

size_t Blockchain::newTransaction(DataTransaction data)
{
	currentTransactions.push_back(data);

	return this->getLastBlock().getIndex() + 1;
}

Block Blockchain::newBlock(size_t proof, std::string previousHash)
{
	Block block;

	// reset list transactions
	currentTransactions.clear();

	chain.push_back(block);

	return block;
}

std::string Blockchain::getHash(const std::string str)
{
	unsigned char hash[SHA256_DIGEST_LENGTH];
	SHA256_CTX sha256;
	SHA256_Init(&sha256);
	SHA256_Update(&sha256, str.c_str(), str.size());
	SHA256_Final(hash, &sha256);

	std::stringstream ss;
	for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
		ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];

	return ss.str();
	
	//return EVP_sha3_512();
}

Block Blockchain::getLastBlock()
{
	return chain.back();
}

std::vector<Block>& Blockchain::getChain()
{
	return chain;
}

std::vector<DataTransaction>& Blockchain::getCurrentTransactions()
{
	return currentTransactions;
}