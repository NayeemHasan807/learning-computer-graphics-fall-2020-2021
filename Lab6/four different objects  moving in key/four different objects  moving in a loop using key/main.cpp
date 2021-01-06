#include <iostream>
#include <stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<cstring>
using namespace std;
GLfloat position    = 0.0f;
GLfloat position1   = 0.0f;
GLfloat speed       = 0.1f;

void display();

void bench()
{
    glBegin(GL_QUADS);
	glColor3f(0.60f, 0.40f, 0.12f);//brown
    glVertex2f(-0.25f, 0.15f);
    glVertex2f(-0.25f, 0.0f);
    glVertex2f(0.25f, 0.0f);
    glVertex2f(0.25f, 0.15f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);//black
    glVertex2f(-0.25f, 0.0f);
    glVertex2f(-0.35f, -0.1f);
    glVertex2f(0.35f, -0.1f);
    glVertex2f(0.25f, 0.0f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.60f, 0.40f, 0.12f);//brown
    glVertex2f(-0.35f, -0.1f);
    glVertex2f(-0.35f, -0.15f);
    glVertex2f(0.35f, -0.15f);
    glVertex2f(0.35f, -0.1f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);//black
    glVertex2f(-0.35f, -0.15f);
    glVertex2f(-0.35f, -0.25f);
    glVertex2f(-0.33f, -0.25f);
    glVertex2f(-0.33f, -0.15f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);//black
    glVertex2f(0.35f, -0.15f);
    glVertex2f(0.35f, -0.25f);
    glVertex2f(0.33f, -0.25f);
    glVertex2f(0.33f, -0.15f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);//black
    glVertex2f(-0.25f, -0.15f);
    glVertex2f(-0.25f, -0.2f);
    glVertex2f(-0.23f, -0.2f);
    glVertex2f(-0.23f, -0.15f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);//black
    glVertex2f(0.25f, -0.15f);
    glVertex2f(0.25f, -0.2f);
    glVertex2f(0.23f, -0.2f);
    glVertex2f(0.23f, -0.15f);
	glEnd();
}

void tree()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);//green
    glVertex2f(0.0f, 0.2f);
	glVertex2f(-0.3f, 0.0f);
	glVertex2f(0.3f, 0.0f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);//green
    glVertex2f(0.0f, 0.3f);
	glVertex2f(-0.25f, 0.1f);
	glVertex2f(0.25f, 0.1f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);//green
    glVertex2f(0.0f, 0.4f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(0.15f, 0.2f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.60f, 0.40f, 0.12f);//brown
	glVertex2f(-0.05f, 0.02f);
	glVertex2f(-0.05f, -0.3f);
	glVertex2f(0.05f, -0.3f);
	glVertex2f(0.05f, 0.02f);
	glEnd();
}

void traingle()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.0f,-0.2f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.0f, 0.2f);
    glEnd();
}

void circle()
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3f(1.0,0.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.10;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
	glEnd();
}

void update(int value) {

    if(position <-1.5)
        position = 1.0f;
    position -= speed;
	glutPostRedisplay();
	glutTimerFunc(100,update,0);
}


void update1(int value) {

    if(position1 >1.5)
        position1 = -1.0f;
    position1 += speed;
	glutPostRedisplay();
	glutTimerFunc(100,update1,0);
}

void init() {
   glClearColor(1.0f, 1.0f, 0.0f, 1.0f);
}

void display3() //up
{
    glClear(GL_COLOR_BUFFER_BIT);
    //glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0.0f,position1, 0.0f);
    bench();
    glPopMatrix();
    glutTimerFunc(30,0,0);
    glFlush();
    glutSwapBuffers();

}

void display2() //down
{
    glClear(GL_COLOR_BUFFER_BIT);
    //glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	tree();
    glPopMatrix();
    glutTimerFunc(1500,0,0);
    glFlush();
    glutSwapBuffers();

}

void display1() //right
{
    glClear(GL_COLOR_BUFFER_BIT);
    //glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    traingle();
    glPopMatrix();
    glutTimerFunc(1500,0,0);
    glFlush();
    glutSwapBuffers();
}

void display() { //left
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    circle();
    glPopMatrix();
    glutTimerFunc(1500,0,0);
    glFlush();
    glutSwapBuffers();

}

void specialKeys(int key, int x, int y) {
    switch (key) {
        case GLUT_KEY_UP:
            position    = 0.0f;
            position1   = 0.0f;
            speed       = 0.05f;
            glutDisplayFunc(display3);
            break;
        case GLUT_KEY_DOWN:
            position    = 0.0f;
            position1   = 0.0f;
            speed       = 0.05f;
            glutDisplayFunc(display2);
            break;
        case GLUT_KEY_LEFT:
            position    = 0.0f;
            position1   = 0.0f;
            speed       = 0.05f;
            glutDisplayFunc(display);
            break;
        case GLUT_KEY_RIGHT:
            position    = 0.0f;
            position1   = 0.0f;
            speed       = 0.05f;
            glutDisplayFunc(display1);
            break;
    }
}

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glFlush();
	glutSwapBuffers();
}


int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(800, 500);
	glutCreateWindow("Transformation");
	glutSpecialFunc(specialKeys); //Special Key Handler
	glutDisplayFunc(drawScene);
    init();
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
	glutMainLoop();
	return 0;
}
