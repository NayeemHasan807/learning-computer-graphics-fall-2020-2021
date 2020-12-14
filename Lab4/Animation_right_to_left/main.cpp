#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;

float _move = 0.0f;
void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
	glTranslatef(_move, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(0.1f, 0.0f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.5f, 0.2f);
        glVertex2f(0.1f, 0.2);
	glEnd();
    glPopMatrix();

	glutSwapBuffers();
}

void update(int value) {

    _move += .02;
    if(_move > 1.3)
    {
        _move = -1.0;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 25 milliseconds
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Transformation");
	glutDisplayFunc(drawScene);
	glutTimerFunc(20, update, 0); //Add a timer
	glutMainLoop();
	return 0;
}
