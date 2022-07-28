// KONTENERY_Zadanie6.cpp :Zad 6. 
//Napisz prosty s³ownik który przet³umaczy s³owo z jêzyka angielskiego na polski(kilka testowych s³ów).

#include <iostream>
#include <map>

void translate(const std::map < std::string, std::string>& dictionary, const std::string& english)
{
   
    std::string polish{};
    try
    {
        polish = dictionary.at(english);
    }
 
    catch (const std::out_of_range& ex)
    {
        polish = "ERROR: not found";
    }


    std::cout << english << " means: " << polish << std::endl;
}

int main()
{
    std::map<std::string, std::string> dictionary;
    dictionary.insert(std::pair<std::string, std::string>("coffee", "kawa"));
    dictionary.insert({"zip", "zamek"});
    dictionary.insert({ "relax", "relaks" });
    dictionary.insert({ "dog", "pies" });
    dictionary.insert({ "cat", "kot" });
    dictionary.insert({ { "zip", "zamek" } , {"enought", "dosc"} , {"red" , "czerwony"} });

    std::cout << dictionary.at("dog") << std::endl;
    std::cout << dictionary["cat"] << std::endl;

    translate(dictionary, "zip");
    translate(dictionary, "apple");
}

