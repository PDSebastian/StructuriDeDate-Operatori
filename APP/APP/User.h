#pragma once
#include "Lista.h"

#pragma once
#include <string>
#include <functional>


class User {
private:
    int id;
    std::string username;

public:
    User() : id(0), username("") {}
    User(int id, const std::string& username)
        : id(id), username(username) {
    }
    ~User() = default;

    void setID(int id) {
        this->id = id;
    }
    void setUsername(const std::string& username) {
        this->username = username;
    }
    int getID() const {
        return this->id;
    }
    const std::string& getUsername() const {
        return this->username;
    }
    bool operator==(const User& user) const {
        return id == user.id;
    }
    bool operator!=(const User& user) const {
        return !(*this == user);
    }
    friend ostream& operator<<(ostream& os, User& u) {
        os << u.id << endl;
        os << u.username << endl;
        return os;
    }
};

namespace std {
    template<>
    struct hash<User> {
        size_t operator()(const User& u) const noexcept {
            return std::hash<int>{}(u.getID());
        }
    };
}