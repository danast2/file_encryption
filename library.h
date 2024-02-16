#ifndef FILE_ENCRYPTION_LIBRARY_H
#define FILE_ENCRYPTION_LIBRARY_H

#include <string>

using std::string;

class Manage_crypt{
private:
    string password;
    string path_to_file;
public:
    Manage_crypt(string &pass, string &path): password(pass), path_to_file(path){}
    void encrypt_file();
    void decrypt_file();
    string get_password();
    string get_path_to_file();
};

void hello();

#endif //FILE_ENCRYPTION_LIBRARY_H
