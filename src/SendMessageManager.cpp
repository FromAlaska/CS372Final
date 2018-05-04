#include "../include/SendMessageManager.hpp"

SendMessageManager::SendMessageManager() {

}
void SendMessageManager::handler(int i) {
  if (rand() % 3) {
    cout << "Message received by sendingManager #" << i << ", ";
    MessageHandler::handler(i);
  }
  else {
    cout << "Message sent #" << i << " ";
  }
}
