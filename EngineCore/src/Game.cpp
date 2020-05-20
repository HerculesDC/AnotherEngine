#include "headers/Game.h"

#include <iostream>

Game::Game() {

}
Game::compl Game() {

}
Game* Game::Instance() {
	static Game* instance = new Game();
	return instance;
}
void Game::run() {
	std::cout << "Yo" << std::endl;
}