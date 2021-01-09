#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>

void init() {

   gluOrtho2D(-5,5,-5,5);

}

void ziggurat_background() //f_z_1
{
    glBegin(GL_POLYGON); //sky
    glColor3ub(78,230,200); //blue
    glVertex2f(-5.0f, -1.0f);
    glVertex2f(5.0f, -1.0f);
    glVertex2f(5.0f, 5.0f);
    glVertex2f(-5.0f, 5.0f);
    glEnd();
    glBegin(GL_POLYGON); //ground
    glColor3ub(230,165,78); //green
    glVertex2f(-5.0f, -1.0f);
    glVertex2f(5.0f, -1.0f);
    glVertex2f(5.0f, -5.0f);
    glVertex2f(-5.0f, -5.0f);
    glEnd();
}
void ziggurat_layer4() //f_z_2
{
    //layer 4 top
    glBegin(GL_POLYGON);
    glColor3ub(205,168,33);
    glVertex2f(2.0f, 0.0f);
    glVertex2f(-3.8f, 0.0f);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(4.0f, -2.0f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(2.0f, 0.0f);
    glVertex2f(-3.8f, 0.0f);
    glVertex2f(-3.8f, 0.0f);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(4.0f, -2.0f);
    glVertex2f(4.0f, -2.0f);
    glVertex2f(2.0f, 0.0f);
    glEnd();
    //layer 4 body
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 102);
    glVertex2f(4.0f, -2.0f);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(-2.0f, -3.0f);
    glVertex2f(4.0f, -3.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 210, 77);
    glVertex2f(-3.8f, 0.0f);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(-2.0f, -3.0f);
    glVertex2f(-3.8f, -1.0f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(4.0f, -2.0f);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(-2.0f, -3.0f);
    glVertex2f(-2.0f, -3.0f);
    glVertex2f(4.0f, -3.0f);
    glVertex2f(4.0f, -3.0f);
    glVertex2f(4.0f, -2.0f);
    glVertex2f(-3.8f, 0.0f);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(-2.0f, -3.0f);
    glVertex2f(-2.0f, -3.0f);
    glVertex2f(-3.8f, -1.0f);
    glVertex2f(-3.8f, -1.0f);
    glVertex2f(-3.8f, 0.0f);
    glEnd();
}
void ziggurat_layer3() //f_z_3
{
    //layer 3 top
    glBegin(GL_POLYGON);
    glColor3ub(205,168,33);
    glVertex2f(1.5f, 1.0f);
    glVertex2f(-3.0f, 1.0f);
    glVertex2f(-1.5f, -0.5f);
    glVertex2f(3.5f, -0.5f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(1.5f, 1.0f);
    glVertex2f(-3.0f, 1.0f);
    glVertex2f(-3.0f, 1.0f);
    glVertex2f(-1.5f, -0.5f);
    glVertex2f(-1.5f, -0.5f);
    glVertex2f(3.5f, -0.5f);
    glVertex2f(3.5f, -0.5f);
    glVertex2f(1.5f, 1.0f);
    glEnd();
    //layer 3 body
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 102);
    glVertex2f(3.5f, -0.5f);
    glVertex2f(-1.5f, -0.5f);
    glVertex2f(-1.5f, -1.5f);
    glVertex2f(3.5f, -1.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 210, 77);
    glVertex2f(-3.0f, 1.0f);
    glVertex2f(-1.5f, -0.5f);
    glVertex2f(-1.5f, -1.5f);
    glVertex2f(-3.0f, 0.0f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(3.5f, -0.5f);
    glVertex2f(-1.5f, -0.5f);
    glVertex2f(-1.5f, -0.5f);
    glVertex2f(-1.5f, -1.5f);
    glVertex2f(-1.5f, -1.5f);
    glVertex2f(3.5f, -1.5f);
    glVertex2f(3.5f, -1.5f);
    glVertex2f(3.5f, -0.5f);
    glVertex2f(-3.0f, 1.0f);
    glVertex2f(-1.5f, -0.5f);
    glVertex2f(-1.5f, -0.5f);
    glVertex2f(-1.5f, -1.5f);
    glVertex2f(-1.5f, -1.5f);
    glVertex2f(-3.0f, 0.0f);
    glVertex2f(-3.0f, 0.0f);
    glVertex2f(-3.0f, 1.0f);
    glEnd();
}
void ziggurat_layer2() //f_z_4
{
    //layer 2 top
    glBegin(GL_POLYGON);
    glColor3ub(205,168,33);
    glVertex2f(1.0f, 2.0f);
    glVertex2f(-2.2f, 2.0f);
    glVertex2f(-1.2f, 1.0f);
    glVertex2f(2.8f, 1.0f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(1.0f, 2.0f);
    glVertex2f(-2.2f, 2.0f);
    glVertex2f(-2.2f, 2.0f);
    glVertex2f(-1.2f, 1.0f);
    glVertex2f(-1.2f, 1.0f);
    glVertex2f(2.8f, 1.0f);
    glVertex2f(2.8f, 1.0f);
    glVertex2f(1.0f, 2.0f);
    glEnd();
    //layer 2 body
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 102);
    glVertex2f(2.8f, 1.0f);
    glVertex2f(-1.2f, 1.0f);
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(2.8f, 0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 210, 77);
    glVertex2f(-2.2f, 2.0f);
    glVertex2f(-1.2f, 1.0f);
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(-2.2f, 1.0f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(2.8f, 1.0f);
    glVertex2f(-1.2f, 1.0f);
    glVertex2f(-1.2f, 1.0f);
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(2.8f, 0.0f);
    glVertex2f(2.8f, 0.0f);
    glVertex2f(2.8f, 1.0f);
    glVertex2f(-2.2f, 2.0f);
    glVertex2f(-1.2f, 1.0f);
    glVertex2f(-1.2f, 1.0f);
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(-2.2f, 1.0f);
    glVertex2f(-2.2f, 1.0f);
    glVertex2f(-2.2f, 2.0f);
    glVertex2f(-2.2f, 2.0f);
    glEnd();
}
void ziggurat_layer1() //f_z_5
{
    //layer 1 top
    glBegin(GL_POLYGON);
    glColor3ub(205,168,33);
    glVertex2f(1.0f, 3.0f);
    glVertex2f(-1.6f, 3.0f);
    glVertex2f(-1.0f, 2.5f);
    glVertex2f(1.8f, 2.5f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(1.0f, 3.0f);
    glVertex2f(-1.6f, 3.0f);
    glVertex2f(-1.6f, 3.0f);
    glVertex2f(-1.0f, 2.5f);
    glVertex2f(-1.0f, 2.5f);
    glVertex2f(1.8f, 2.5f);
    glVertex2f(1.8f, 2.5f);
    glVertex2f(1.0f, 3.0f);
    glEnd();
    //layer 1 body
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f, 2.5f);
    glVertex2f(1.8f, 2.5f);
    glVertex2f(1.8f, 1.5f);
    glVertex2f(-1.0f, 1.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 210, 77);
    glVertex2f(-1.6f, 3.0f);
    glVertex2f(-1.0f, 2.5f);
    glVertex2f(-1.0f, 1.5f);
    glVertex2f(-1.6f, 2.0f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(-1.0f, 2.5f);
    glVertex2f(1.8f, 2.5f);
    glVertex2f(1.8f, 2.5f);
    glVertex2f(1.8f, 1.5f);
    glVertex2f(1.8f, 1.5f);
    glVertex2f(-1.0f, 1.5f);
    glVertex2f(-1.0f, 1.5f);
    glVertex2f(-1.0f, 2.5f);
    glVertex2f(-1.6f, 3.0f);
    glVertex2f(-1.0f, 2.5f);
    glVertex2f(-1.0f, 2.5f);
    glVertex2f(-1.0f, 1.5f);
    glVertex2f(-1.0f, 1.5f);
    glVertex2f(-1.6f, 2.0f);
    glVertex2f(-1.6f, 2.0f);
    glVertex2f(-1.6f, 3.0f);
    glEnd();

    //level 1 entrance1
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(0.5f, 1.5f);
    glVertex2f(0.0f, 1.5f);
    glVertex2f(0.0f, 2.0f);
    glVertex2f(0.5f, 2.0f);
    glEnd();
    //level 1 entrance2
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-1.45f, 1.89f);
    glVertex2f(-1.25f, 1.7f);
    glVertex2f(-1.25f, 2.1f);
    glVertex2f(-1.45f, 2.3f);
    glEnd();
}
void ziggurat_stairway1() //f_z_6
{
    glBegin(GL_POLYGON);
    glColor3ub(220, 220, 96);
    glVertex2f(0.6,1.0f);
    glVertex2f(0.0,1.0f);
    glVertex2f(0.5,-3.3f);
    glVertex2f(1.4,-3.3f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(0.6,1.0f);
    glVertex2f(0.0,1.0f);
    glVertex2f(0.0,1.0f);
    glVertex2f(0.5,-3.3f);
    glVertex2f(0.5,-3.3f);
    glVertex2f(1.4,-3.3f);
    glVertex2f(1.4,-3.3f);
    glVertex2f(0.6,1.0f);
    glEnd();
    glLineWidth(4.5);
    glBegin(GL_LINES);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.64f,0.8f);
    glVertex2f(0.06f,0.4f);
    glVertex2f(0.72f,0.4f);
    glVertex2f(0.11f,0.0f);
    glVertex2f(0.8f,0.0f);
    glVertex2f(0.16f,-0.4f);
    glVertex2f(0.86f,-0.4f);
    glVertex2f(0.21f,-0.8f);
    glVertex2f(0.93f,-0.8f);
    glVertex2f(0.25f,-1.2f);
    glVertex2f(1.0f,-1.2f);
    glVertex2f(0.30f,-1.6f);
    glVertex2f(1.09f,-1.6f);
    glVertex2f(0.35f,-2.0f);
    glVertex2f(1.17f,-2.0f);
    glVertex2f(0.39f,-2.4f);
    glVertex2f(1.24f,-2.4f);
    glVertex2f(0.44f,-2.8f);
    glVertex2f(1.30f,-2.8f);
    glEnd();
}
void ziggurat_stairway2() //f_z_7
{
    glBegin(GL_POLYGON);
    glColor3ub(220, 220, 96);
    glVertex2f(-1.5,1.3f);
    glVertex2f(-1.9,1.7f);
    glVertex2f(-3.7,-1.9f);
    glVertex2f(-3.1,-2.4f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(-1.5,1.3f);
    glVertex2f(-1.9,1.7f);
    glVertex2f(-1.9,1.7f);
    glVertex2f(-3.7,-1.9f);
    glVertex2f(-3.7,-1.9f);
    glVertex2f(-3.1,-2.4f);
    glVertex2f(-3.1,-2.4f);
    glVertex2f(-1.5,1.3f);
    glEnd();
    glLineWidth(4.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(-1.59f,1.1f);
    glVertex2f(-2.01f,1.5f);
    glVertex2f(-1.72f,0.8f);
    glVertex2f(-2.155f,1.2f);
    glVertex2f(-1.85f,0.5f);
    glVertex2f(-2.299f,0.9f);
    glVertex2f(-1.98f,0.2f);
    glVertex2f(-2.45f,0.6f);
    glVertex2f(-2.095f,-0.1f);
    glVertex2f(-2.60f,0.3f);
    glVertex2f(-2.23f,-0.4f);
    glVertex2f(-2.75f,0.0f);
    glVertex2f(-2.355f,-0.7f);
    glVertex2f(-2.89f,-0.3f);
    glVertex2f(-2.5f,-1.0f);
    glVertex2f(-3.05f,-0.6f);
    glVertex2f(-2.62f,-1.3f);
    glVertex2f(-3.20f,-0.9f);
    glVertex2f(-2.75f,-1.6f);
    glVertex2f(-3.35f,-1.2f);
    glVertex2f(-2.89f,-1.9f);
    glVertex2f(-3.5f,-1.5f);
    glVertex2f(-3.01f,-2.2f);
    glVertex2f(-3.64f,-1.75f);
    glEnd();
}
void ziggurat() //f_z_8
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    ziggurat_layer4();
    glPopMatrix();
    glPushMatrix();
    ziggurat_layer3();
    glPopMatrix();
    glPushMatrix();
    ziggurat_layer2();
    glPopMatrix();
    glPushMatrix();
    ziggurat_layer1();
    glPopMatrix();
    glPushMatrix();
    ziggurat_stairway1();
    glPopMatrix();
    glPushMatrix();
    ziggurat_stairway2();
    glPopMatrix();
}

void display_z()
{

	glClearColor(0.0f, 0.8f, 1.0f, 1.0f); // Set background color to white and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    ziggurat_background();
    glPopMatrix();
    glPushMatrix();
    ziggurat();
    glPopMatrix();
    glutSwapBuffers();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                    // Initialize GLUT
	glutInitWindowSize(480, 300);           // Set the window's initial width & height
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Ziggurat");       // Create a window with the given title
	glutDisplayFunc(display_z);               // Register display callback handler for window re-paint
    init();                         // Enter the event-processing loop
	glutMainLoop();
	return 0;
}




