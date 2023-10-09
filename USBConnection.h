#ifndef USBCONNECTION_H
#define USBCONNECTION_H
#include <stack>

class USBConnection {

    private:
    // declare ID
    int ID;
    // declare static stack to store id data
    static std::stack<int> ids; 

    USBConnection() {
        ID = ids.top();
        ids.pop();
    }
    public:

    int get_id() {
        return ID;
    }

    static USBConnection* CreateUsbConnection() {
        if (!ids.empty()) {
            USBConnection* new_connection = new USBConnection();
            return new_connection;
        }
        else {
            return nullptr;
        }
    };
};

std::stack<int> USBConnection::ids({3,2,1});


#endif