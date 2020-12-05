
#include <vector>
#include <string>
#include <cstdarg>
#include <cstring>
#include <time.h>
#include "block.hpp"
#include <sstream>
void DisplayMessageDigest(unsigned *message_digest);
Block::Block(int indexIn, const std::string &dataIn) : index(indexIn), data(dataIn)
{

   hash = calculate_hash();
}
inline std::string Block::calculate_hash() const
{
    time_t timer;
    std::stringstream ss;
    ss << index << prev_hash << time(&timer) << data << proof_no;
    return sha256(ss.str());
}
void Block::mineblock(int Difficulty)
{
    char cstr[Difficulty + 1];
    std::cout<<cstr;
    for (int i = 0; i < Difficulty; ++i)
    {
        cstr[i] = '0';
    }
    cstr[Difficulty] = '\0';

    std::string str(cstr);
    do
    {
        hash = calculate_hash();
    }

   while (hash.substr(0, Difficulty) != str);

    std::cout << "Block mined: " << hash << std::endl;
}