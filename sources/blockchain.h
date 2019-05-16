#include <vector>
#include <map>

class Blockchain
{
private:
	std::vector<auto> chain;
	std::vector<std::multimap<std::pair<std::string, std::string>, size_t>> currentTransactions;

public:
	size_t newTransaction(std::string sender, std::string recipient, size_t amount);
	bool newBlock(size_t proof, auto previousHash = nullptr);

	bool hash(auto block);
	auto getLastBlock();
};