#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
GLfloat position1 = 0.0f;
GLfloat position2 = 0.0f;
GLfloat speed = 0.1f;

void box1()  //id box1
{
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f( 0.2f, -0.2f);
    glVertex2f( 0.2f,  0.2f);
    glVertex2f(-0.2f,  0.2f);
    glEnd();
}

void box2()
{
    glBegin(GL_QUADS);   //id box2
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(0.2f, 0.4f);
    glVertex2f(0.2f, 0.8f);
    glVertex2f(-0.2f, 0.8f);
    glEnd();
}

void update(int value) {
    if(position1 <-3.0)
    {
        position1 = 2.0f;
    }
    position1 -= speed;
    if(position2 >3.0)
        position2 = -2.0f;
    position2 += speed;
	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}


void init() {

   gluOrtho2D(-2,2,-2,2);

}


void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0.0f, position1 , 0.0f);
    box1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, position2 , 0.0f);
    box2();
    glPopMatrix();

    glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(480, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Two Box Translation Animation");
   glutDisplayFunc(display);
   init();
   glutTimerFunc(100, update, 0);
   glutMainLoop();
   return 0;
}

