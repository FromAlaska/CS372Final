#include "../include/OrderMessageManager.hpp"

OrderMessageManager::OrderMessageManager() {

}
void OrderMessageManager::handler(int i) {
  if (rand() % 3) {
    cout << "Order has been received #" << i << ", ";
    MessageHandler::handler(i);
  }
  else {
    cout << "Message sent #" << i << " ";
  }
}
