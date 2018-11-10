

const int WHOLE_PRIORITY = 100;
const int PROFESSIONS_AT_RANK = 100;
class Human;
class Character;
class Building;
class TransitionScene;
class DialogScene;
class LiftingScene;

class Human{
public:
    enum Implant{
        eyes = 1,
        mouth = 2,
        nose = 4,
        ears = 8,
        brain = 16,
        hands = 32,
        legs = 64,
    };
    enum Profession{
        Unemployed = 0,
        // a rank A professions
        president = PROFESSIONS_AT_RANK*0 + 1,
        manager,
        business_owner,

        // a rank B professions
        office_man = PROFESSIONS_AT_RANK*1 + 1,
        policeman,
        doctor,
        fireman,
        freelancer,
        programmer,

        // a rank C professions
        zavod_worker = PROFESSIONS_AT_RANK*2 + 1,

        // a rank D professions
        janitor = PROFESSIONS_AT_RANK*3 + 1,
        waiter,
    };
    enum Rank {A, B, C, D};
    // to check to which rank profession goes to you need to divide profession number to rank
    enum Activity{
        eat = 1,
        morning_prepare = 2,
        evening_prepare = 4,
        work_at_work = 8, // lol
        work_at_home = 16,
        sleep = 32,
        relax = 64,

    };
    enum Gender { male, female };
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
        ;
    }

    void make_priority(){

    }
};

class Character{
public:
    Character(){

    }
    enum Stat_level { ZERO, very_low, low, normal, high, very_high, ULTRA_MEGA_HIGH };
private:
    float revenue_share;
    int charisma;
    int intellect;
};

class Building{
public:
private:
    int height;
    int width;
};

