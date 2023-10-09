#ifndef USBCONNECTION_H
#define USBCONNECTION_H
#include <stack>

class USBConnection {

    private:

    int ID;
    std::stack<int> ids;
    USBConnection() {
        
    }

    public:

    int get_id() {
        return ID;
    }

    static USBConnection* createUsbConnection();
};

USBConnection* USBConnection::createUsbConnection() {

}

#endif