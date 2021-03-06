#pragma once
#ifndef MAINMENU_H
#define MAINMENU_H

#include <SFML/Graphics.hpp>
#define MAX_NUMBER_OF_ITEMS 3


class MainMenu
{
    public:
        MainMenu(float width, float height);
        virtual ~MainMenu();

        void draw(sf::RenderWindow &window);

        void moveLeft();
        void moveRight();

        sf::Color menuText_Static;
        sf::Color menuText_Active;

    private:
        int selectedItemIndex;

        sf::Font menuFont_Button;
        sf::Font menuFont_Title;
        sf::Font menuFont_Text;
        sf::Text menuText[MAX_NUMBER_OF_ITEMS];



        sf::Texture menuTexture_Start;
        sf::Sprite menuObject_Start;
};

#endif // MENU_H
