#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_
#include <cstdint>
#include <vector>
#include "block.hpp"
class Blockchain
{
    public:
        Blockchain();
        void add_block(Block new_block);
    private:
        int difficulty;
        std::vector<Block> chain;
        Block get_last_block();
};
#endif