#include <cassert>
#include <cmath>
#include <minecpp/random/JavaRandom.h>
#include <minecpp/random/Perlin.h>

namespace minecpp::random {

using minecpp::math::Vector2;

Perlin::Perlin(random::Random &rand) :
    rand(rand),
    coef1(rand.next_int()),
    coef2(rand.next_int()),
    coef3(rand.next_int())
{
}

[[nodiscard]] static double smooth(const double t)
{
   assert(t >= 0.0 && t <= 1.0);
   return t * t * t * (t * (t * 6 - 15) + 10);
}

double Perlin::at(Vector2 pos)
{
   auto floored_pos = pos.floor();
   auto left = static_cast<int>(floored_pos.x());
   auto top  = static_cast<int>(floored_pos.y());
   int right = left + 1, bot = top + 1;

   auto weight = (pos - floored_pos).transform(smooth);

   auto top_left  = dot_grad(left, top, pos);
   auto top_right = dot_grad(right, top, pos);
   auto bot_left  = dot_grad(left, bot, pos);
   auto bot_right = dot_grad(right, bot, pos);

   auto inter_bot = std::lerp(top_left, top_right, weight.x());
   auto inter_top = std::lerp(bot_left, bot_right, weight.x());

   return std::lerp(inter_bot, inter_top, weight.y());
}

double Perlin::dot_grad(int x, int z, minecpp::math::Vector2 pos)
{
   auto g = grad(x, z);
   auto d = pos - Vector2{static_cast<double>(x), static_cast<double>(z)};
   return (g * d).sum();
}

minecpp::math::Vector2 Perlin::grad(int x, int z)
{
   random::JavaRandom r(x * coef1 + z * coef2 + coef3);
   return {r.next_double(), r.next_double()};
}

DisplacedPerlin::DisplacedPerlin(Random &rand, double scale, double amp) :
    base(rand),
    dis_x(rand),
    dis_z(rand),
    scale(scale),
    amp(amp),
    move_dis_x{rand.next_double(), rand.next_double()},
    move_dis_z{rand.next_double(), rand.next_double()}
{
}

double DisplacedPerlin::at(const minecpp::math::Vector2 pos)
{
   return base.at(pos + minecpp::math::Vector2{
                                dis_x.at(pos * scale + move_dis_x) * amp,
                                dis_z.at(pos * scale + move_dis_z) * amp,
                        });
}

}// namespace minecpp::random
