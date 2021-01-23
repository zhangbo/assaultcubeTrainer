//
//  trainer.hpp
//  Headshot
//
//  Created by bob smith on 2021/1/24.
//

#ifndef trainer_hpp
#define trainer_hpp

#include "constants.hpp"
#include "mem.hpp"
#include "player.hpp"

class Trainer {
private:
    pid_t pid;
    task_t task;
    Player self = NULL;
    std::vector<Player> enemies;
    Constants constants;

public:
    Trainer() = delete;
    Trainer(int);
    void reinit();
    float get_distance(Player p, Player q);
    std::tuple<float, float> calc_aim_angles(Player p, Player q);
    bool trace_line(Player p, Player q);
    bool test_traceline();
    void menu();
    void handle_input();
    void set_health(unsigned int);
    void set_clip(unsigned int);
    void set_ammo(unsigned int);
    void aimbot();
    char* prepare_shellcode(uintptr_t);
};

#endif /* trainer_hpp */
