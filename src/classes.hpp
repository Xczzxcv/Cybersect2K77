

const int WHOLE_PRIORITY = 100;
const int PROFESSIONS_AT_RANK = 100;
class Human;
class Character;
class Building;
class TransitionScene;
class DialogScene;
class LiftingScene;
class Game;

class Game {
public:
    Game(){
        protagonist = new Character();

    }

private:
    Character *protagonist;


};

class Human{
public:
    enum Implant{
        Eyes = 1,
        Mouth = 2,
        Nose = 4,
        Ears = 8,
        Brain = 16,
        Hands = 32,
        Legs = 64,
    };
    enum Profession{
        Unemployed = 0,
        // a rank A professions
        President = PROFESSIONS_AT_RANK*0 + 1,
        Manager,
        Business_owner,

        // a rank B professions
        Office_man = PROFESSIONS_AT_RANK*1 + 1,
        Policeman,
        Doctor,
        Fireman,
        Freelancer,
        Programmer,

        // a rank C professions
        Zavod_worker = PROFESSIONS_AT_RANK*2 + 1,

        // a rank D professions
        Janitor = PROFESSIONS_AT_RANK*3 + 1,
        Waiter,
    };
    enum Rank {A, B, C, D};
    // to check to which rank profession goes to you need to divide profession number by rank
    enum Activity{
        Eat,
        Watch_tv,
        Home_chores,
        Work_at_work, // lol
        Work_at_home,
        Sleep,
        Surf_Internet,
        Play_games,
    };
    enum Gender { Male, Female };
    typedef struct{
        Activity morning;
        Activity daytime1;
        Activity daytime2;
        Activity daytime3;
        Activity evening1;
        Activity evening2;
        Activity night1;
        Activity night2;
        Activity night3;
    } Day;
private:
    bool at_home;
    int implants_collection;
    Profession profession;
    Day shedule;
    int age;
    Gender gender;
    Rank _rank; // because there is class 'std::rank'
    int respect;


    void make_shedule(){
    }

    void make_priority(){

    }
};

class Character{
public:
    Character(){
        charisma = Character::Stat_level::ZERO;
        intellect = Character::Stat_level::ZERO;
        status = Character::Sect_level::errand_boy;
    }
    enum Stat_level { ZERO, very_low, low, normal, high, very_high, ULTRA_MEGA_HIGH };
    enum Sect_level { errand_boy, disciple, beginner, master, head_of_the_sect};
private:
    Sect_level status;
    float revenue_share;
    Stat_level charisma;
    Stat_level intellect;
};

class Building{
public:
private:
    int height;
    int width;
};

