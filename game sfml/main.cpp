
#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include <iostream>
//void spawncoin(float,float);
int main()

{
	int a = 0;
	int b = 0;
	/*const float gravity = 1;
	int groundHeight = 630;
	float moveSpeed = 0.05f, jumpSpeed = 0.1f;*/
	//sf::Vector2f velocity(sf::Vector2f(0, 0));
	//
	sf::RenderWindow window(sf::VideoMode(1080, 720), "Game from scratch!", sf::Style::Close | sf::Style::Resize);

	sf::Texture bgTexture;
	if (!bgTexture.loadFromFile("lava.jpg"))
	{
		std::cout << "Load failed" << std::endl;
	}
	sf::Sprite bgsprite;
	bgsprite.setTexture(bgTexture);
	int bgspriteSizeX = bgTexture.getSize().x;
	int bgspriteSizeY = bgTexture.getSize().y;
	bgsprite.setTextureRect(sf::IntRect(0, 0, 1080, 720));
	sf::Font font;
	sf::Text hscore;
	/*if(!score.loadFromFile("font1.ttf"))
	{
		std::cout << "Load failed" << std::endl;
	}*/
	hscore.setFont(font);
	hscore.setCharacterSize(40);
	hscore.setFillColor(sf::Color::White);
	//sf::Vector2f spawnbg = { 50.f, 50.f };
	//bgsprite.setPosition(spawnbg);
	//sf::Vector2f spawnKey = { 1000.f, 640.f };
	///rectangle
	sf::RectangleShape squarecollision(sf::Vector2f(600.0f, 90.0f));
	squarecollision.setPosition({ 600.f, 500.f });
	squarecollision.setFillColor(sf::Color::Blue);
	///rectangle
	sf::RectangleShape squarecollision1(sf::Vector2f(250.0f, 60.0f));
	squarecollision1.setPosition({ 270.f, 570.f });
	squarecollision1.setFillColor(sf::Color::Green);
	///rectangle
	sf::RectangleShape squarecollision2(sf::Vector2f(230.0f, 60.0f));
	squarecollision2.setPosition({ 100.f, 640.f });
	squarecollision2.setFillColor(sf::Color::White);
	///rectangle
	sf::RectangleShape squarecollision3(sf::Vector2f(230.0f, 60.0f));
	squarecollision3.setPosition({ 0.f, 300.f });
	squarecollision3.setFillColor(sf::Color::Blue);
	///rectangle
	sf::RectangleShape squarecollisionred(sf::Vector2f(30.0f, 10.0f));
	squarecollisionred.setPosition({ 160.f, 630.f });
	squarecollisionred.setFillColor(sf::Color::Red);
	///rectangle
	sf::RectangleShape squarecollision4(sf::Vector2f(150.0f, 80.0f));
	squarecollision4.setPosition({ 0.f, 300.f });
	squarecollision4.setFillColor(sf::Color::Cyan);
	///rectangle
	sf::RectangleShape squarecollision5(sf::Vector2f(150.0f, 60.0f));
	squarecollision5.setPosition({ 0.f, 100.f });
	squarecollision5.setFillColor(sf::Color::Yellow);

	////// Circle
	sf::Texture ballTexture;
	if (!ballTexture.loadFromFile("fire1.png"))
	{
		std::cout << "Load failed" << std::endl;
	}
	sf::Sprite ballSprite;
	ballSprite.setTexture(ballTexture);
	int ballspriteSizeX = ballTexture.getSize().x;
	int ballspriteSizeY = ballTexture.getSize().y;
	ballSprite.setTextureRect(sf::IntRect(0, 0, ballspriteSizeX, ballspriteSizeY));
	sf::Vector2f spawnball = { 800.f, 100.f };
	ballSprite.setPosition(spawnball);
	/*sf::CircleShape circlecollision(10.f);
	circlecollision.setPosition({ 220.f, 200.f });
	circlecollision.setFillColor(sf::Color::Red);*/
	///circle
	sf::CircleShape circlecollision1(10.f);
	circlecollision1.setPosition({ 100.f, 680.f });
	circlecollision1.setFillColor(sf::Color::Red);
	////// Texture
	sf::Texture playerTexture;
	if (!playerTexture.loadFromFile("penguin.png"))
	{
		std::cout << "Load failed" << std::endl;
	}
	////// Sprite
	sf::Sprite shapeSprite;
	shapeSprite.setTexture(playerTexture);

	int spriteSizeX = playerTexture.getSize().x / 3;
	int spriteSizeY = playerTexture.getSize().y / 9;

	shapeSprite.setTextureRect(sf::IntRect(0, 0, spriteSizeX, spriteSizeY));

	sf::Vector2f spawnPoint = { 0.f, 600.f };
	shapeSprite.setPosition(spawnPoint);

	///key
	sf::Texture keyTexture;
	if (!keyTexture.loadFromFile("goldkeys.png"))
	{
		std::cout << "Load failed" << std::endl;
	}
	sf::Sprite keySprite;
	keySprite.setTexture(keyTexture);
	int keyspriteSizeX = keyTexture.getSize().x;
	int keyspriteSizeY = keyTexture.getSize().y;
	keySprite.setTextureRect(sf::IntRect(0, 0, keyspriteSizeX, keyspriteSizeY));
	sf::Vector2f spawnKey = { 1000.f, 640.f };
	keySprite.setPosition(spawnKey);
	///delete
	sf::Vector2f deletespawn = { 1000.f,1000.f };
	///coin
	sf::Texture coinTexture;
	if (!coinTexture.loadFromFile("coinss.png"))
	{
		std::cout << "Load failed" << std::endl;
	}
	sf::Sprite coinSprite;
	coinSprite.setTexture(coinTexture);
	int coinspriteSizeX = coinTexture.getSize().x;
	int coinspriteSizeY = coinTexture.getSize().y;
	coinSprite.setTextureRect(sf::IntRect(0, 0, coinspriteSizeX, coinspriteSizeY));
	float x, y;
	sf::Vector2f spawncoin = { 350.f, 660.f };
	//spawncoin(350, 600);
	if (b == 1)
	{
	 spawncoin = { 100.f, 100.f };
	}
	coinSprite.setPosition(spawncoin);
	
	sf::Sprite coinSprite1;
	coinSprite1.setTexture(coinTexture);
	int coinspriteSizeX1 = coinTexture.getSize().x;
	int coinspriteSizeY1 = coinTexture.getSize().y;
	coinSprite1.setTextureRect(sf::IntRect(0, 0, coinspriteSizeX1, coinspriteSizeY1));
	//float x, y;
	
	sf::Vector2f spawncoin1 = { 40.f, 200.f };
	//spawncoin(350, 600);
	if (b == 1)
	{
	spawncoin1 = { 1.f, 1.f };
	}
	coinSprite1.setPosition(spawncoin1);
	//coinSprite.setPosition(0.f, 0.f);
	///door
	/// 
	sf::Texture doorTexture;
	if (!doorTexture.loadFromFile("door1.png"))
	{
		std::cout << "Load failed" << std::endl;
	}
	sf::Sprite doorSprite;
	doorSprite.setTexture(doorTexture);
	int doorspriteSizeX = doorTexture.getSize().x;
	int doorspriteSizeY = doorTexture.getSize().y;
	doorSprite.setTextureRect(sf::IntRect(0, 0, doorspriteSizeX, doorspriteSizeY));
	sf::Vector2f spawndoor = { 50.f, 50.f };
	doorSprite.setPosition(spawndoor);
	//score
	int score = 0;
	/*sf::Text font1;
if (!font1.loadFromFile("font1.ttf"))
{
	std::cout << "Load failed" << std::endl;
}
std::ostringstream ssScore;
ssScore << "Score: " << score;

sf::Text lblscore;
lblscore.setCharacterSize(30);
lblscore.setPosition(680.f,20.f);
lblscore.setFont(font1);
lblscore.setString(ssScore.str());*/
///level2
///rectangle
	sf::RectangleShape squarecollision6(sf::Vector2f(60.0f, 300.0f));
	squarecollision6.setPosition({ 920.f, 500.f });
	squarecollision6.setFillColor(sf::Color::Blue);
	///rectangle
	sf::RectangleShape squarecollision7(sf::Vector2f(250.0f, 50.0f));
	squarecollision7.setPosition({ 0.f, 90.f });
	squarecollision7.setFillColor(sf::Color::Green);
	///rectangle
	sf::RectangleShape squarecollision8(sf::Vector2f(230.0f, 60.0f));
	squarecollision8.setPosition({ 750.f, 440.f });
	squarecollision8.setFillColor(sf::Color::White);
	///rectangle
	sf::RectangleShape squarecollision9(sf::Vector2f(250.0f, 60.0f));
	squarecollision9.setPosition({ 0.f, 550.f });
	squarecollision9.setFillColor(sf::Color::Blue);
	///rectangle
	sf::RectangleShape squarecollision10(sf::Vector2f(60.0f, 700.0f));
	squarecollision10.setPosition({ 400.f, 300.f });
	squarecollision10.setFillColor(sf::Color::Cyan);
	///rectangle
	sf::RectangleShape squarecollision11(sf::Vector2f(600.0f, 40.0f));
	squarecollision11.setPosition({ 400.f, 260.f });
	squarecollision11.setFillColor(sf::Color::Yellow);
	///rectangle
	sf::RectangleShape squarecollision12(sf::Vector2f(50.0f, 350.0f));
	squarecollision12.setPosition({ 200.f, 100.f });
	squarecollision12.setFillColor(sf::Color::Green);

	///redtangle
	sf::RectangleShape squarecollisionred1(sf::Vector2f(30.0f, 10.0f));
	squarecollisionred1.setPosition({ 0.f, 630.f });
	squarecollisionred1.setFillColor(sf::Color::Red);

	////// Circle
	sf::CircleShape circlecollision2(10.f);
	circlecollision2.setPosition({ 0.f, 0.f });
	circlecollision2.setFillColor(sf::Color::Red);
	///circle
	sf::CircleShape circlecollision3(10.f);
	circlecollision3.setPosition({ 0.f, 0.f });
	circlecollision3.setFillColor(sf::Color::Red);
	//lv3
	///rectangle
	/*sf::RectangleShape squarecollision13(sf::Vector2f(60.0f, 300.0f));
	squarecollision6.setPosition({ 920.f, 500.f });
	squarecollision6.setFillColor(sf::Color::Blue);
	///rectangle
	sf::RectangleShape squarecollision14(sf::Vector2f(250.0f, 50.0f));
	squarecollision7.setPosition({ 0.f, 90.f });
	squarecollision7.setFillColor(sf::Color::Green);
	///rectangle
	sf::RectangleShape squarecollision15(sf::Vector2f(230.0f, 60.0f));
	squarecollision8.setPosition({ 750.f, 440.f });
	squarecollision8.setFillColor(sf::Color::White);
	///rectangle
	sf::RectangleShape squarecollision16(sf::Vector2f(250.0f, 60.0f));
	squarecollision9.setPosition({ 0.f, 550.f });
	squarecollision9.setFillColor(sf::Color::Blue);
	///rectangle
	sf::RectangleShape squarecollision17(sf::Vector2f(60.0f, 700.0f));
	squarecollision10.setPosition({ 400.f, 300.f });
	squarecollision10.setFillColor(sf::Color::Cyan);
	///rectangle
	sf::RectangleShape squarecollision18(sf::Vector2f(600.0f, 40.0f));
	squarecollision11.setPosition({ 400.f, 260.f });
	squarecollision11.setFillColor(sf::Color::Yellow);
	///rectangle
	sf::RectangleShape squarecollision19(sf::Vector2f(50.0f, 350.0f));
	squarecollision12.setPosition({ 200.f, 100.f });
	squarecollision12.setFillColor(sf::Color::Green);

	///redtangle
	sf::RectangleShape squarecollisionred1(sf::Vector2f(30.0f, 10.0f));
	squarecollisionred1.setPosition({ 0.f, 630.f });
	squarecollisionred1.setFillColor(sf::Color::Red);

	////// Circle
	sf::CircleShape circlecollision2(10.f);
	circlecollision2.setPosition({ 0.f, 0.f });
	circlecollision2.setFillColor(sf::Color::Red);
	///circle
	sf::CircleShape circlecollision3(10.f);
	circlecollision3.setPosition({ 0.f, 0.f });
	circlecollision3.setFillColor(sf::Color::Red);
	*/
	int animationFrame = 0;
	//
	int i = 0;
	
	bool lv1 = 1, lv2 = 1, lv3 = 1;
	
	while (window.isOpen())
	{
		
		//window.display();

		window.clear();
		//printf("b=%d", b);
		if (b == 0)
		{
			
			ballSprite.move(-0.1f, 0.1f);
			lv1 = 1;
			lv2 = 0;

			if (circlecollision1.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
				score -= 1;
				printf("score = %d", score);
			}
			if (squarecollision.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
			}
			if (squarecollision1.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
			}
			if (squarecollision2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
			}
			if (squarecollision3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
			}
			if (squarecollisionred.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
				score -= 1;
			}

			//printf("abcd");
		}
		window.clear();
		if (b == 1)
		{	//printf("abcd");
			ballSprite.move(-0.1f, 0.1f);
			lv1 = 0;
			lv2 = 1;
			sf::Vector2f spawncoin = { 100.f, 100.f };
			sf::Vector2f spawncoin1 = { 200.f, 200.f };
			/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
			{
				shapeSprite.move(.1f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
			{
				shapeSprite.move(-.1f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3, spriteSizeX, spriteSizeY));
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
			{
				shapeSprite.move(0.f, -.1f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			{
				shapeSprite.move(0.f, .1f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 4, spriteSizeX, spriteSizeY));
			}
			animationFrame++;
			if (animationFrame >= 2)
			{
				animationFrame = 0;
			}*/
			if (circlecollision2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
				score -= 1;
				printf("score = %d", score);
			}
			if (circlecollision3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
				score -= 1;
				printf("score = %d", score);
			}
			if (squarecollision6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				printf("abcdef");
				shapeSprite.setPosition(spawnPoint);
			}
			if (squarecollision7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
			}
			if (squarecollision8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
			}
			if (squarecollision9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
			}
			if (squarecollision10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
			}
			if (squarecollision11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
			}
			if (squarecollision12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
			}
			if (squarecollisionred1.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				shapeSprite.setPosition(spawnPoint);
				score -= 1;
			}
			if (keySprite.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))
			{
				//shapeSprite.setPosition(spawnPoint)
				i += 1;
				printf("%d", i);
				keySprite.setPosition(deletespawn);
			}
		}
		//window.display();
	
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
			{
				printf("1111111111111");
				shapeSprite.move(.1f, 0.f);
				printf("22222222");
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
			{
				shapeSprite.move(-.1f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3, spriteSizeX, spriteSizeY));
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
			{
				shapeSprite.move(0.f, -.1f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
			}
			
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			{
				shapeSprite.move(0.f, .1f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 4, spriteSizeX, spriteSizeY));
			}
			/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::G))
			{
				ballfire.move(0.f, -.1f);
				//shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
			}*/
			//Left
			if (shapeSprite.getPosition().x < 0.f)
				shapeSprite.setPosition(0.f, shapeSprite.getPosition().y);
			//Top
			if (shapeSprite.getPosition().y < 0.f)
				shapeSprite.setPosition(shapeSprite.getPosition().x,0.f);
			//Right
			if (shapeSprite.getPosition().x+shapeSprite.getGlobalBounds().width > 1080)
				shapeSprite.setPosition(1080-shapeSprite.getGlobalBounds().width, shapeSprite.getPosition().y);
			//Bottom
			if (shapeSprite.getPosition().y + shapeSprite.getGlobalBounds().height > 720)
				shapeSprite.setPosition(shapeSprite.getPosition().x,720 - shapeSprite.getGlobalBounds().height);
			//
			/*if(squarecollisionred.getPosition().y>=620)
			squarecollisionred.move(.0f, -0.2f);
			//
			if (squarecollisionred.getPosition().y <= 300)
				squarecollisionred.move(.0f, -0.2f);*/
			
			/*if (squarecollisionred.getGlobalBounds().intersects(squarecollision2.getGlobalBounds())) {
				squarecollisionred.move(.0f, -.2f);
			}*/

			if (squarecollisionred.getGlobalBounds().intersects(squarecollision3.getGlobalBounds())) {
				squarecollisionred.move(.0f, 300.0f);
			}
			squarecollisionred.move(.0f, -0.2f);
			
			window.clear();

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}

		animationFrame++;
		if (animationFrame >= 2) 
		{
			animationFrame = 0;
		}

		//level 1
		
		if (ballSprite.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) 
		{
			
			shapeSprite.setPosition(spawnPoint);
			score -= 1;
			printf("score = %d", score);
		}
		
		
		if (keySprite.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) 
		{
			//shapeSprite.setPosition(spawnPoint)
			a+=1;
			printf("%d", a);
			keySprite.setPosition(deletespawn);
			
		}
		if (coinSprite.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) 
		{
			//shapeSprite.setPosition(spawnPoint)
			score += 5;
			printf("score = %d", score);
			coinSprite.setPosition(deletespawn);
		}
		if (coinSprite1.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) 
		{
			//shapeSprite.setPosition(spawnPoint)
			score += 5;
			printf("score = %d", score);
			coinSprite1.setPosition(deletespawn);
		}
		if (doorSprite.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) 
		{
			//doorSprite.setPosition(spawnPoint);
			//system("cls");
			//lv1 = 0;
			//lv2 = 1;
			a--;
			b++;
			doorSprite.setPosition(deletespawn);

			shapeSprite.setPosition(spawnPoint);
			printf("b = %d",b);
			//level2
			
		
		}
		if (lv1 == 1)
		{
			//hscore = score;
			window.draw(hscore);
			window.draw(bgsprite);
			window.draw(shapeSprite);
			window.draw(keySprite);
			//coin(350, 660);
			window.draw(coinSprite);
			window.draw(coinSprite1);
			window.draw(squarecollision);
			window.draw(squarecollision1);
			window.draw(squarecollision2);
			window.draw(squarecollision3);
			window.draw(squarecollisionred);
			window.draw(ballSprite);
			window.draw(circlecollision1);
			if (a == 1)
			{
				window.draw(doorSprite);
				//window.display();
			}
			window.display();
		}
		if (lv2 == 1)
		{
			window.draw(ballSprite);
			window.draw(bgsprite);
			window.draw(shapeSprite);
			window.draw(keySprite);
			window.draw(coinSprite);
			window.draw(coinSprite1);
			window.draw(squarecollision6);
			window.draw(squarecollision7);
			window.draw(squarecollision8);
			window.draw(squarecollision9);
			window.draw(squarecollision10);
			window.draw(squarecollision11);
			window.draw(squarecollision12);
			//window.draw(squarecollision13);
			window.draw(squarecollisionred1);
			window.draw(circlecollision2);
			window.draw(circlecollision3);
			window.display();
			
		}
		
		//window.clear();
	}
		return 0;
	}
	
/*void spawncoin(float x, float y)
{
	sf::Texture coinTexture;
	if (!coinTexture.loadFromFile("coinss.png"))
	{
		std::cout << "Load failed" << std::endl;
	}
	sf::Sprite coinSprite;
	coinSprite.setTexture(coinTexture);
	int coinspriteSizeX = coinTexture.getSize().x;
	int coinspriteSizeY = coinTexture.getSize().y;
	coinSprite.setTextureRect(sf::IntRect(0, 0, coinspriteSizeX, coinspriteSizeY));
	sf::Vector2f spawncoin = { x.f, y.f };
	//coinSprite.setPosition(x.f,y.f);
	//window.drawcoinSprite();
}*/
