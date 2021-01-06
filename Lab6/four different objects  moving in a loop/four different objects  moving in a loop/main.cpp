#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

GLfloat position    = 0.0f;
GLfloat position1   = 0.0f;
GLfloat speed       = 0.1f;

void dis();
void display();

void update(int value) {

    if(position <-1.5)
        position = 0.0f;
    position -= speed;
	glutPostRedisplay();
	glutTimerFunc(100,update,0);
}


void update1(int value) {

    if(position1 >1.5)
        position1 = -0.0f;
    position1 += speed;
	glutPostRedisplay();
	glutTimerFunc(100,update1,0);
}

void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void disback(int val)
{
    glutDisplayFunc(display);
}

void display7()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0.0f,position1, 0.0f);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3f(1.0,1.0,1.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.10;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
	glEnd();
    glPopMatrix();
    glutTimerFunc(1500,disback,0);
    glFlush();

}

void display6(int val) {

    glutDisplayFunc(display7);

}

void display5()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3f(1.0,0,1.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.10;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
	glEnd();
    glPopMatrix();
    glutTimerFunc(1500,display6,0);
    glFlush();

}

void display4(int val) {

    glutDisplayFunc(display5);

}

void display3()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f( 0.2f, -0.2f);
    glVertex2f( 0.2f,  0.2f);
    glVertex2f(-0.2f,  0.2f);
    glEnd();
    glPopMatrix();
    glutTimerFunc(1500,display4,0);
    glFlush();
}

void display2(int val) {

    glutDisplayFunc(display3);

}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.2f,-0.2f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.2f, 0.2f);
    glEnd();
    glPopMatrix();
    glutTimerFunc(1500,display2,0);
    glFlush();

}

void dis()
{
    glutDisplayFunc(display);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(480, 300);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Fore moving object");
    glutDisplayFunc(dis);
    init();
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
    glutMainLoop();
    return 0;
}
