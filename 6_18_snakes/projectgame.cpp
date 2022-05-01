#include <simplecpp>
#include <string>
int speed=1;
bool Lies_on_snake(double*a,double*b,int  x,int y,int no_circles)
{
	bool mano=false;

	for (int i=0; i<no_circles; i++) {
		if (sqrt(((x-a[i])*(x-a[i]))+((y-b[i])*(y-b[i])))<20) {
			mano=true;
			break;
		}
	}

	return mano;//we are returning the true when it is inside of the snake @@@@@@@@
}

class button
{
public:

	double width;
	double height;
	double clx;
	double cly;
	button(const char *tptr,double w,double h,double x,double y,const char *colour) {
		width=w;
		height=h;
		clx=x;
		cly=y;
		Rectangle r(clx,cly,width,height);
		r.setColor(COLOR(colour));
		r.setFill();
		r.imprint();
		Text t(x,y,tptr);
		t.imprint();
	}
	bool inside(double clickx,double clicky) {
		return ((abs(clx-clickx)<=width/2)&&(abs(cly-clicky)<=height/2));
	}
};


struct rectangle {

	double cx,cy,height,width;
	Rectangle r;

	rectangle(double x, double y,double h,double w) {
		cx=x;
		cy=y;
		height =h;
		width =w;
		r.reset(x,y,h,w);
	}
	rectangle() {}
	void setColor(int x,int y,int z) {
		r.setColor(COLOR(x,y,z));
		r.setFill();
		r.imprint();
	}
	void setColor() {};
	bool verify(int x,int y) {
		if ((abs(x-cx)<=height/2)&&(abs(y-cy)<=width/2))return true;
		else return false;
	}
};
void level_game();
void mainpage();
void how_to_play()
{
	initCanvas("HOW TO PLAY",1200,800);
	button b1("INSTRUCTIONS",1000,40,600,100,"pink");
	button b2("1. The command 'f' is used to move the snake in rightward direction",1000,40,600,300,"green");
	button b3("2. The command 'd' is used to move the snake in leftward direction",1000,40,600,350,"pink");
	button b4("3. The command 'r' is used to move the snake in upward direction",1000,40,600,400,"orange");
	button b5("4. The command 'c' is used to move the snake in downward direction",1000,40,600,450,"cyan");
	button b6("5.The snake can not go in backward direction ",1000,40,600,500,"voilet");
	button b7("6.If snakes strikes any wall or its own body it will be killed",1000,40,600,550,"purple");
	button b8("Main Menu",200,40,600,740,"emerald");

	while (true) {
		int next=getClick();

		if (b8.inside(next/65536,next%65536)) {
			closeCanvas();
			mainpage();
			break;
		}
	}
}
void speed_of_game()
{
	initCanvas("DETERMINE SPEED",1200,800);
	button b1("select the level(speed) u want",1200,40,600,100,"coral");
	button b2("level 1",100,40,600,300,"green");
	button b3("level 2",100,40,600,350,"pink");
	button b4("level 3",100,40,600,400,"orange");
	button b5("level 4",100,40,600,450,"cyan");
	button b6("level 5",100,40,600,500,"voilet");
	button b7("level 6",100,40,600,550,"purple");
	button b8(" MAIN MENU",200,40,600,740,"saffron");

	while (true) {
		int next=getClick();

		if (b2.inside(next/65536,next%65536)) {
			closeCanvas();
			speed=1;
			mainpage();
			break;
		}

		if (b3.inside(next/65536,next%65536)) {
			closeCanvas();
			speed=2;
			mainpage();
			break;
		}

		if (b4.inside(next/65536,next%65536)) {
			closeCanvas();
			speed=3;
			mainpage();
			break;
		}

		if (b5.inside(next/65536,next%65536)) {
			closeCanvas();
			speed=4;
			mainpage();
			break;
		}

		if (b6.inside(next/65536,next%65536)) {
			closeCanvas();
			speed=5;
			mainpage();
			break;
		}

		if (b7.inside(next/65536,next%65536)) {
			closeCanvas();
			speed=6;
			mainpage();
			break;
		}

		if (b8.inside(next/65536,next%65536)) {
			closeCanvas();
			mainpage();
			break;
		}
	}
}
void about_the_game()
{
	initCanvas("About the Game",1200,800);
	button b1("ABOUT THE GAME",1200,40,600,100,"coral");
	button b2("Snake is a video game that originated during the late 1970s in arcades and has maintained popularity",1200,40,600,300,"green");
	button b3("since then, becoming somethingof a classic. After it became the standard pre-loaded game on",1200,40,600,340,"pink");
	button b4("Nokia phones in 1998, Snake found a massive audience.The Snake variety of games variety of games ",1200,40,600,380,"orange");
	button b5("dates back to the arcade game Blockade,[1][2] developed and published by  Gremlin in 1976.In 1978,",1200,40,600,420,"cyan");
	button b6("Atari, Inc. released, as an unofficial port, an early home console  version of the Blockade concept,",1200,40,600,460,"voilet");
	button b7("titled Surround. Surround was one of the nine Atari 2600 (VCS) launch titles,and s",1200,40,600,500,"purple");
	button b8("under the name Chase. That same year,a similar game was ",1200,40,600,540,"emerald");
	button b9(" was also sold by Sears launched for the Bally Astrocade as Checkmate.",1200,40,600,580,"grey");
	button b11("to know more visit 'http://en.wikipedia.org/wiki/Snake_(video_game)'",1200,40,600,620,"salmon");
	button b10(" MAIN MENU",200,40,600,740,"saffron");

	while (true) {
		int next=getClick();

		if (b10.inside(next/65536,next%65536)) {
			closeCanvas();
			mainpage();
			break;
		}
	}
}
void about_us()
{
	initCanvas("about us",1200,800);
	button b1("ABOUT US",1200,40,600,100,"coral");
	button b2("we are CS junta of roll numbers",1200,40,600,300,"green");
	button b3("120050068, 120050054, 120050044, 120050045....",1200,40,600,340,"pink");
	button b4("we are trying to make a snake game",1200,40,600,380,"orange");
	button b5("but working hard because of lack of time...",1200,40,600,420,"cyan");
	button b6("and we have made as much improvements as we can..",1200,40,600,460,"voilet");
	button b7("we could have made much better...",1200,40,600,500,"purple");
	button b10(" MAIN MENU",200,40,600,740,"saffron");

	while (true) {
		int next=getClick();

		if (b10.inside(next/65536,next%65536)) {
			closeCanvas();
			mainpage();
			break;
		}
	}
}




