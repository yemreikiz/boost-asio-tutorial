#include <boost/asio.hpp>
#include <iostream>

using namespace boost::asio;

int main() {
  boost::asio::io_service io;

  boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
  t.wait();
  std::cout << "Hello, world!" << std::endl;
  return 0;
}