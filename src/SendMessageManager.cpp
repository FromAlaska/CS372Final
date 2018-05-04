// Jim Samson
// CS372 Final
// This is the Message Handler Class

#include "../include/SendMessageManager.hpp"

SendMessageManager::SendMessageManager() {

}
void SendMessageManager::handler(string message) {
  if (message == "Message ready") {
    cout << "sendingManager recieved: " << message << endl;
    // Do something related to Sending Messages
  }
  else {
    MessageHandler::handler(message);
  }
}
