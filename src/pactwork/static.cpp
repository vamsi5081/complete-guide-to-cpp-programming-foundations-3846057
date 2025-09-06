#include <iostream>

class Enemy{
public:
    static int enemyCount; // Static class member

    // This is the constructor, called every time a new Enemy object is instantiated.
    Enemy(){
        ++enemyCount; // Increase enemy count
    }

    static void showEnemyCount() {
        std::cout << "Total Enemies: " << enemyCount << std::endl;
    }
};

// Initialize static member even when no instances exist yet
int Enemy::enemyCount = 0;

int main(){
    Enemy goblin;
    Enemy orc;
    Enemy troll;
    Enemy lazy;

    Enemy::showEnemyCount(); // Output: Total Enemies: 3
    return 0;
}
