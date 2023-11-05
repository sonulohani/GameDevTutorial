#include <SFML/Graphics.hpp>

void init(sf::Texture &skyTexture, sf::Sprite &skySprite, sf::Texture &bgTexture, sf::Sprite &bgSprite)
{
    skyTexture.loadFromFile("Assets/graphics/sky.png");
    skySprite.setTexture(skyTexture);

    bgTexture.loadFromFile("Assets/graphics/bg.png");
    bgSprite.setTexture(bgTexture);
}

void updateInput(sf::RenderWindow &window)
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.key.code == sf::Keyboard::Escape || event.type == sf::Event::Closed)
        {
            window.close();
        }
    }
}

void draw(sf::RenderWindow &window, sf::Sprite &skySprite, sf::Sprite &bgSprite)
{
    window.draw(skySprite);
    window.draw(bgSprite);
}

int main()
{
    sf::Vector2f viewSize{1024, 768};
    sf::VideoMode vm{viewSize.x, viewSize.y};
    sf::RenderWindow window{vm, "Hello SFML Game!!!", sf::Style::Default};

    sf::Vector2f playerPosition;
    bool playerMoving = false;
    sf::Texture skyTexture;
    sf::Sprite skySprite;

    sf::Texture bgTexture;
    sf::Sprite bgSprite;

    sf::Clock clock;
    window.setFramerateLimit(60);

    init(skyTexture, skySprite, bgTexture, bgSprite);

    while (window.isOpen())
    {
        updateInput(window);
        sf::Time dt = clock.restart();
        update(dt.asSeconds());

        window.clear(sf::Color::Red);
        draw(window, skySprite, bgSprite);
        window.display();
    }
}