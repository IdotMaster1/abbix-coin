
#ifndef Hash_H
#define Hash_H
#pragma once
#include <time.h>
#include <iostream>
#include <string>
#include <vector>
#include "../hash/sha256.h"
class Block
{
    public:
        int index,proof_no;
        std::string hash,prev_hash,data;
        inline std::string calculate_hash() const;
        Block(int indexIn, const std::string &dataIn);
        void mineblock(int Difficulty);
};


#endif