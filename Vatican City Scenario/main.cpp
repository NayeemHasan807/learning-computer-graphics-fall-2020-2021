#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>

void init() {

   gluOrtho2D(-5,5,-5,5);

}

void vc_sun() //f_v_1
{
    glLineWidth(1.5);
	glBegin(GL_POLYGON);// Draw a 1x1 Square centered at origin
	glColor3ub(0,0,0);
	for(int i=0;i<100;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/100;
            float r=0.45;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();

    glLineWidth(1.5);
	glBegin(GL_POLYGON);// Draw a 1x1 Square centered at origin
	glColor3ub(255, 0, 0);
	for(int i=0;i<100;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/100;
            float r=0.40;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();
}

void vatican_city_background() //f_v_2
{
    glBegin(GL_POLYGON); //ground
    glColor3ub(255, 163, 26); //Rgb combination green
    glVertex2f(-5.0f, -1.0f);
    glVertex2f(5.0f, -1.0f);
    glVertex2f(5.0f, -5.0f);
    glVertex2f(-5.0f, -5.0f);
    glEnd();
    glBegin(GL_POLYGON); //sky
    glColor3ub(77, 255, 255); //Rgb combination green
    glVertex2f(-5.0f, -1.0f);
    glVertex2f(5.0f, -1.0f);
    glVertex2f(5.0f, 5.0f);
    glVertex2f(-5.0f, 5.0f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(-5.0f, -1.0f);
    glVertex2f(5.0f, -1.0f);
    glEnd();
    glPushMatrix();
    glTranslatef(-3.6f,4.0f,0.0f);
    vc_sun();
    glPopMatrix();

}

void vc_lower_stage() //f_v_3
{
    glBegin(GL_POLYGON); //
    glColor3ub(128, 43, 0); //Rgb combination
    glVertex2f(-3.0f, -3.0f);
    glVertex2f(3.0f, -3.0f);
    glVertex2f(3.0f, -3.2f);
    glVertex2f(-3.0f, -3.2f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(-3.0f, -3.0f);
    glVertex2f(3.0f, -3.0f);
    glVertex2f(3.0f, -3.0f);
    glVertex2f(3.0f, -3.2f);
    glVertex2f(3.0f, -3.2f);
    glVertex2f(-3.0f, -3.2f);
    glVertex2f(-3.0f, -3.2f);
    glVertex2f(-3.0f, -3.0f);
    glEnd();
}

void vc_first_flore_door() //f_v_4
{
    glBegin(GL_POLYGON); //door pillar
    glColor3ub(121, 255, 77); //Rgb combination
    glVertex2f(-1.0f, -3.0f);
    glVertex2f(1.0f, -3.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON); //door
    glColor3ub(0,0,0); //Rgb combination
    glVertex2f(-0.3f, -3.0f);
    glVertex2f(0.3f, -3.0f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(-0.3f, -0.5f);
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(-1.0f, -3.0f);
    glVertex2f(1.0f, -3.0f);
    glVertex2f(1.0f, -3.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-1.0f, -3.0f);
    glVertex2f(-0.3f, -3.0f);
    glVertex2f(0.3f, -3.0f);
    glVertex2f(0.3f, -3.0f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(-0.3f, -0.5f);
    glVertex2f(-0.3f, -0.5f);
    glVertex2f(-0.3f, -3.0f);
    glEnd();
}

void vc_first_floor() //f_v_5
{
    glBegin(GL_POLYGON); //first floor wall
    glColor3ub(255, 255, 128); //Rgb combination
    glVertex2f(-2.9f, -3.0f);
    glVertex2f(2.9f, -3.0f);
    glVertex2f(2.9f, 0.0f);
    glVertex2f(-2.9f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON); //Left pillar
    glColor3ub(121, 255, 77); //Rgb combination
    glVertex2f(-2.9f, -3.0f);
    glVertex2f(-2.2f, -3.0f);
    glVertex2f(-2.2f, 0.0f);
    glVertex2f(-2.9f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON); // right pillar
    glColor3ub(121, 255, 77); //Rgb combination
    glVertex2f(2.2f, -3.0f);
    glVertex2f(2.9f, -3.0f);
    glVertex2f(2.9f, 0.0f);
    glVertex2f(2.2f, 0.0f);
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(-2.9f, -3.0f);
    glVertex2f(2.9f, -3.0f);
    glVertex2f(2.9f, -3.0f);
    glVertex2f(2.9f, 0.0f);
    glVertex2f(2.9f, 0.0f);
    glVertex2f(-2.9f, 0.0f);
    glVertex2f(-2.9f, 0.0f);
    glVertex2f(-2.9f, -3.0f);
    glVertex2f(-2.9f, -3.0f);
    glVertex2f(-2.2f, -3.0f);
    glVertex2f(-2.2f, -3.0f);
    glVertex2f(-2.2f, 0.0f);
    glVertex2f(-2.2f, 0.0f);
    glVertex2f(-2.9f, 0.0f);
    glVertex2f(-2.9f, 0.0f);
    glVertex2f(-2.9f, -3.0f);
    glVertex2f(2.2f, -3.0f);
    glVertex2f(2.9f, -3.0f);
    glVertex2f(2.9f, -3.0f);
    glVertex2f(2.9f, 0.0f);
    glVertex2f(2.9f, 0.0f);
    glVertex2f(2.2f, 0.0f);
    glVertex2f(2.2f, 0.0f);
    glVertex2f(2.2f, -3.0f);
    glEnd();

    vc_first_flore_door();
}

void vc_second_floor_window() //f_v_6
{
    glBegin(GL_POLYGON); //door
    glColor3ub(0,0,0); //Rgb combination
    glVertex2f(-2.4f, 1.3f);
    glVertex2f(-2.2f, 1.3f);
    glVertex2f(-2.2f, 0.5f);
    glVertex2f(-2.4f, 0.5f);
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(-2.4f, 1.3f);
    glVertex2f(-2.2f, 1.3f);
    glVertex2f(-2.2f, 1.3f);
    glVertex2f(-2.2f, 0.5f);
    glVertex2f(-2.2f, 0.5f);
    glVertex2f(-2.4f, 0.5f);
    glVertex2f(-2.4f, 0.5f);
    glVertex2f(-2.4f, 1.3f);
    glEnd();
}

void vc_second_floor_design() //f_v_7
{
    glBegin(GL_TRIANGLES);
    glColor3ub(128, 43, 0); //Rgb combination
    glVertex2f(0.0f, 1.5f);
	glVertex2f(-1.2f, 0.0f);
	glVertex2f(1.2f, 0.0f);
	glEnd();
	glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(0.0f, 1.5f);
	glVertex2f(-1.2f, 0.0f);
	glVertex2f(-1.2f, 0.0f);
	glVertex2f(1.2f, 0.0f);
	glVertex2f(1.2f, 0.0f);
	glVertex2f(0.0f, 1.5f);
    glEnd();
}

void vc_second_floor() //f_v_8
{
    glBegin(GL_POLYGON); //second floor wall
    glColor3ub(255, 255, 128); //Rgb combination
    glVertex2f(-2.9f, 0.0f);
    glVertex2f(2.9f, 0.0f);
    glVertex2f(2.9f, 1.8f);
    glVertex2f(-2.9f, 1.8f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(-2.9f, 0.0f);
    glVertex2f(2.9f, 0.0f);
    glVertex2f(2.9f, 0.0f);
    glVertex2f(2.9f, 1.8f);
    glVertex2f(2.9f, 1.8f);
    glVertex2f(-2.9f, 1.8f);
    glVertex2f(-2.9f, 1.8f);
    glVertex2f(-2.9f, 0.0f);
    glEnd();
    vc_second_floor_design();
    vc_second_floor_window();
    glPushMatrix();
    glTranslatef(4.6f,0.0f,0.0f);
    vc_second_floor_window();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.4f,0.0f,0.0f);
    vc_second_floor_window();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(4.2f,0.0f,0.0f);
    vc_second_floor_window();
    glPopMatrix();
}

void vc_third_floor_window() //f_v_9
{
    glBegin(GL_POLYGON); //door
    glColor3ub(0,0,0); //Rgb combination
    glVertex2f(-2.0f, 2.2f);
    glVertex2f(-1.7f, 2.2f);
    glVertex2f(-1.7f, 2.6f);
    glVertex2f(-2.0f, 2.6f);
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(-2.0f, 2.2f);
    glVertex2f(-1.7f, 2.2f);
    glVertex2f(-1.7f, 2.2f);
    glVertex2f(-1.7f, 2.6f);
    glVertex2f(-1.7f, 2.6f);
    glVertex2f(-2.0f, 2.6f);
    glVertex2f(-2.0f, 2.6f);
    glVertex2f(-2.0f, 2.2f);
    glEnd();
}

void vc_third_floor() //f_v_10
{
    glBegin(GL_POLYGON); //third floor wall
    glColor3ub(121, 255, 77); //Rgb combination
    glVertex2f(-1.5f, 2.5f);
    glVertex2f(1.5f, 2.5f);
    glVertex2f(1.5f, 1.8f);
    glVertex2f(-1.5f, 1.8f);
    glEnd();
    glBegin(GL_POLYGON); //third floor right room
    glColor3ub(121, 255, 77); //Rgb combination
    glVertex2f(1.5f, 3.0f);
    glVertex2f(2.2f, 3.0f);
    glVertex2f(2.2f, 1.8f);
    glVertex2f(1.5f, 1.8f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(128, 43, 0); //Rgb combination
    glVertex2f(1.85f, 3.5f);
	glVertex2f(1.5f, 3.0f);
	glVertex2f(2.2f, 3.0f);
	glEnd();
    glBegin(GL_POLYGON); //third floor left room
    glColor3ub(121, 255, 77); //Rgb combination
    glVertex2f(-1.5f, 3.0f);
    glVertex2f(-2.2f, 3.0f);
    glVertex2f(-2.2f, 1.8f);
    glVertex2f(-1.5f, 1.8f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(128, 43, 0); //Rgb combination
    glVertex2f(-1.85f, 3.5f);
	glVertex2f(-1.5f, 3.0f);
	glVertex2f(-2.2f, 3.0f);
	glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(-1.5f, 2.5f);
    glVertex2f(1.5f, 2.5f);
    glVertex2f(1.5f, 2.5f);
    glVertex2f(1.5f, 1.8f);
    glVertex2f(1.5f, 1.8f);
    glVertex2f(-1.5f, 1.8f);
    glVertex2f(-1.5f, 1.8f);
    glVertex2f(-1.5f, 2.5f);
    glVertex2f(1.5f, 3.0f);
    glVertex2f(2.2f, 3.0f);
    glVertex2f(2.2f, 3.0f);
    glVertex2f(2.2f, 1.8f);
    glVertex2f(2.2f, 1.8f);
    glVertex2f(1.5f, 1.8f);
    glVertex2f(1.5f, 1.8f);
    glVertex2f(1.5f, 3.0f);
    glVertex2f(-1.5f, 3.0f);
    glVertex2f(-2.2f, 3.0f);
    glVertex2f(-2.2f, 3.0f);
    glVertex2f(-2.2f, 1.8f);
    glVertex2f(-2.2f, 1.8f);
    glVertex2f(-1.5f, 1.8f);
    glVertex2f(-1.5f, 1.8f);
    glVertex2f(-1.5f, 3.0f);
    glVertex2f(1.85f, 3.5f);
	glVertex2f(1.5f, 3.0f);
	glVertex2f(1.5f, 3.0f);
	glVertex2f(2.2f, 3.0f);
	glVertex2f(2.2f, 3.0f);
	glVertex2f(1.85f, 3.5f);
    glVertex2f(-1.85f, 3.5f);
	glVertex2f(-1.5f, 3.0f);
	glVertex2f(-1.5f, 3.0f);
	glVertex2f(-2.2f, 3.0f);
	glVertex2f(-2.2f, 3.0f);
	glVertex2f(-1.85f, 3.5f);
    glEnd();

    vc_third_floor_window();
    glPushMatrix();
    glTranslatef(3.7f,0.0f,0.0f);
    vc_third_floor_window();
    glPopMatrix();
}

void vc_top_floor_window() //f_v_11
{
    glBegin(GL_POLYGON); //top floor window
    glColor3ub(0,0,0); //Rgb combination
    glVertex2f(-0.8f, 3.2f);
    glVertex2f(-0.6f, 3.2f);
    glVertex2f(-0.6f, 2.8f);
    glVertex2f(-0.8f, 2.8f);
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(-0.8f, 3.2f);
    glVertex2f(-0.6f, 3.2f);
    glVertex2f(-0.6f, 3.2f);
    glVertex2f(-0.6f, 2.8f);
    glVertex2f(-0.6f, 2.8f);
    glVertex2f(-0.8f, 2.8f);
    glVertex2f(-0.8f, 2.8f);
    glVertex2f(-0.8f, 3.2f);
    glEnd();

}

void vc_top_floor() //f_v_12
{
    glBegin(GL_POLYGON); //top floor wall
    glColor3ub(255, 255, 128); //Rgb combination
    glVertex2f(-1.0f, 2.5f);
    glVertex2f(1.0f, 2.5f);
    glVertex2f(1.0f, 3.5f);
    glVertex2f(-1.0f, 3.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(128, 43, 0); //Rgb combination
    glVertex2f(0.0f, 4.2f);
	glVertex2f(1.1f, 3.5f);
	glVertex2f(-1.1f, 3.5f);
	glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(-1.0f, 2.5f);
    glVertex2f(1.0f, 2.5f);
    glVertex2f(1.0f, 2.5f);
    glVertex2f(1.0f, 3.5f);
    glVertex2f(1.0f, 3.5f);
    glVertex2f(-1.0f, 3.5f);
    glVertex2f(-1.0f, 3.5f);
    glVertex2f(-1.0f, 2.5f);
    glVertex2f(0.0f, 4.2f);
	glVertex2f(1.1f, 3.5f);
	glVertex2f(1.1f, 3.5f);
	glVertex2f(-1.1f, 3.5f);
	glVertex2f(-1.1f, 3.5f);
    glVertex2f(0.0f, 4.2f);
    glEnd();
    glLineWidth(4.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(0.0f, 4.2f);
    glVertex2f(0.0f, 4.7f);
    glVertex2f(0.1f, 4.5f);
    glVertex2f(-0.1f, 4.5f);
    glEnd();

    vc_top_floor_window();
    glPushMatrix();
    glTranslatef(0.7f,0.0f,0.0f);
    vc_top_floor_window();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.4f,0.0f,0.0f);
    vc_top_floor_window();
    glPopMatrix();
}


void vatican_city() //f_v_13
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    vc_lower_stage();
    glPopMatrix();
    glPushMatrix();
    vc_first_floor();
    glPopMatrix();
    glPushMatrix();
    vc_second_floor();
    glPopMatrix();
    glPushMatrix();
    vc_third_floor();
    glPopMatrix();
    glPushMatrix();
    vc_top_floor();
    glPopMatrix();
}

void display_v()
{

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    vatican_city_background();
    glPopMatrix();
    glPushMatrix();
    vatican_city();
    glPopMatrix();
    glutSwapBuffers();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                    // Initialize GLUT
	glutInitWindowSize(480, 300);           // Set the window's initial width & height
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Vatican City");       // Create a window with the given title
	glutDisplayFunc(display_v);               // Register display callback handler for window re-paint
    init();                         // Enter the event-processing loop
	glutMainLoop();
	return 0;
}
