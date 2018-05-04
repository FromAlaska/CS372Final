#include "../include/MessageHandler.hpp"
#include "../include/OrderMessageManager.hpp"
#include "../include/ProcessMessageManager.hpp"
#include "../include/SendMessageManager.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main() {
  OrderMessageManager messageReciever;
  ProcessMessageManager messageProcesser;
  SendMessageManager sendingManager;

  // Adding associates
  messageReciever.add(&messageProcesser);
  messageReciever.add(&sendingManager);
  sendingManager.setNext(&messageReciever);

  // Message passing
  messageReciever.handler("Super-secret message");
  messageReciever.handler("Message processed");
  messageReciever.handler("Message ready");
  return 0;
}
