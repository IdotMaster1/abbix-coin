#include "blockchain/blockchain.hpp"

int main()
{
    Blockchain bChain = Blockchain();

    std::cout << "Mining block 1..." << std::endl;
    bChain.add_block(Block(1, "Block 1 Data"));

    std::cout << "Mining block 2..." << std::endl;
    bChain.add_block(Block(2, "Block 2 Data"));

    std::cout << "Mining block 3..." << std::endl;
    bChain.add_block(Block(3, "Block 3 Data"));

    return 0;
}