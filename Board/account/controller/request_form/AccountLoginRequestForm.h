//
// Created by eddi on 23. 12. 8.
//

#ifndef CLASS_TEST_ACCOUNTLOGINREQUESTFORM_H
#define CLASS_TEST_ACCOUNTLOGINREQUESTFORM_H


#include <string>
#include "../../service/request/AccountRequest.h"

class AccountLoginRequestForm {
private:
    std::string account_id;
    std::string password;

public:
    AccountLoginRequestForm(const std::string& account_id, const std::string& password);
    AccountLoginRequest *toAccountLoginRequest();
};


#endif //CLASS_TEST_ACCOUNTLOGINREQUESTFORM_H
