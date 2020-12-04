
#include <vector>
#include <string>
#include <cstdarg>
#include <cstring>
#include <time.h>
#include "block.hpp"
void DisplayMessageDigest(unsigned *message_digest);
Block::Block(int indexIn, const std::string &dataIn) : index(indexIn), data(dataIn)
{

   hash = calculate_hash();
}
std::string format(const std::string& format, ...)
{
    va_list args;
    va_start (args, format);
    size_t len = std::vsnprintf(NULL, 0, format.c_str(), args);
    va_end (args);
    std::vector<char> vec(len + 1);
    va_start (args, format);
    std::vsnprintf(&vec[0], len + 1, format.c_str(), args);
    va_end (args);
    return &vec[0];
}
inline std::string Block::calculate_hash()
{
    char block_of_string[] = "%d %d %d %d";
    time_t timer;
    std::string block_of_string_f = format(block_of_string,index,proof_no,prev_hash,data,time(&timer));
    SHA1 sha;
    sha.update(block_of_string_f);
    return sha.final();
}
void Block::mineblock(int Difficulty)
{
    char cstr[Difficulty + 1];
    std::cout<<cstr;
    for (int i = 0; i < Difficulty; ++i)
    {
        cstr[i] = '0';
        std::cout<<"cstr[" <<i<<"] = 0";
    }
    cstr[Difficulty] = '\0';

    std::string str(cstr);
    std::cout<<str;
    std::cout<<hash;
    do
    {
        hash = calculate_hash();
    }

   while (hash.substr(0, Difficulty) != str);

    std::cout << "Block mined: " << hash << std::endl;
}