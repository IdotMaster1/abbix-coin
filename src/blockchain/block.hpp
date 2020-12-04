
#ifndef Hash_H
#define Hash_H
#pragma once
#include <time.h>
#include <iostream>
#include <string>
#include <vector>
#include "../sha1/sha1.hpp"
class Block
{
    public:
        int index,proof_no;
        std::string hash,prev_hash,data;
        inline std::string calculate_hash();
        Block(int indexIn, const std::string &dataIn);
        void mineblock(int Difficulty);
};


#endif