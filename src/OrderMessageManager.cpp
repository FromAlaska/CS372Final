#include "../include/OrderMessageManager.hpp"

OrderMessageManager::OrderMessageManager() {

}
void OrderMessageManager::handler(string message) {
  if (message == "Super-secret message") {
    cout << "Order manager recieved: " << message << endl;
  }
  else {
    MessageHandler::handler(message);
  }
}
