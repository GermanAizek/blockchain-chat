#include <ctime>
#include <vector>
#include <map>
#include "openssl/evp.h"
//#include "blockchain.h"

class Block : private Blockchain
{
private:
	size_t index;
	std::string timestamp;
	std::vector<DataTransaction> transactions;
	size_t proof;
	std::string previousHash;

public:
	Block() : transactions(getCurrentTransactions()), index(getChain().size() + 1);
	~Block() { }

	void setProof(size_t proofWork);
	void setPreviousHash(std::string previousHashBlock);

	size_t getIndex();
};