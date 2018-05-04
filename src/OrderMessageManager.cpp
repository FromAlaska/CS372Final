#include "../include/OrderMessageManager.hpp"

OrderMessageManager::OrderMessageManager() {

}
void OrderMessageManager::handler(string message) {
  if (message == "Super-secret message") {
    cout << "Order manager recieved: " << message << endl;
    // Do something related to order messaging process
  }
  else {
    MessageHandler::handler(message);
  }
}
