#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
#include <iostream>
#include <GL/gl.h>
float _anglewheel = 0.0f;

void wheelUpdate(int value) //u_wh_1
{
    _anglewheel+=2.0f;
    if(_anglewheel > 360.0)
    {
        _anglewheel-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed
	glutTimerFunc(20, wheelUpdate, 0); //Notify GLUT to call update again in 25 milliseconds
}


void init() {

   gluOrtho2D(-5,5,-5,5);

}

void wheel_center() //f_wh_1
{

    glBegin(GL_POLYGON); //wheel house window
    glColor3d(0.98,0.625,0.12);   //pumpkin orange
    glVertex2f(0.0f, 0.1f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(0.0f, -0.1f);
    glVertex2f(0.1f, 0.0f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0,0,0);   //black
    glVertex2f(0.0f, 0.1f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(0.0f, -0.1f);
    glVertex2f(0.0f, -0.1f);
    glVertex2f(0.1f, 0.0f);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(0.1f, 0.0f);
    glEnd();
}

void wheel_blade1() //f_wh_2
{
    glBegin(GL_POLYGON); //wheel blade holder1
    glColor3d(1,0,0);   //red
    glVertex2f(0.0f, 0.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, 1.1f);
    glVertex2f(0.0f, 0.1f);
    glEnd();
    glBegin(GL_POLYGON); //wheel blade1
    glColor3d(0.98,0.625,0.12);   //pumpkin orange
    glVertex2f(0.3f, 0.3f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.2f, 0.7f);
    glVertex2f(0.5f, 0.0f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0,0,0);   //black
    glVertex2f(0.0f, 0.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, 1.1f);
    glVertex2f(1.0f, 1.1f);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(0.3f, 0.3f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.2f, 0.7f);
    glVertex2f(1.2f, 0.7f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.3f, 0.3f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.4f, 0.15f);
    glVertex2f(1.1f, 0.85f);
    glVertex2f(0.5f, 0.5f);
    glVertex2f(0.7f, 0.2f);
    glVertex2f(0.8f, 0.8f);
    glVertex2f(1.0f, 0.5f);
    glEnd();
}

void wheel_blade2() //f_wh_3
{
    glBegin(GL_POLYGON); //wheel blade holder2
    glColor3d(1,0,0);   //red
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 1.1f);
    glVertex2f(0.0f, 0.1f);
    glEnd();
    glBegin(GL_POLYGON); //wheel blade2
    glColor3d(0.98,0.625,0.12);   //pumpkin orange
    glVertex2f(-0.3f, 0.4f);
    glVertex2f(-1.0f, 1.1f);
    glVertex2f(-0.8f, 1.4f);
    glVertex2f(-0.1f, 0.7f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0,0,0);   //black
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 1.1f);
    glVertex2f(-1.0f, 1.1f);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(-0.3f, 0.4f);
    glVertex2f(-1.0f, 1.1f);
    glVertex2f(-1.0f, 1.1f);
    glVertex2f(-0.8f, 1.4f);
    glVertex2f(-0.8f, 1.4f);
    glVertex2f(-0.1f, 0.7f);
    glVertex2f(-0.3f, 0.4f);
    glVertex2f(-0.1f, 0.7f);
    glVertex2f(-0.2f, 0.55f);
    glVertex2f(-0.9f, 1.25f);
    glVertex2f(-0.5f, 0.6f);
    glVertex2f(-0.3f, 0.9f);
    glVertex2f(-0.8f, 0.9f);
    glVertex2f(-0.6f, 1.2f);
    glEnd();
}

void wheel_blade3() //f_wh_4
{
    glBegin(GL_POLYGON); //wheel blade holder3
    glColor3d(1,0,0);   //red
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, -1.1f);
    glVertex2f(0.0f, -0.1f);
    glEnd();
    glBegin(GL_POLYGON); //wheel blade3
    glColor3d(0.98,0.625,0.12);   //pumpkin orange
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.2f, -0.7f);
    glVertex2f(-0.5f, 0.0f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0,0,0);   //black
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, -1.1f);
    glVertex2f(-1.0f, -1.1f);
    glVertex2f(0.0f, -0.1f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, -0.1f);
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.2f, -0.7f);
    glVertex2f(-1.2f, -0.7f);
    glVertex2f(-0.5f, 0.0f);
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(-0.5f, -0.0f);
    glVertex2f(-0.4f, -0.15f);
    glVertex2f(-1.1f, -0.85f);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(-0.7f, -0.2f);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-1.0f, -0.5f);
    glEnd();
}

void wheel_blade4() //f_wh_5
{
    glBegin(GL_POLYGON); //wheel blade holder4
    glColor3d(1,0,0);   //red
    glVertex2f(0.0f, 0.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -1.1f);
    glVertex2f(0.0f, -0.1f);
    glEnd();
    glBegin(GL_POLYGON);    //wheel blade4
    glColor3d(0.98,0.625,0.12);   //pumpkin orange
    glVertex2f(0.3f, -0.4f);
    glVertex2f(1.0f, -1.1f);
    glVertex2f(0.8f, -1.4f);
    glVertex2f(0.1f, -0.7f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0,0,0);   //black
    glVertex2f(0.0f, 0.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -1.1f);
    glVertex2f(1.0f, -1.1f);
    glVertex2f(0.0f, -0.1f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, -0.1f);
    glVertex2f(0.3f, -0.4f);
    glVertex2f(1.0f, -1.1f);
    glVertex2f(1.0f, -1.1f);
    glVertex2f(0.8f, -1.4f);
    glVertex2f(0.8f, -1.4f);
    glVertex2f(0.1f, -0.7f);
    glVertex2f(0.3f, -0.4f);
    glVertex2f(0.1f, -0.7f);
    glVertex2f(0.2f, -0.55f);
    glVertex2f(0.9f, -1.25f);
    glVertex2f(0.5f, -0.6f);
    glVertex2f(0.3f, -0.9f);
    glVertex2f(0.8f, -0.9f);
    glVertex2f(0.6f, -1.2f);
    glEnd();
}

