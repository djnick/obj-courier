//
// Created by djnic on 08.03.2021.
//

#include "Routes.h"

void Routes::addClient(int client) {
    clients.insert(client);
}

const std::set<int> &Routes::getClients() const {
    return clients;
}

void Routes::setClients(const std::set<int> &clients) {
    Routes::clients = clients;
}

int Routes::getSize() const {
    return size;
}

void Routes::setSize(int size) {
    Routes::size = size;
}

const Graph &Routes::getMap() const {
    return map;
}

void Routes::setMap(const Graph &map) {
    Routes::map = map;
}



