#include "./includes/main.hpp"

int get_file_len(std::fstream *my_file)
{
    int i = 0;
    char c;
    while (1)
    {
        my_file->get(c);
        if (my_file->eof())
            break;
        i++;
    }
    my_file->close();
    return (i);
}

void replace_text(std::string file_text, char **argv)
{
    std::string old_file(argv[1]);
    std::string finder(argv[2]);
    std::string changer(argv[3]);
    size_t old_match = 0;
    size_t found;
    std::fstream new_file;
    old_file = "./" + old_file + ".replace";
    std::cout << old_file <<std::endl; 
    new_file.open(old_file, std::ios_base::out);
    //serach matching at first time
    found = file_text.find(finder);
    if (found == std::string::npos)
        new_file << file_text;
    else
    {
        while (1)
        {
            if (found == std::string::npos)
                break ;
            new_file << file_text.substr(0, found);
            new_file << changer;
            old_match = found + finder.length();
            file_text = file_text.substr(old_match, file_text.length());
            found = file_text.find(finder, 0);
        }
        new_file << file_text;
    }
    new_file.close();
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::fstream my_file;
        my_file.open(argv[1], std::ios::in);
        my_file >> std::noskipws;
        int file_len;
        char c;
        if (my_file)
        {
            // checke the file length and close it fo reopening
            file_len = get_file_len(&my_file);
            my_file.open(argv[1], std::ios::in);
            //filling the arr with characters from the file
            char tmp_arr[file_len];
            my_file.get(tmp_arr, file_len + 1, EOF);
            my_file.close();
            std::string file_text(tmp_arr);
            replace_text(file_text, argv);
        }
        else
            std::cout << "file didnt exist";
    }
    else
        std::cout << "Wrong arguments count" <<std::endl;
    return (0);
}