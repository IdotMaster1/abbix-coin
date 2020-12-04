
#ifndef Hash_H
#define Hash_H
#pragma once
#include <time.h>
#include <iostream>
#include <string>
#include <vector>
#include "../SHA256/SHA256.h"
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