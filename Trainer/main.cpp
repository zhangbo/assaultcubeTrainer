//
//  main.cpp
//  Trainer
//
//  Created by bob smith on 2021/1/24.
//

#include <iostream>
#include <sstream>

#include "mem.hpp"
#include "constants.hpp"
#include "player.hpp"
#include "trainer.hpp"

int main(int argc, const char * argv[]) {
    pid_t pid = pid_from_name("assaultcube");
    task_t task = task_from_pid(pid);
    std::cout << "pid of assaultcube " << pid << std::endl;
    
    Trainer t = Trainer(pid);
    Constants constants = Constants();
    Player p = Player(constants.player_base_offset);
    bool showMenu = false;
    
    while (true) {
        if (!showMenu) {
            t.menu();
            t.handle_input();
            showMenu = true;
        }else {
            if (p.get_health(task) <= 100) {
                t.set_health(999);
            }
            if (p.get_clip(task) <= 100) {
                t.set_clip(999);
            }
            if (p.get_ammo(task) < 20) {
                t.set_ammo(999);
            }
        }
    }
    
    return 0;
}
