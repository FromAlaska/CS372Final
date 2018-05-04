#include "../include/SendMessageManager.hpp"

SendMessageManager::SendMessageManager() {

}
void SendMessageManager::handler(string message) {
  if (message == "Message ready") {
    cout << "sendingManager recieved: " << message << endl;
    // Do something related to Sending messages
  }
  else {
    MessageHandler::handler(message);
  }
}
