#ifndef __SERVER__H
#define __SERVER__H

#include <boost/asio.hpp>
using boost::asio::ip::tcp;

class Server
{
	public:
		Server(boost::asio::io_context& io_context, short port);
	private:
		void do_accept();
		tcp::acceptor acceptor_;
};
#endif//__SERVER__H
