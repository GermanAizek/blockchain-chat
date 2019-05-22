#include <ctime>
#include <vector>
#include <map>
#include "openssl/evp.h"
//#include "blockchain.h"

class Block : private Blockchain
{
	size_t index;
	std::string timestamp;
	std::vector<DataTransaction> transactions;
	size_t proof;
	std::string previousHash;

public:

	void setProof(size_t proofWork)
	{
		proof = std::move(proofWork);
	}

	void setPreviousHash(std::string previousHashBlock)
	{
		// TODO: prevHash
		previousHash = std::move(previousHashBlock) || hash(getChain().back().previousHash);
	}

	size_t getIndex()
	{
		return index;
	}

	Block() : transactions(getCurrentTransactions()), index(getChain().size() + 1)
	{
		time_t rawtime;
		time(&rawtime);
		timestamp = std::move(ctime(&rawtime));
	}
	~Block() { }
};