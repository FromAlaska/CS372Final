// Jim Samson
// CS372 Final
// Main class for testing/writing code

#include "../include/MessageHandler.hpp"
#include "../include/OrderMessageManager.hpp"
#include "../include/ProcessMessageManager.hpp"
#include "../include/SendMessageManager.hpp"

int main() {
  // Extended classes
  OrderMessageManager messageReciever; // This object handles the messages
  ProcessMessageManager messageProcesser;
  SendMessageManager sendingManager;

  // Adding associates
  messageReciever.add(&messageProcesser);
  messageReciever.add(&sendingManager);
  sendingManager.setNext(&messageReciever);

  // Message passing
  messageReciever.handler("Super-secret message");
  messageReciever.handler("Another cool message");
  messageReciever.handler("Message processed");
  messageReciever.handler("Message ready");

  // Print messages
  messageReciever.printMessages();
  messageProcesser.printMessages();
  sendingManager.printMessages();
  return 0;
}
