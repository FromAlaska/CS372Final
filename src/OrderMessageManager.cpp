// Jim Samson
// CS372 Final
// Order MessageHandler for orders

#include "../include/OrderMessageManager.hpp"

OrderMessageManager::OrderMessageManager() {

}
void OrderMessageManager::handler(string message) {
  if (message == "Super-secret message") {
    cout << "Order manager recieved: " << message << endl;
    // Do something related to order Messaging Processes
  }
  else {
    MessageHandler::handler(message);
  }
}