void level_of_the_game(int stage)
{
	double ro=10;
	int score=0;
	int p1,q1;
	initCanvas("level ",800,900);
	Circle pointer;
	int  xpointer,ypointer;
	int initialx=randuv(0,800)/20;
	int initialy=randuv(0,800)/20;
	xpointer=initialx*20+10;
	ypointer=initialy*20;
	Rectangle re(400,815,800,10);
	re.setFill();
	re.imprint();
	Text score_text(100,850,"SCORE:");
	score_text.imprint();
	Text score1(200,850,score);
	int xxx=0;
	double x[100],y[100];
	Circle  c[100];
	int r=70;
	int no_of_circles=8;

	for (int i=0; i<8; i++) {
		x[i]=400+r;
		y[i]=400;
		r=r-20;
	}

	for (int i=0; i<8; i++) {
		c[i].reset(x[i],y[i],10);
	}

	wait(0.5);

	for (int i=1; i<8; i++) {
		c[i].setColor(COLOR("green"));
		c[i].setFill();
	}

	char command[2];
	command[0]='f';
	c[0].setColor(COLOR("red"));
	c[0].setFill();
	pointer.reset(xpointer,ypointer,ro);
	bool touch=false;
	int xx=1;

	while (true) {
		pointer.reset(xpointer,ypointer,ro);
		pointer.setColor(COLOR(xx%255,xx%255,xx%255));
		pointer.setFill(1);
		xx++;
		XEvent event;

		if (sqrt((((x[0]-xpointer)*(x[0]-xpointer))+((y[0]-ypointer)*(y[0]-ypointer)))<2*ro)) {
			score+=10;

			while (true) {
				double xoo,yoo;

				if (stage ==1) {
					xoo=randuv(0,800);
					yoo=randuv(0,800);
				}

				if (stage==2||stage==3) {
					xoo=randuv(20,760);
					yoo=randuv(30,770);
				}

				int p=xoo/20;
				int q=yoo/20;
				p1=p*20+10;
				q1=q*20;
				if (Lies_on_snake(x,y,p1,q1,no_of_circles)) {} else {
					xpointer=p1;
					ypointer=q1;
					break;
				}
			}

			pointer.reset(xpointer,ypointer,ro);
			c[no_of_circles].reset(x[no_of_circles-1],y[no_of_circles-1],ro);
			c[no_of_circles].setColor(COLOR("green"));
			c[no_of_circles].setFill(1);
			no_of_circles++;
			score1.reset(200,850,score);
		} else if (checkEvent(&event)) {
			command[1]=charFromEvent(&event);

			if ((command[0]=='f'||command[0]=='d')&&command[1]=='r') {
				for (int j=no_of_circles-1; j>0; j--) {
					x[j]=x[j-1];
					y[j]=y[j-1];
					c[j].reset(x[j],y[j],ro);
				}

				command[0]='r';
				y[0]=y[0]-2*ro;
				c[0].reset(x[0],y[0],ro);
			} else if ((command[0]=='f'||command[0]=='d')&&command[1]=='c') {
				for (int j=no_of_circles-1; j>0; j--) {
					x[j]=x[j-1];
					y[j]=y[j-1];
					c[j].reset(x[j],y[j],ro);
				}

				command[0]='c';
				y[0]=y[0]+2*ro;
				c[0].reset(x[0],y[0],ro);
			} else if ((command[0]=='r'||command[0]=='c')&&command[1]=='f') {
				command[0]='f';

				for (int j=no_of_circles-1; j>0; j--) {
					x[j]=x[j-1];
					y[j]=y[j-1];
					c[j].reset(x[j],y[j],ro);
				}

				x[0]=x[0]+2*ro;
				c[0].reset(x[0],y[0],ro);
			} else if ((command[0]=='r'||command[0]=='c')&&command[1]=='d') {
				command[0]='d';

				for (int j=no_of_circles-1; j>0; j--) {
					x[j]=x[j-1];
					y[j]=y[j-1];
					c[j].reset(x[j],y[j],ro);
				}

				x[0]=x[0]-2*ro;
				c[0].reset(x[0],y[0],ro);
			}
		} else {
			if (stage==3) {
				if ((x[0]>=100&&x[0]<=700)&&(y[0]==20||y[0]==780)) {
					touch=true;
				}

				if ((y[0]<=680&&y[0]>=120)&&(x[0]==30||x[0]==770)) {
					touch=true;
				}

				if (xxx==0) {
					button bb1(" ",20,600,10,400,"black");
					button bb2(" ",20,600,790,400,"black");
					button bb3(" ",560,30,400,15,"black");
					button bb4(" ",560,30,400,785,"black");
				}

				xxx++;
			}

			if (stage==1||stage==3) {
				double xo,yo;

				if ((x[0]-x[1]==20||x[0]-x[1]==-780)&&((x[0]>0))&&(x[0]<800)) {
					xo=x[0]+2*ro;
					yo=y[0];
				} else if ((x[0]-x[1]==-20||x[0]-x[1]==780)&&((x[0]<800)&&(x[0]>0))) {
					xo=x[0]-2*ro;
					yo=y[0];
				} else if ((x[0]-x[1]>0)&&x[0]>=800) {
					xo=x[0]-800+2*ro;
					yo=y[0];
				} else if ((x[0]-x[1]<0)&&x[0]<=0) {
					xo=x[0]+800-2*ro;
					yo=y[0];
				}

				if ((y[0]-y[1]==20||y[0]-y[1]==-780)&&((y[0]>0))&&(y[0]<800)) {
					yo=y[0]+2*ro;
					xo=x[0];
				} else if ((y[0]-y[1]==-20||y[0]-y[1]==780)&&((y[0]<800)&&(y[0]>0))) {
					yo=y[0]-2*ro;
					xo=x[0];
				} else if ((y[0]-y[1]>0)&&y[0]>=800) {
					yo=y[0]-800+2*ro;
					xo=x[0];
				} else if ((y[0]-y[1]<0)&&y[0]<=0) {
					yo=y[0]+800-2*ro;
					xo=x[0];
				}

				for (int j=no_of_circles-1; j>0; j--) {
					x[j]=x[j-1];
					y[j]=y[j-1];
					c[j].reset(x[j],y[j],ro);
				}

				x[0]=xo;
				y[0]=yo;

				if (x[0]==810)x[0]=10;

				if (x[0]==-10)x[0]=790;

				c[0].reset(x[0],y[0],ro);
			}

			if (stage==2) {
				if (xxx==0) {
					button bb1(" ",20,800,10,400,"black");
					button bb2(" ",20,800,790,400,"black");
					button bb3(" ",760,30,400,15,"black");
					button bb4(" ",760,30,400,785,"black");
				}

				xxx++;
				double xo,yo;

				if (x[0]-x[1]>0) {
					xo=x[0]+2*ro;
					yo=y[0];
				} else if (x[0]-x[1]<0) {
					xo=x[0]-2*ro;
					yo=y[0];
				}

				if (y[0]-y[1]>0) {
					yo=y[0]+2*ro;
					xo=x[0];
				} else if (y[0]-y[1]<0) {
					yo=y[0]-2*ro;
					xo=x[0];
				}

				for (int j=no_of_circles-1; j>0; j--) {
					x[j]=x[j-1];
					y[j]=y[j-1];
					c[j].reset(x[j],y[j],ro);
				}

				x[0]=xo;
				y[0]=yo;
				c[0].reset(x[0],y[0],ro);

				if (x[0]==10||x[0]==790) {
					touch=true;
				}

				if (y[0]==20||y[0]==780) {
					touch=true;
				}
			}
		}

		for (int s=1; s<no_of_circles; s++) {
			if (x[0]==x[s]&&y[0]==y[s]) {
				touch=true;
			}
		}

		wait(.01*(7-speed)*(7-speed));

		if (touch) break;
	}

	Rectangle plain(400,400,400,400);
	plain.setColor(COLOR("white"));
	plain.setFill();
	Text game_over(400,400,"OOOOps !!!!!!!!!!!!!!!!!!GAME OVER");
	game_over.imprint();
	Text score3(400,500,"Your score is ");
	Text score2(500,500,score);
	button b1("TRY AGAIN",150,40,700,40,"green");
	button b2("GO BACK ",150,40,700,450,"green");
	button b3("EXIT	",150,40,700,860,"green");

	while (true) {
		int next=getClick();

		if (b1.inside(next/65536,next%65536)) {
			closeCanvas();
			level_of_the_game(stage);
			break;
		}

		if (b2.inside(next/65536,next%65536)) {
			closeCanvas();
			level_game();
			break;
		}

		if (b3.inside(next/65536,next%65536)) {
			closeCanvas();
			break;
		}
	}
}

