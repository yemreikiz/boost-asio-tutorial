#include <boost/asio.hpp>
#include <iostream>

using namespace boost::asio;

int main() {
  boost::asio::io_service io;
  boost::asio::steady_timer timer(io, boost::asio::chrono::seconds(5));
  timer.wait();
  std::cout << "Hello, world!" << std::endl;
  return 0;
}