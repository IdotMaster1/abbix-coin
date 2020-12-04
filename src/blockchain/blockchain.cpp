#include "blockchain.hpp"

Blockchain::Blockchain()
{
    chain.emplace_back(Block(0,"Genesis"));
    difficulty = 0.1;
}
void Blockchain::add_block(Block new_block)
{
    new_block.prev_hash = get_last_block().hash;
    new_block.mineblock(difficulty);
    chain.push_back(new_block);
}

Block Blockchain::get_last_block()
{
    return chain.back();
}