//
// Created by eddi on 23. 12. 5.
//

#ifndef CLASS_TEST_ACCOUNTREQUEST_H
#define CLASS_TEST_ACCOUNTREQUEST_H

#include <string>
#include "../../entity/Account.h"

class AccountLoginRequest {
private:
    std::string account_id;
    std::string password;

public:
    AccountLoginRequest(const std::string& account_id, const std::string& password);
    Account *toAccount();
    std::string getAccountId() const;
    std::string getPassword() const;
};

#endif //CLASS_TEST_ACCOUNTREQUEST_H
