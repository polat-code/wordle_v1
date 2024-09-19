//
// Created by Özgürhan Polat on 19.09.2024.
//

#ifndef USERSERVICE_H
#define USERSERVICE_H
#include "User.h"
using namespace std;
using namespace user;

namespace UserService {

    class UserService {
        public:
            UserService();
            void registration(User &user);
            void login(User &user);
            void logout(User &user);
    };


}

#endif //USERSERVICE_H
