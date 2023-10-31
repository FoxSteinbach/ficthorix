#include<cstring>
class character
{
public:
    string name;
    string sirname;
    unsigned age;
    unsigned height;
    unsigned weight;
    string hair;
    string eyes;
    string additional_info;
    string target;
    bool isalive;
    string deadinfo;
    
character()
{
    name = "John";
    sirname = "Dow";
    age = 25;
    height = 170;
    weight = 70;
    hair = "Curve brown";
    eyes = "Blue";
    additional_info = "New character";
    target = "Stay alive";
    isalive = true;
    deadinfo = "still alive";
}

character(string p_name, string p_sirname, unsigned p_age = 0, unsigned p_height = 0, unsigned p_weight = 0, string p_hair = "Empty", string p_eyes = "Empty", string p_additinfo = "Nothing", string p_target = "Stay Alive", bool p_isalive = true, string p_death = "Alive")
{
    name = p_name;
    sirname = p_sirname;
    age = p_age;
    height = p_height;
    weight = p_weight;
    hair = p_hair;
    eyes = p_eyes;
    additional_info = p_additinfo;
    target = p_target;
    isalive = p_isalive;
    deadinfo = p_death;
}

~character() {delete();};

int crename(string new_name = this->name, string new_sirname = this->sirname)
{
    name = new_name;
    sirname = new_sirname;
    return 0;
}
};
