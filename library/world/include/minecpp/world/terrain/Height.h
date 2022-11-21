#pragma once
#include <cstdint>
#include <minecpp/random/Mersenne.h>
#include <minecpp/random/Perlin.h>

namespace minecpp::world::terrain {

class HeightGenerator
{
   random::Mersenne rand;
   random::Perlin base_perlin;
   random::Perlin perlin_det_amp;
   random::DisplacedPerlin perlin_detail0;
   random::DisplacedPerlin perlin_detail1;

 public:
   explicit HeightGenerator(uint64_t seed);

   short at(int x, int z);
};

}// namespace minecpp::world::terrain