void wheel() //f_wh_6
{
    glPushMatrix();
    wheel_blade1();
    glPopMatrix();
    glPushMatrix();
    wheel_blade2();
    glPopMatrix();
    glPushMatrix();
    wheel_blade3();
    glPopMatrix();
    glPushMatrix();
    wheel_blade4();
    glPopMatrix();
    glPushMatrix();
    wheel_center();
    glPopMatrix();
}

void wh_ground() //f_wh_7
{
    glBegin(GL_POLYGON); //wheel house ground
    glColor3d(0,1,0);   //green
    glVertex2f(-5.0f, -2.0f);
    glVertex2f(5.0f, -2.0f);
    glVertex2f(5.0f, -5.0f);
    glVertex2f(-5.0f, -5.0f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0,0,0);   //black
    glVertex2f(-5.0f, -2.0f);
    glVertex2f(5.0f, -2.0f);
    glEnd();
}

void wh_window() //f_wh_8
{
    glBegin(GL_POLYGON); //wheel house window
    glColor3d(1,0,0);   //red
    glVertex2f(-0.2f, 0.6f);
    glVertex2f(0.2f, 0.6f);
    glVertex2f(0.2f, 1.2f);
    glVertex2f(-0.2f, 1.2f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0,0,0);   //black
    glVertex2f(-0.2f, 0.6f);
    glVertex2f(0.2f, 0.6f);
    glVertex2f(0.2f, 0.6f);
    glVertex2f(0.2f, 1.2f);
    glVertex2f(0.2f, 1.2f);
    glVertex2f(-0.2f, 1.2f);
    glVertex2f(-0.2f, 0.6f);
    glVertex2f(-0.2f, 1.2f);
    glVertex2f(0.0f, 0.6f);
    glVertex2f(0.0f, 1.2f);
    glVertex2f(-0.2f, 0.9f);
    glVertex2f(0.2f, 0.9f);
    glEnd();
}

void wh_body() //f_wh_9
{
    glBegin(GL_POLYGON); //wheel house body
    glColor3d(1,1,0); //yellow
    glVertex2f(-0.5f, 1.5f);
    glVertex2f(0.5f, 1.5f);
    glVertex2f(1.0f, -4.0f);
    glVertex2f(-1.0f, -4.0f);
    glEnd();

    glBegin(GL_POLYGON); //wheel house door
    glColor3d(1,0,0);   //red
    glVertex2f(-0.2f, -3.0f);
    glVertex2f(0.2f, -3.0f);
    glVertex2f(0.2f, -4.0f);
    glVertex2f(-0.2f, -4.0f);
    glEnd();

    glPushMatrix();
    wh_window();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4,-1.6f,0.0f);
    wh_window();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.5,-2.6f,0.0f);
    wh_window();
    glPopMatrix();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0,0,0);   //black
    glVertex2f(-0.5f, 1.5f);
    glVertex2f(0.5f, 1.5f);
    glVertex2f(0.5f, 1.5f);
    glVertex2f(1.0f, -4.0f);
    glVertex2f(1.0f, -4.0f);
    glVertex2f(-1.0f, -4.0f);
    glVertex2f(-0.5f, 1.5f);
    glVertex2f(-1.0f, -4.0f);
    glVertex2f(-0.2f, -3.0f);
    glVertex2f(0.2f, -3.0f);
    glVertex2f(0.2f, -3.0f);
    glVertex2f(0.2f, -4.0f);
    glVertex2f(0.2f, -4.0f);
    glVertex2f(-0.2f, -4.0f);
    glVertex2f(-0.2f, -3.0f);
    glVertex2f(-0.2f, -4.0f);
    glEnd();
}

void wh_roof() //f_wh_10
{
    glBegin(GL_TRIANGLES); //wheel house roof
    glColor3d(0.75,0.75,0.75); //light gray
    glVertex2f(0.0f, 3.0f);
    glVertex2f(0.8f, 1.5f);
    glVertex2f(-0.8f, 1.5f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0,0,0);   //black
    glVertex2f(0.0f, 3.0f);
    glVertex2f(0.8f, 1.5f);
    glVertex2f(0.8f, 1.5f);
    glVertex2f(-0.8f, 1.5f);
    glVertex2f(0.0f, 3.0f);
    glVertex2f(-0.8f, 1.5f);
    glEnd();
}

void wheel_house() //f_wh_11
{
    glPushMatrix();
    wh_ground();
    glPopMatrix();
    glPushMatrix();
    wh_body();
    glPopMatrix();
    glPushMatrix();
    wh_roof();
    glPopMatrix();
}

void display_w()
{
    glClearColor(0.0f, 0.8f, 1.0f, 1.0f); // Set background color to white and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    wheel_house();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,3.0f,0.0f);
    glRotatef(_anglewheel, 0.0f, 0.0f,-1.0f);
    wheel();
    glPopMatrix();
    glutSwapBuffers();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                    // Initialize GLUT
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(480, 300);           // Set the window's initial width & height
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Wheel House");       // Create a window with the given title
	glutDisplayFunc(display_w);               // Register display callback handler for window re-paint
    init();                         // Enter the event-processing loop
	glutTimerFunc(20, wheelUpdate, 0);
	glutMainLoop();
	return 0;
}


