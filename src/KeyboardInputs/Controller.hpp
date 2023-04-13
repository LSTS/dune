#ifndef CONTROLLER_HPP_INCLUDED_
#define CONTROLLER_HPP_INCLUDED_

#include <iostream>
#include <SDL2/SDL.h>
#include <math.h>
#include <time.h>

#define TESTE 1

#define PROG_CYCLE 100
#define BUF_LEN 512

typedef struct
{
	int x = 0;
	int y = 0;
	int prev_x;
	int prev_y;

} GC_Joystick;

typedef struct
{
	int pos = 0;

} GC_Trigger;

typedef struct
{
	GC_Trigger l2, r2;
	GC_Joystick lj, rj;
	bool l1 = false, r1 = false;
	bool jl = false, jr = false;
	bool pad_button[4] = {false};
	bool action_button[4] = {false};
	bool start = false, stop = false;

} My_controller;

void GC_Button_Pressed(SDL_ControllerButtonEvent *event, My_controller *ctr)
{
	switch (event->button)
	{
	case SDL_CONTROLLER_BUTTON_A:

		ctr->action_button[0] = true;
		break;

	case SDL_CONTROLLER_BUTTON_B:
		ctr->action_button[1] = true;
		break;

	case SDL_CONTROLLER_BUTTON_X:
		ctr->action_button[2] = true;
		break;

	case SDL_CONTROLLER_BUTTON_Y:
		ctr->action_button[3] = true;
		break;

	case SDL_CONTROLLER_BUTTON_BACK:
		ctr->stop = true;
		break;

	case SDL_CONTROLLER_BUTTON_START:
		ctr->start = true;
		break;

	case SDL_CONTROLLER_BUTTON_LEFTSTICK:
		ctr->jl = true;
		break;

	case SDL_CONTROLLER_BUTTON_RIGHTSTICK:
		ctr->jr = true;
		break;

	case SDL_CONTROLLER_BUTTON_LEFTSHOULDER:
		ctr->l1 = true;
		break;

	case SDL_CONTROLLER_BUTTON_RIGHTSHOULDER:
		ctr->r1 = true;
		break;

	case SDL_CONTROLLER_BUTTON_DPAD_UP:
		ctr->pad_button[0] = true;
		break;

	case SDL_CONTROLLER_BUTTON_DPAD_DOWN:
		ctr->pad_button[1] = true;
		break;

	case SDL_CONTROLLER_BUTTON_DPAD_LEFT:
		ctr->pad_button[2] = true;
		break;

	case SDL_CONTROLLER_BUTTON_DPAD_RIGHT:
		ctr->pad_button[3] = true;
		break;

	default:
		break;
	}
	return;
}

void GC_Button_Released(SDL_ControllerButtonEvent *event, My_controller *ctr)
{
	switch (event->button)
	{
	case SDL_CONTROLLER_BUTTON_A:
		ctr->action_button[0] = false;
		break;

	case SDL_CONTROLLER_BUTTON_B:
		ctr->action_button[1] = false;
		break;

	case SDL_CONTROLLER_BUTTON_X:
		ctr->action_button[2] = false;
		break;

	case SDL_CONTROLLER_BUTTON_Y:
		ctr->action_button[3] = false;
		break;
	case SDL_CONTROLLER_BUTTON_BACK:
		ctr->stop = false;
		break;

	case SDL_CONTROLLER_BUTTON_START:
		ctr->start = false;
		break;

	case SDL_CONTROLLER_BUTTON_LEFTSTICK:
		ctr->jl = false;
		break;

	case SDL_CONTROLLER_BUTTON_RIGHTSTICK:
		ctr->jr = false;
		break;

	case SDL_CONTROLLER_BUTTON_LEFTSHOULDER:
		ctr->l1 = false;
		break;

	case SDL_CONTROLLER_BUTTON_RIGHTSHOULDER:
		ctr->r1 = false;
		break;

	case SDL_CONTROLLER_BUTTON_DPAD_UP:
		ctr->pad_button[0] = false;
		break;

	case SDL_CONTROLLER_BUTTON_DPAD_DOWN:
		ctr->pad_button[1] = false;
		break;

	case SDL_CONTROLLER_BUTTON_DPAD_LEFT:
		ctr->pad_button[2] = false;
		break;

	case SDL_CONTROLLER_BUTTON_DPAD_RIGHT:
		ctr->pad_button[3] = false;
		break;

	default:
		break;
	}

	return;
}

void GC_JoyMoved(SDL_ControllerAxisEvent *event, My_controller *ctr)
{

	/*	if( abs(event->value) < DEADZONE)
			return;*/
	switch (event->axis)
	{
	case SDL_CONTROLLER_AXIS_LEFTX:
		ctr->lj.x = event->value;
		break;

	case SDL_CONTROLLER_AXIS_LEFTY:
		ctr->lj.y = event->value;
		break;

	case SDL_CONTROLLER_AXIS_RIGHTX:
		ctr->rj.x = event->value;
		break;

	case SDL_CONTROLLER_AXIS_RIGHTY:
		ctr->rj.y = event->value;
		break;

	case SDL_CONTROLLER_AXIS_TRIGGERLEFT:
		ctr->l2.pos = event->value;
		break;

	case SDL_CONTROLLER_AXIS_TRIGGERRIGHT:
		ctr->r2.pos = event->value;
		break;

	default:
		break;
	}
}

