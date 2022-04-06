#include <boost/asio.hpp>
#include <iostream>

void print(const boost::system::error_code& /*e*/) {
  std::cout << "Hello, world!" << std::endl;
}

int main() {
  boost::asio::io_service io;

  boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
  t.async_wait(&print);
  io.run();
  return 0;
}