void mainpage()
{
	initCanvas("main page",500,500);
	int x=75,y=25;
	int j=1;

	for (int i=1; i<=9; i++) {
		rectangle r(x,y,50,50);

		if (j%2==1) {
			r.setColor(255,69,0);
		} else {
			r.setColor(160,32,240);
		}

		x=x+50;
		j++;
	}

	x=475;
	y=75;
	j=1;

	for (int i=1; i<=9; i++) {
		rectangle r(x,y,50,50);

		if (j%2==1) {
			r.setColor(202,255,112);
		} else {
			r.setColor(255,28,174);
		}

		y=y+50;
		j++;
	}

	x=425;
	y=475;
	j=1;

	for (int i=1; i<=9; i++) {
		rectangle r(x,y,50,50);

		if (j%2==1) {
			r.setColor(245,0,95);
		} else {
			r.setColor(20,200,50);
		}

		x=x-50;
		j++;
	}

	x=25;
	y=425;
	j=1;

	for (int i=1; i<=9; i++) {
		rectangle r(x,y,50,50);

		if (j%2==1) {
			r.setColor(124,252,0);
		} else {
			r.setColor(255,20,147);
		}

		y=y-50;
		j++;
	}

	Rectangle r(250,250,400,400);
	r.setColor(COLOR("skyblue"));
	r.setFill(1);
	r.imprint();
	r.reset(250,250,300,300);
	r.setColor(COLOR("burlywood"));
	r.imprint();
	rectangle p1(250,140,300,40);
	r.reset(250,140,300,40);
	r.setColor(COLOR(255,192,203));
	r.setFill();
	r.imprint();
	Text t(250,140,"Classical GAME");
	t.imprint();
	rectangle p2(250,190,300,40);
	r.reset(250,190,300,40);
	r.setColor(COLOR("pink"));
	r.setFill();
	r.imprint();
	t.reset(250,190,"level of the game");
	t.imprint();
	rectangle p3(250,240,300,40);
	r.reset(250,240,300,40);
	r.setColor(COLOR("pink"));
	r.setFill();
	r.imprint();
	t.reset(250,240,"How to PLAY the GAME");
	t.imprint();
	rectangle p4(250,290,300,40);
	r.reset(250,290,300,40);
	r.setColor(COLOR("pink"));
	r.setFill();
	r.imprint();
	t.reset(250,290,"About the GAME");
	t.imprint();
	rectangle p5(250,340,300,40);
	r.reset(250,340,300,40);
	r.setColor(COLOR("pink"));
	r.setFill();
	r.imprint();
	t.reset(250,340,"about us");
	t.imprint();
	t.reset(250,70,"ThE SnAkE ");
	t.imprint();
	rectangle p6(400,430,100,40);
	t.reset(400,430,"Quit");
	t.imprint();
	r.reset(400,430,100,40);
	r.setColor(COLOR(41,82,123));
	r.setFill();
	r.imprint();

	while (true) {
		int next=getClick();

		if (p1.verify(next/65536,next%65536)) {
			closeCanvas();
			level_game();
			break;
		}

		if (p2.verify(next/65536,next%65536)) {
			closeCanvas();
			speed_of_game();
			break;
		}

		if (p3.verify(next/65536,next%65536)) {
			closeCanvas();
			how_to_play();
			break;
		}

		if (p4.verify(next/65536,next%65536)) {
			closeCanvas();
			about_the_game();
			break;
		}

		if (p5.verify(next/65536,next%65536)) {
			closeCanvas();
			about_us();
			break;
		}

		if (p6.verify(next/65536,next%65536)) {
			closeCanvas();
			break;
		}
	}
}
void level_game()
{
	initCanvas("levels",500,500);
	Rectangle r1(250,250,500,500);
	r1.setColor(COLOR("yellow"));
	r1.setFill(1);
	r1.imprint();
	r1.hide();
	double hexagon[8][2]={{0,-50},{20,-30},{20,0},{20,20},{0,30},{-20,20},{-20,0},{-20,-30}};//,{0,50}};
	double octagon[8][2]={{0,-50},{20,-30},{40,-50},{40,20},{0,30},{-40,20},{-40,-50},{-20,-30}};//,{0,50}};
	float diff[8][2];

	for (int s=0; s<8; s++) {
		diff[s][0]=(octagon[s][0]-hexagon[s][0])/100.0;
		diff[s][1]=(octagon[s][1]-hexagon[s][1])/100.0;
	}

	Polygon hex(80,250,hexagon,8);
	hex.setColor(COLOR("purple"));
	hex.setFill(2);
	hex.imprint();
	//hex.hide();
	button rr("",5,50,80,305,"green");

	for (int s=0; s<100; s++) {
		hex.reset(80,250,hexagon,8);

		for (int v=0; v<8; v++) {
			hexagon[v][0]+=diff[v][0];
			hexagon[v][1]+=diff[v][1];
			hex.setColor(COLOR("red"));
			hex.setFill(4);
			hex.imprint();
			hex.hide();
		}

		//wait(.0000005);
	}

	// flw.reset(100,250,flower,8);
	double heptagon[7][2]={{0,-60},{50,0},{10,50},{20,100},{0,50},{40,0},{0,-50}};//,{-20,-30}};//,{0,50}};
	Polygon snk(420,250,heptagon,7);
	snk.setColor(COLOR("purple"));
	snk.setFill(3);
	snk.imprint();
	snk.hide();
	Circle c(-7,-57,7);
	button b1("Level 1",100,40,250,100,"green");
	button b2("Level 2",100,40,250,175,"green");
	button b3("level 3",100,40,250,250,"green");
	button b7("MAIN MENU",160,40,250,470,"cyan");

	while (true) {
		int next=getClick();

		if (b1.inside(next/65536,next%65536)) {
			closeCanvas();
			level_of_the_game(1);
			break;
		}

		if (b2.inside(next/65536,next%65536)) {
			closeCanvas();
			level_of_the_game(2);
			break;
		}

		if (b3.inside(next/65536,next%65536)) {
			closeCanvas();
			level_of_the_game(3);
			break;
		}

		if (b7.inside(next/65536,next%65536)) {
			closeCanvas();
			mainpage();
			break;
		}
	}
}
int main()
{
	char a[100];
	cout<<"hello welcome to ur snake game\n";
	cout<<"Ur name:";
	cin >>a;
	mainpage();
}
