#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

const int hight = 787;
const int width = 1400;

int main (int args,char* argc[])
{

TTF_Font *font = NULL;

SDL_Surface* screen = NULL;
SDL_Surface* image = NULL;
SDL_Surface* image1 = NULL;
SDL_Surface* image2 = NULL;
SDL_Surface* back = NULL;
SDL_Surface* stings = NULL;
SDL_Surface* stings2black = NULL;
SDL_Surface* stingsblack = NULL;
SDL_Surface* settingsb = NULL;
SDL_Surface* quit = NULL;
SDL_Surface* quit1black = NULL;
SDL_Surface* quit2black = NULL;
SDL_Surface* imageblack = NULL;
SDL_Surface* image2black = NULL;
SDL_Surface* home = NULL;
SDL_Surface* ruler = NULL;
SDL_Surface* button = NULL;
SDL_Surface* ruler1 = NULL;
SDL_Surface* button1 = NULL;
SDL_Surface* back1 = NULL;
SDL_Surface* back2 = NULL;
SDL_Surface* back3 = NULL;
SDL_Surface* optemizedimage = NULL;
SDL_Surface* optemizedimage1 = NULL;
SDL_Surface* optemizedimage2black = NULL;
SDL_Surface* optemizedback = NULL;
SDL_Surface* optemizedstings = NULL;
SDL_Surface* optemizedstings2 = NULL;
SDL_Surface* optemizedquit = NULL;
SDL_Surface* optemizedquit1black = NULL;
SDL_Surface* optemizedquit2black = NULL;
SDL_Surface* optemizedimageblack = NULL;
SDL_Surface* optemizedstings2black = NULL;
SDL_Surface* optemizedstingsblack = NULL;
SDL_Surface* optemizedstingsb = NULL;
SDL_Surface* optemizedhome = NULL;
SDL_Surface* optemizedruler = NULL;
SDL_Surface* optemizedruler1 = NULL;
SDL_Surface* optemizedbutton1 = NULL;
SDL_Surface* optemizedbutton = NULL;
SDL_Surface* optemizedback1=NULL;
SDL_Surface* optemizedback2=NULL;
SDL_Surface* optemizedback3=NULL;
SDL_Event e;

Mix_Music* music = NULL;
Mix_Chunk* sound = NULL;
//image position
SDL_Rect position;
position.x = width / 2.6;
position.y = 160;
position.w = width / 2;
position.h = hight / 3;
//image1 position
SDL_Rect scr;
scr.x = 0;
scr.y = 0;
scr.w = 287;
scr.h = 116;

SDL_Rect positionquit;
positionquit.x = width / 2.6;
positionquit.y = 485;
positionquit.w = width / 2;
positionquit.h = hight / 3;
//destination position pause
SDL_Rect positionstings;
positionstings.x=width / 2.6;
positionstings.y = 325;
positionstings.w = width / 2;
positionstings.h = hight / 3;
//position settings background
SDL_Rect posstingsback ;
posstingsback.x = width/4.777;
posstingsback.y = 90;
//position home button
SDL_Rect poshome;
poshome.x = 1000;
poshome.y = 600;
//position ruler
SDL_Rect posruler;
posruler.x = 500;
posruler.y = 500;
//position ruler1
SDL_Rect posruler1;
posruler1.x = 500;
posruler1.y = 355;
//position button
SDL_Rect posbutton ={700,489};
SDL_Rect posbutton1 ={700,344};

//
SDL_Rect postxt={500,0};

SDL_Color textColor = { 0, 0, 0 };


SDL_Init( SDL_INIT_EVERYTHING );
Mix_OpenAudio( 22050, MIX_DEFAULT_FORMAT, 2, 0 );
TTF_Init();

screen = SDL_SetVideoMode(width,hight,32,SDL_HWSURFACE );
//play 1
image = IMG_Load("play.png");
imageblack = IMG_Load("startback.png");
//background
back =IMG_Load("gameback.png");
/*back1 =IMG_Load("1.png");
back2=IMG_Load("2.png");
back3=IMG_Load("3.png");*/
//play 2
image2black = IMG_Load("startdpwn.png");

//settings 1
stings = IMG_Load("stings.png");
stingsblack = IMG_Load("setingsblack1.png");

//settings 2
stings2black = IMG_Load("setingsblack2.png");

sound = Mix_LoadWAV("crash.wav");
music = Mix_LoadMUS("musicgame.wav");
//quit images
quit = IMG_Load("quit.png");
quit1black = IMG_Load("quitblack1.png");
quit2black = IMG_Load("quitblack2.png");
//settings background
settingsb= IMG_Load("settingsbackground.png");
home = IMG_Load("homes.png");
ruler = IMG_Load("ruler1.png");
ruler1 = IMG_Load("ruler1.png");
button = IMG_Load("button1.png");
button1 = IMG_Load("button1.png");

font = TTF_OpenFont( "angelina.TTF", 80);

//play button 1
optemizedimage = SDL_DisplayFormat( image );
optemizedimageblack = SDL_DisplayFormat( imageblack );
// play button 2
optemizedimage2black = SDL_DisplayFormat( image2black );
// background
optemizedback = SDL_DisplayFormat( back );
optemizedback1 = SDL_DisplayFormat( back1 );
optemizedback2 = SDL_DisplayFormat( back2 );
optemizedback3 = SDL_DisplayFormat( back3 );
// settings
optemizedstings = SDL_DisplayFormat( stings );
optemizedstingsblack = SDL_DisplayFormat( stingsblack );
//
optemizedstings2black = SDL_DisplayFormat( stings2black );
// quit
optemizedquit = SDL_DisplayFormat( quit );
optemizedquit1black = SDL_DisplayFormat( quit1black );
optemizedquit2black = SDL_DisplayFormat( quit2black );
//settings background
optemizedstingsb = SDL_DisplayFormat( settingsb );
optemizedhome = SDL_DisplayFormat( home );
//sound button
optemizedruler = SDL_DisplayFormat( ruler );
optemizedbutton = SDL_DisplayFormat(button);
optemizedruler1 = SDL_DisplayFormat(ruler1);
optemizedbutton1 = SDL_DisplayFormat(button1);

SDL_Surface *message = NULL;



SDL_WM_SetCaption( "CODE WIZARDS", NULL );

message = TTF_RenderText_Solid( font, "GAME GAME", textColor );

SDL_FreeSurface(image);
SDL_FreeSurface(back);
//SDL_FreeSurface(image2);
SDL_FreeSurface(stings);
SDL_FreeSurface(stingsblack);
SDL_FreeSurface(quit);
SDL_FreeSurface(quit1black);
SDL_FreeSurface(quit2black);
SDL_FreeSurface(imageblack);
SDL_FreeSurface(image2black);
SDL_FreeSurface(settingsb);
SDL_FreeSurface(home);
SDL_FreeSurface(ruler);
SDL_FreeSurface(button);
SDL_FreeSurface(ruler1);
SDL_FreeSurface(button1);
SDL_FreeSurface(back1);
SDL_FreeSurface(back2);
SDL_FreeSurface(back3);


int quitgame = 0;
int x =0,y=0,x1=0,y1=0,x2=0,y2=0;
int run =0,i=0,show =0,showpause = 0,showquit =0,showblack = 0,showsettings =0,showquitblack2=0,showsettingsback=0,showbutton=0,showbutton1=0,k=0,showbuttonstings =0,showbuttonplay=0,showbuttonquit=0;
Mix_PlayMusic(music, -1);
	while(quitgame == 0)
	{
        SDL_BlitSurface(optemizedback,NULL,screen,NULL);

        if(showblack ==0)
        {
            SDL_BlitSurface(optemizedimage,&scr,screen,&position);
        }
        if(showpause == 0)
        {
            SDL_BlitSurface(optemizedstings,&scr,screen,&positionstings);
        }
        if(showquit == 0)
        {
            SDL_BlitSurface(optemizedquit,&scr,screen,&positionquit);
        }
        SDL_BlitSurface(message,NULL,screen,&postxt);
        
		if(SDL_PollEvent(&e) != 0)
		{
				if(e.type == SDL_QUIT)
				{
					quitgame = 1;
				}
			
	if( e.type == SDL_MOUSEMOTION )
    {
        //Get the mouse offsets
        x = e.motion.x;
        y = e.motion.y;

        if( ( x > position.x ) && ( x < position.x + position.w ) && ( y > position.y ) && ( y < position.y + position.h )  && (showsettingsback ==0))
        {
            i++;
            if(i==1)
            {
                Mix_PlayChannel(-1,sound, 0);   
            }
            showblack = 1;
            
        }
        else
            if( ( x > positionstings.x ) && ( x < positionstings.x + positionstings.w  ) && ( y > positionstings.y ) && ( y < positionstings.y + positionstings.h ) && (showsettingsback ==0))
            {
                i++;
                if(i==1)
                {
                    Mix_PlayChannel(-1,sound, 0);
                }
            showpause = 1;
            }
        else
            if(( x > positionquit.x ) && ( x < positionquit.x + positionquit.w ) && ( y > positionquit.y ) && ( y < positionquit.y + positionquit.h )&& (showsettingsback ==0))
            {
                i++;
                if(i==1)
                {
                    Mix_PlayChannel(-1,sound, 0);
                }
                showquit =1;
            }
        //If not
        else
        {
           i=0;
           showblack =0;
           showpause = 0;
           showquit =0;
        }
    }
    if( e.type == SDL_MOUSEBUTTONDOWN )
    {
        //If the left mouse button was pressed
        if( e.button.button == SDL_BUTTON_LEFT )
        {
            //Get the mouse offsets
            x1 = e.button.x;
            y1 = e.button.y;


            //If the mouse is over the button
            if( ( x1 > position.x ) && ( x1 < position.x + position.w ) && ( y1 > position.y ) && ( y1 < position.y + position.h  ) && (showsettingsback ==0))
            {
                
                show = 1;
            }
            
            else
            	if( ( x1 > positionstings.x ) && ( x1 < positionstings.x + positionstings.w  ) && ( y1 > positionstings.y ) && ( y1 < positionstings.y + positionstings.h ) && (showsettingsback ==0))
            {
                
                showsettings = 1; 
                
            }
            else

                if(( x1 > positionquit.x ) && ( x1 < positionquit.x + positionquit.w ) && ( y1 > positionquit.y ) && ( y1 < positionquit.y + positionquit.h )&& (showsettingsback ==0))
                {
                    showquitblack2 = 1;
                }
            if(( x1 > poshome.x ) && ( x1 < poshome.x + poshome.w ) && ( y1 > poshome.y ) && ( y1 < poshome.y + poshome.h ) && (showsettingsback ==1))
            {
                showsettingsback=0;
            }
            
        
            if(( x1 > posbutton.x ) && ( x1 < posbutton.x + posbutton.w ) && ( y1 > posbutton.y ) && ( y1 < posbutton.y + posbutton.h ) && (showsettingsback ==1))
            {
                    showbutton=1;
            }
            if(( x1 > posbutton1.x ) && ( x1 < posbutton1.x + posbutton1.w ) && ( y1 > posbutton1.y ) && ( y1 < posbutton1.y + posbutton1.h ) && (showsettingsback ==1))
            {
                    showbutton1=1;
            }
            
            

        
        }
    }
    if( e.type == SDL_MOUSEBUTTONUP )
    {
        //If the left mouse button was released
        if( e.button.button == SDL_BUTTON_LEFT )
        {
            //Get the mouse offsets
            x2 = e.button.x;
            y2 = e.button.y;

            //If the mouse is over the button
            if( ( x2 > position.x ) && ( x2 < position.x + position.w ) && ( y2 > position.y ) && ( y2 < position.y + position.h )&& (showsettingsback ==0) )
            {
                show = 0;
            }
            else
            	if( ( x2 > positionstings.x ) && ( x2 < positionstings.x + positionstings.w ) && ( y2 > positionstings.y ) && ( y2 < positionstings.y + positionstings.h  ) && (showsettingsback ==0))
            {
                showsettings = 0;
                //show settings background
                showsettingsback = 1;
            }
            else
                if(( x2 > positionquit.x ) && ( x2 < positionquit.x + positionquit.w ) && ( y2 > positionquit.y ) && ( y2 < positionquit.y + positionquit.h )&& (showsettingsback ==0))
                {
                    showquitblack2 = 0;
                    quitgame = 1;
                }
            else
            	if(( x2 > posbutton.x ) && ( x2 < posbutton.x + posbutton.w ) && ( y2 > posbutton.y ) && ( y2 < posbutton.y + posbutton.h ) && (showsettingsback ==0))
            {
            	showbutton=0;
            }
            else
            	if(( x2 > posbutton.x ) && ( x2 < posbutton.x + posbutton.w ) && ( y2 > posbutton.y ) && ( y2 < posbutton.y + posbutton.h ) && (showsettingsback ==0))
            {
            	showbutton=0;
            }
            else
            	if(( x2 > posbutton1.x ) && ( x2 < posbutton1.x + posbutton1.w ) && ( y2 > posbutton1.y ) && ( y2 < posbutton1.y + posbutton1.h ) && (showsettingsback ==0))
            {
            	showbutton1=0;
            }
            else
                {
                    show =0;
                    showsettings = 0;
                    showquitblack2 = 0;
                    //showsettingsback = 0;
                    showbutton=0;
                    showbutton1=0;
                }

        }

    }
    if(e.type == SDL_KEYDOWN)
    	{

    		if(e.key.keysym.sym == SDLK_UP)
    		{
    			k++;
    			if(k>2)
    			{
    				k=2;
    			}
    			if(k==1)
    			{
    				showbuttonstings = 1;
    				showbuttonquit=0;
    			}
    			
    			if(k==2)
    				{

    					showbuttonstings = 0;
    					showbuttonplay = 1;
    				}
    			
    		}

    		if(e.key.keysym.sym == SDLK_DOWN)
    		{
    			k--;
    			if(k<0)
    			{
    				k=0;
    			}
    			if(k==0)
    			{
    				showbuttonstings = 0;
    				showbuttonquit=1;
    			}
    			if(k==1)
    			{
    				showbuttonplay = 0;
    				showbuttonstings = 1;
    				
    			}
    		}
    		if(e.key.keysym.sym == SDLK_KP_ENTER )
    		{
    			if(k==0)
    			{
    				quitgame =1;
    			}
    			if(k==1)
    			{
    				showsettingsback=1;
    			}
    		}
    	}
    	if(showblack == 1 || showpause == 1 || showquit == 1)
    	{
    		showbuttonquit=0;
    		showbuttonplay=0;
    		showbuttonstings =0;
    	}
	}
		if(showbuttonquit==1)
		{
			SDL_BlitSurface(optemizedquit1black,&scr,screen,&positionquit);
		}
		if(showbuttonplay==1)
		{
			SDL_BlitSurface(optemizedimageblack,&scr,screen,&position);
		}
		if(showbuttonstings ==1)
		{
			SDL_BlitSurface(optemizedstingsblack,&scr,screen,&positionstings);
		}		
        if(showblack == 1)
        {
            SDL_BlitSurface(optemizedimageblack,&scr,screen,&position);
        }

         if(show == 1)
		{
            SDL_BlitSurface(optemizedimage2black,&scr,screen,&position);
		}

		if(showpause == 1)
		{
			SDL_BlitSurface(optemizedstingsblack,&scr,screen,&positionstings);
		}
        if(showsettings == 1)
        {
            SDL_BlitSurface(optemizedstings2black,&scr,screen,&positionstings);
        }
        //show first black image
        if(showquit == 1)
        {
            SDL_BlitSurface(optemizedquit1black,&scr,screen,&positionquit);
        }
        if(showquitblack2 ==1)
        {
            SDL_BlitSurface(optemizedquit2black,&scr,screen,&positionquit);
        }
        if(showsettingsback==1)
        {
            SDL_BlitSurface(optemizedstingsb,NULL,screen,&posstingsback);
            SDL_BlitSurface(optemizedhome,NULL,screen,&poshome);
            SDL_BlitSurface(optemizedruler,NULL,screen,&posruler);
            SDL_BlitSurface(optemizedbutton,NULL,screen,&posbutton);
            SDL_BlitSurface(optemizedruler1,NULL,screen,&posruler1);
            SDL_BlitSurface(optemizedbutton1,NULL,screen,&posbutton1);
            

        }
        if(showbutton==1)
        {
        	if(( x > posruler.x-1 ) && ( x < posruler.x + posruler.w -6) )
        	{
        		if(posbutton.x == posruler.x +0)
        		{
        			Mix_VolumeMusic(0);
        		}
        		else
        			if(posbutton.x == posruler.x +10)
        		{
        			Mix_VolumeMusic(5);
        		}
        		else
        			if(posbutton.x == posruler.x +20)
        		{
        			Mix_VolumeMusic(10);
        		}
        		else
        			if(posbutton.x == posruler.x +30)
        		{
        			Mix_VolumeMusic(15);
        		}
        		else
        			if(posbutton.x == posruler.x +40)
        		{
        			Mix_VolumeMusic(20);
        		}
        		else
        			if(posbutton.x == posruler.x +50)
        		{
        			Mix_VolumeMusic(25);
        		}
        		else
        			if(posbutton.x == posruler.x +60)
        		{
        			Mix_VolumeMusic(30);
        		}
        		else
        			if(posbutton.x == posruler.x +70)
        		{
        			Mix_VolumeMusic(35);
        		}
        		else
        			if(posbutton.x == posruler.x +80)
        		{
        			Mix_VolumeMusic(40);
        		}
        		else
        			if(posbutton.x == posruler.x +90)
        		{
        			Mix_VolumeMusic(45);
        		}
        		else
        			if(posbutton.x == posruler.x +100)
        		{
        			Mix_VolumeMusic(50);
        		}
        		else
        			if(posbutton.x == posruler.x +120)
        		{
        			Mix_VolumeMusic(55);
        		}
        		else
        			if(posbutton.x == posruler.x +150)
        		{
        			Mix_VolumeMusic(60);
        		}
        		else
        			if(posbutton.x == posruler.x +200)
        		{
        			Mix_VolumeMusic(65);
        		}
        		else
        			if(posbutton.x == posruler.x +250)
        		{
        			Mix_VolumeMusic(70);
        		}
        		else
        			if(posbutton.x == posruler.x +300)
        		{
        			Mix_VolumeMusic(75);
        		}
        		else
        			if(posbutton.x == posruler.x +350)
        		{
        			Mix_VolumeMusic(80);
        		}
        		else
        			if(posbutton.x == posruler.x +400)
        		{
        			Mix_VolumeMusic(85);
        		}
        		else
        			if(posbutton.x == posruler.x +450)
        		{
        			Mix_VolumeMusic(90);
        		}
        		else
        			if(posbutton.x == posruler.x +500)
        		{
        			Mix_VolumeMusic(128);
        		}
        		posbutton.x = x;
        	}
        	
        }
        else
        if(showbutton1==1)
        {
        	if(( x > posruler1.x-1 ) && ( x < posruler1.x + posruler1.w -6) )
        	{
        		if(posbutton1.x == posruler1.x +0)
        		{
        			Mix_VolumeChunk(sound,0);
        			Mix_PlayChannel(-1,sound, 0);

        		}
        		else
        			if(posbutton1.x == posruler1.x +10)
        		{
        			Mix_VolumeChunk(sound,5);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +20)
        		{
        			Mix_VolumeChunk(sound,10);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +30)
        		{
        			Mix_VolumeChunk(sound,15);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +40)
        		{
        			Mix_VolumeChunk(sound,20);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +50)
        		{
        			Mix_VolumeChunk(sound,25);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +60)
        		{
        			Mix_VolumeChunk(sound,30);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +70)
        		{
        			Mix_VolumeChunk(sound,35);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +80)
        		{
        			Mix_VolumeChunk(sound,40);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +90)
        		{
        			Mix_VolumeChunk(sound,45);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +100)
        		{
        			Mix_VolumeChunk(sound,50);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +110)
        		{
        			Mix_VolumeChunk(sound,55);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +120)
        		{
        			Mix_VolumeChunk(sound,60);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +150)
        		{
        			Mix_VolumeChunk(sound,65);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +200)
        		{
        			Mix_VolumeChunk(sound,70);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +250)
        		{
        			Mix_VolumeChunk(sound,75);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +300)
        		{
        			Mix_VolumeChunk(sound,80);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +350)
        		{
        			Mix_VolumeChunk(sound,85);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +400)
        		{
        			Mix_VolumeChunk(sound,90);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +450)
        		{
        			Mix_VolumeChunk(sound,128);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		posbutton1.x = x;
        	}
        }

        
		SDL_Flip(screen);

	}   

	SDL_FreeSurface(optemizedimage);
    SDL_FreeSurface(optemizedback);
    SDL_FreeSurface(optemizedimage2black);
    SDL_FreeSurface(optemizedstings);
    SDL_FreeSurface(optemizedstingsblack);
    SDL_FreeSurface(optemizedquit);
    SDL_FreeSurface(optemizedquit1black);
    SDL_FreeSurface(optemizedquit2black);
    Mix_CloseAudio();
    TTF_CloseFont( font );
    //Quit SDL_ttf
    TTF_Quit();
	SDL_Quit();
}
