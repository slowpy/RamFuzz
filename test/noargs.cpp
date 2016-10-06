#include "fuzz.hpp"

int main() {
  ramfuzz::runtime::gen g;
  C c;
  ramfuzz::rfC::control rc(g, c);
  for (auto m : rc.mroulette)
    (rc.*m)();
  if (c.sum != 123)
    return 1;
  else
    return 0;
}

unsigned ::ramfuzz::runtime::spinlimit = 3;
