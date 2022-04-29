makeTicketSystem:
	g++ -c StudentTicket.cpp
	g++ -c TicketReader.cpp
	g++ -c TicketPrinter.cpp
	g++ -c TicketManager.cpp
	g++ main.cpp StudentTicket.o TicketReader.o TicketPrinter.o TicketManager.o -o ticketSystem
	rm *.o