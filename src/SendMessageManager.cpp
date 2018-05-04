// Jim Samson
// CS372 Final
// This is the Message Handler Class

#include "../include/SendMessageManager.hpp"

// SendMessageManager() constructor
// Add messages to the white-list
SendMessageManager::SendMessageManager() {
  whiteListedMessages_.push_back("Message ready");
}

// handler() function
// Handles messages by checking the whitelist
void SendMessageManager::handler(string message) {
  if (checkMessage(message)) {
    cout << "sendingManager recieved: " << message << endl;
    addToMessages(message);
  }
  else {
    MessageHandler::handler(message);
  }
}

// checkMessage() function
// Checks to see if the message is in the whitelist
bool SendMessageManager::checkMessage(string& message) {
  bool checkMessage = false;
  for(auto index : whiteListedMessages_) {
    if(message == index) {
      checkMessage = true;
    }
  }
  return checkMessage;
}

// addToMessages() Function
// Adds messages to memory if the whitelist check passes
void SendMessageManager::addToMessages(string& message) {
  recentMessages_.push_back(message);
}

// printMessages() Function
// Prints all the messages that are added to memory
void SendMessageManager::printMessages() {
  cout << endl << "Order received (SendMessageManager): " << endl;
  for(auto index : recentMessages_) {
    cout << index << endl;
  }
}