static void Recv_inputs(SDL_Event *event, My_controller *ctr)
{
	while (SDL_PollEvent(event))
	{
		switch (event->type)
		{
		case SDL_QUIT:
			exit(1);

		case SDL_KEYDOWN: // not working
			printf("Key pressed\n");
			break;

		case SDL_CONTROLLERBUTTONDOWN:
			GC_Button_Pressed(&event->cbutton, ctr);
			break;

		case SDL_CONTROLLERBUTTONUP:
			GC_Button_Released(&event->cbutton, ctr);
			break;

		case SDL_CONTROLLERAXISMOTION:
			GC_JoyMoved(&event->caxis, ctr);
			break;

		default:
			break;
		}
	}
}

double get_radius(int x, int y)
{
	double r = sqrt(pow(x, 2) + pow(y, 2));
	return r;
}

double get_angle(int x, int y)
{
	double r = get_radius(x, y);
	if (r < 15000)
		return -190;
	if (y > 0)
		return -180 / M_PI * acos((double)x / get_radius(x, y));
	else
		return 180 / M_PI * acos((double)x / get_radius(x, y));
}

void report(My_controller xbox)
{
	system("cls");
	std::cout << "L" << get_angle(xbox.lj.x, xbox.lj.y) << std::endl;
	std::cout << "R" << get_angle(xbox.rj.x, xbox.rj.y) << std::endl;
	std::cout << "P0" << xbox.pad_button[0] << std::endl;
	std::cout << "P1" << xbox.pad_button[1] << std::endl;
	std::cout << "P2" << xbox.pad_button[2] << std::endl;
	std::cout << "P3" << xbox.pad_button[3] << std::endl;
	std::cout << "A0" << xbox.action_button[0] << std::endl;
	std::cout << "A1" << xbox.action_button[1] << std::endl;
	std::cout << "A2" << xbox.action_button[2] << std::endl;
	std::cout << "A3" << xbox.action_button[3] << std::endl;
	std::cout << "L1" << xbox.l1 << std::endl;
	std::cout << "R1" << xbox.r1 << std::endl;
	std::cout << "R2" << xbox.l2.pos << std::endl;
	std::cout << "L2" << xbox.r2.pos << std::endl;
	std::cout << "JL" << xbox.jl << std::endl;
	std::cout << "JR" << xbox.jr << std::endl;
	std::cout << "Start" << xbox.start << std::endl;
	std::cout << "Stop" << xbox.stop << std::endl;
}

int controllerMain()
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_GameController *controller = SDL_GameControllerOpen(0);
	if (controller == NULL)
	{
		printf("Connect controller!\n");
		return -1;
	}

	printf("Controller name: %s\n", SDL_GameControllerNameForIndex(0));
	SDL_Event event;
	bool loop = true;

	My_controller xbox;
	clock_t start, diff;
	int ms = 0;
	while (loop)
	{
		start = clock();
		Recv_inputs(&event, &xbox);

		// report(xbox);

		char buf[BUF_LEN] = {0};

		if (xbox.action_button[0])
			strcat(buf, "A0,");
		if (xbox.action_button[1])
			strcat(buf, "A1,");
		if (xbox.action_button[2])
			strcat(buf, "A2,");
		if (xbox.action_button[3])
			strcat(buf, "A3,");
		if (xbox.pad_button[0])
			strcat(buf, "P0,");
		if (xbox.pad_button[1])
			strcat(buf, "P1,");
		if (xbox.pad_button[2])
			strcat(buf, "P2,");
		if (xbox.pad_button[3])
			strcat(buf, "P3,");
		if (xbox.jl)
			strcat(buf, "JL,");
		if (xbox.jr)
			strcat(buf, "JR,");
		if (xbox.l1)
			strcat(buf, "L1,");
		if (xbox.r1)
			strcat(buf, "R1,");
		if (xbox.l2.pos > 0)
			strcat(buf, "L2,");
		if (xbox.r2.pos > 0)
			strcat(buf, "R2,");
		if (xbox.start)
			strcat(buf, "ST,");
		if (xbox.stop)
			strcat(buf, "SE,");
		float ang = get_angle(xbox.lj.x, xbox.lj.y);
		if (ang > -189)
		{
			char aux[256];
			sprintf(aux, "LJ%f,", ang);
			strcat(buf, aux);
		}
		ang = get_angle(xbox.rj.x, xbox.rj.y);
		if (ang > -189)
		{
			char aux[256];
			sprintf(aux, "RJ%f,", ang);
			strcat(buf, aux);
		}

		buf[strlen(buf)] = '\0';

		printf("Mensage to send: %s\n", buf);

		ms = (clock() - start) * 1000 / CLOCKS_PER_SEC;
		if (ms < PROG_CYCLE)
			SDL_Delay(PROG_CYCLE - ms);

		*buf = {};
	}

	return 0;
}

#endif