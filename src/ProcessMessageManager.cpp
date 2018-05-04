#include "../include/ProcessMessageManager.hpp"

ProcessMessageManager::ProcessMessageManager() {

}
void ProcessMessageManager::handler(int i) {
  if (rand() % 3) {
    cout << "Message Processed #" << i << ", ";
    MessageHandler::handler(i);
  }
  else {
    cout << "Message sent #" << i << " ";
  }
}
