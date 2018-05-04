#include "../include/SendMessageManager.hpp"

SendMessageManager::SendMessageManager() {

}
void SendMessageManager::handler(string message) {
  if (message == "Message ready") {
    cout << "sendingManager recieved: " << message << endl;;
    // MessageHandler::handler(message);
  }
  else {
    MessageHandler::handler(message);
    //cout << "SendMessageManager:" << message << endl;
  }
}
