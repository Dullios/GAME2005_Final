#include "Hero.h"
#include "Game.h"

Hero::Hero()
{
	TheTextureManager::Instance()->load("../Assets/textures/hero/idle-1.png",
		"hero", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/hero/heroIdleSheet.png",
		"heroIdle", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/hero/heroJumpSheet.png",
		"heroJump", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/hero/heroWalkSheet.png",
		"heroWalk", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("hero");
	setWidth(90);
	setHeight(100);
	setPosition(glm::vec2(0.0f, 0.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setType(GameObjectType::HERO);
}

Hero::~Hero()
{

}

void Hero::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	/*switch (m_moveState)
	{
	case MOVE_IDLE:
		m_frameCount = 0;
		m_frameMax = 4;

		TheTextureManager::Instance()->drawFrame("heroIdle", xComponent, yComponent, getWidth(), getHeight(), 1, m_frameCount, TheGame::Instance()->getRenderer(), true);
		break;
	case MOVE_UP:

		break;
	case MOVE_DOWN:

		break;
	case MOVE_LEFT:
		m_frameCount = 0;
		m_frameMax = 6;

		TheTextureManager::Instance()->drawFrame("heroIdle", xComponent, yComponent, getWidth(), getHeight(), 1, m_frameCount, TheGame::Instance()->getRenderer(), true);
		break;
	case MOVE_RIGHT:
		m_frameCount = 0;
		m_frameMax = 6;

		TheTextureManager::Instance()->drawFrame("heroIdle", xComponent, yComponent, getWidth(), getHeight(), 1, m_frameCount, TheGame::Instance()->getRenderer(), true, SDL_FLIP_HORIZONTAL);
		break;
	default:
		
		break;
	}*/

	TheTextureManager::Instance()->draw("hero", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Hero::update()
{
	
}

void Hero::clean()
{
}
