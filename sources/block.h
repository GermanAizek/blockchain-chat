#include <ctime>
#include <vector>
#include <map>
//#include "blockchain.h"

class Block : private Blockchain
{
	size_t index;
	std::string timestamp;
	std::vector<std::multimap<std::pair<std::string, std::string>, size_t>> transactions; // = currentTransactions;
	size_t proof;
	auto previousHash;
public:

	void setProof(size_t proofWork)
	{
		proof = std::move(proofWork);
	}

	void setPreviousHash(auto previousHashBlock)
	{
		previousHash = std::move(previousHashBlock) || hash(getChain().back());
	}

	Block() : transactions(getCurrentTransactions()), index(getChain().size() + 1)
	{
		time_t rawtime;
		time(&rawtime);
		timestamp = std::move(ctime(&rawtime));
	}
	~Block() { }
};