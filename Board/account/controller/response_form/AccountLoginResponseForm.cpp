//
// Created by eddi on 23. 12. 8.
//

#include "AccountLoginResponseForm.h"

AccountLoginResponseForm::AccountLoginResponseForm (int login_account_unique_id)
        : login_account_unique_id(login_account_unique_id) { }

int AccountLoginResponseForm::getLoginAccountUniqueId() {
    return login_account_unique_id;
}