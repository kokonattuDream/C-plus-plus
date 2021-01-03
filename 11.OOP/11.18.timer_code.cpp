#include <algorithm> // for std::sort
#include <array>
#include <chrono> // for std::chrono functions
#include <cstddef> // for std::size_t
#include <iostream>
#include <numeric> // for std::iota
 
const int g_arrayElements = 10000;
 
class Timer
{
private:
  // Type aliases to make accessing nested type easier
  using clock_t = std::chrono::high_resolution_clock;
  using second_t = std::chrono::duration<double, std::ratio<1>>;
 
  std::chrono::time_point<clock_t> m_beg;
 
public:
  Timer() : m_beg(clock_t::now())
  {
  }
 
  void reset()
  {
    m_beg = clock_t::now();
  }
 
  double elapsed() const
  {
    return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
  }
};
 
int main()
{
  std::array<int, g_arrayElements> array;
  // fill the array with 10000 to 1
  std::iota(array.rbegin(), array.rend(), 1);
 
  Timer t;
 
  std::ranges::sort(array); // Since C++20
  // If your compiler isn't C++20-capable
  // std::sort(array.begin(), array.end());
 
  std::cout << "Time taken: " << t.elapsed() << " seconds\n";
 
  return 0;
}