//
// Created by Özgürhan Polat on 19.09.2024.
//


#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

namespace user {

    enum Gender {
        MALE,
        FEMALE,
        NOT_PREFER_TO_SAY
    };

    class User {
        // Default is private
        int id;
        string name;
        string surname;
        string email;
        string password;
        int age;
        Gender gender;
    public:
        User(int id,string name,string surname,string email,string password,int age,Gender gender);

        // Id Getter
        int getId() const;

        // Name Setter and Getter
        string getName();
        void setName(string name);

        // Surname Setter and Getter
        string getSurname();
        void setSurname(string surname);

        // Email Setter and Getter
        void setEmail(string email);
        string getEmail();

        //Password Setter and Getter
        void setPassword(string password);
        string getPassword();

        // Age Setter and Getter
        void setAge(int age);
        int getAge();

        // Gender Setter and Getter
        void setGender(Gender gender);
        Gender getGender();
    };


}

#endif //USER_H
