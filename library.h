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

};

void hello();

#endif //FILE_ENCRYPTION_LIBRARY_H
