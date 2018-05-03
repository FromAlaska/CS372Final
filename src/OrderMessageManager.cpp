#include "../include/OrderMessageManager.hpp"

OrderMessageManager::OrderMessageManager() {

}
void OrderMessageManager::handler(int) {
  cout << "Order has been processed" << endl;
}
