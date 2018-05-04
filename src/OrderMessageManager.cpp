// Jim Samson
// CS372 Final
// Order MessageHandler for orders

#include "../include/OrderMessageManager.hpp"

// OrderMessageManager() constructor
// Add messages to the white-list
OrderMessageManager::OrderMessageManager() {
  whiteListedMessages_.push_back("Super-secret message");
  whiteListedMessages_.push_back("Another cool message");
}

// handler() function
// Handles messages by checking the whitelist
void OrderMessageManager::handler(string message) {
  if (checkMessage(message)) {
    cout << "Order manager recieved: " << message << endl;
    addToMessages(message);
  }
  else {
    MessageHandler::handler(message);
  }
}

// checkMessage() function
// Checks to see if the message is in the whitelist
bool OrderMessageManager::checkMessage(string& message) {
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
void OrderMessageManager::addToMessages(string& message) {
  recentMessages_.push_back(message);
}

// printMessages() Function
// Prints all the messages that are added to memory
void OrderMessageManager::printMessages() {
  cout << endl << "Order received (OrderMessageManager): " << endl;
  for(auto index : recentMessages_) {
    cout << index << endl;
  }
}
