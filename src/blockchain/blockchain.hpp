#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_
#include <cstdint>
#include <vector>
#include "block.hpp"
class Blockchain
{
    public:
        std::vector<Block> chain;
        Block get_last_block();
        Blockchain();
        void add_block(Block new_block);
    private:
        double difficulty;
};
#endif