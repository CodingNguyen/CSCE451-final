makeTicketSystem:
	g++ -c Reader.cpp
	g++ -c StudentTicket.cpp
	g++ -c TicketManager.cpp
	g++ -c TicketPrinter.cpp
	g++ -c TicketReader.cpp
	g++ main.cpp Reader.o StudentTicket.o TicketManager.o TicketPrinter.o TicketReader.o -o ticketSystem