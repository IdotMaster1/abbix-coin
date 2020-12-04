#include "blockchain/blockchain.hpp"

int main()
{
    Blockchain block_chain = Blockchain();
    std::cout << "Mining block "<<std::endl;
    block_chain.add_block(Block(1, "Block 1 Data"));

    return 0;
}