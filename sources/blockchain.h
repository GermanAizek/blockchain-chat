//#include "block.h"
#include <vector>
#include <map>
#include <sstream>
#include <iomanip>
//#include "openssl/evp.h"
#include "openssl/sha.h"

struct DataTransaction
{
	std::string sender;
	std::string recipient;
	size_t amount;
};

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

	size_t newTransaction(DataTransaction data);
	Block newBlock(size_t proof, std::string previousHash);

	std::string Blockchain::hash(const std::string str);
	Block getLastBlock();

	Blockchain() { }
	~Blockchain() { }
};