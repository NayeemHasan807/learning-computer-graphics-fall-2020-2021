#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
GLfloat yachtPosition = 0.0f;
GLfloat yachtSpeed = 0.2f;

void yachtUpdate(int value) //u_yacht_1
{
    if(yachtPosition <-9.0)
        yachtPosition = 8.0f;
    yachtPosition -= yachtSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, yachtUpdate, 0);
}


void init() {

   gluOrtho2D(-5,5,-5,5);

}

void yacht_river() //f_yacht_1
{
    glBegin(GL_POLYGON); //river
    glColor3f(0.0f, 1.0f, 1.0f); //blue
    glVertex2f(-5.0f, -1.0f);
    glVertex2f(5.0f, -1.0f);
    glVertex2f(5.0f, -5.0f);
    glVertex2f(-5.0f, -5.0f);
    glEnd();
}

void yacht_lower_body() //f_yacht_2
{
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(-3.0f, -2.0f);
    glVertex2f(3.0f, -2.0f);
    glVertex2f(3.0f, -2.0f);
    glVertex2f(3.0f, -2.7f);
    glVertex2f(3.0f, -2.7f);
    glVertex2f(2.8f, -3.0f);
    glVertex2f(2.8f, -3.0f);
    glVertex2f(-2.5f, -3.0f);
    glVertex2f(-2.5f, -3.0f);
    glVertex2f(-3.0f, -2.0f);
    glVertex2f(-0.5f, -2.3f);
    glVertex2f(2.0f, -2.3f);
    glVertex2f(2.0f, -2.3f);
    glVertex2f(2.0f, -2.4f);
    glVertex2f(2.0f, -2.4f);
    glVertex2f(-0.5f, -2.4f);
    glVertex2f(-0.5f, -2.4f);
    glVertex2f(-0.5f, -2.3f);
    glEnd();

    glBegin(GL_POLYGON); //frame
    glColor3f(0.0f, 0.0f, 1.0f); //dark blue
    glVertex2f(-3.0f, -2.0f);
    glVertex2f(3.0f, -2.0f);
    glVertex2f(3.0f, -2.7f);
    glVertex2f(2.8f, -3.0f);
    glVertex2f(-2.5f, -3.0f);
    glEnd();

    glBegin(GL_POLYGON); //lower shade
    glColor3f(1.0f, 1.0f, 1.0f); //white
    glVertex2f(-2.65f, -2.7f);
    glVertex2f(3.0f, -2.7f);
    glVertex2f(2.8f, -3.0f);
    glVertex2f(-2.5f, -3.0f);
    glEnd();

    glBegin(GL_POLYGON);  //design
    glColor3f(0.75f, 0.75f, 0.75f); //light gray
    glVertex2f(-0.5f, -2.3f);
    glVertex2f(2.0f, -2.3f);
    glVertex2f(2.0f, -2.4f);
    glVertex2f(-0.5f, -2.4f);
    glEnd();
}

void yatch_window() //f_yacht_3
{
    glBegin(GL_POLYGON); //window
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.4f, -1.65f);
    glVertex2f(-0.7f, -1.65f);
    glVertex2f(-0.7f, -1.85f);
    glVertex2f(-0.4f, -1.85f);
    glEnd();
}

void yacht_upper_body() //f_yacht_4
{
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(-1.0f, -1.5f);
    glVertex2f(2.5f, -1.5f);
    glVertex2f(2.5f, -1.5f);
    glVertex2f(2.5f, -2.0f);
    glVertex2f(2.5f, -2.0f);
    glVertex2f(-1.3f, -2.0f);
    glVertex2f(-1.3f, -2.0f);
    glVertex2f(-1.0f, -1.5f);
    glVertex2f(-0.9f, -1.4f);
    glVertex2f(2.55f, -1.4f);
    glVertex2f(2.55f, -1.4f);
    glVertex2f(2.55f, -1.5f);
    glVertex2f(2.55f, -1.5f);
    glVertex2f(-1.0f, -1.5f);
    glVertex2f(-1.0f, -1.5f);
    glVertex2f(-0.9f, -1.4f);
    glEnd();

    glBegin(GL_POLYGON); //frame
    glColor3f(1.0f, 1.0f, 1.0f); //white
    glVertex2f(-1.0f, -1.5f);
    glVertex2f(2.5f, -1.5f);
    glVertex2f(2.5f, -2.0f);
    glVertex2f(-1.3f, -2.0f);
    glEnd();

    glBegin(GL_POLYGON); //upper shade
    glColor3f(0.60f, 0.40f, 0.12f); //brown
    glVertex2f(-0.9f, -1.4f);
    glVertex2f(2.55f, -1.4f);
    glVertex2f(2.55f, -1.5f);
    glVertex2f(-1.0f, -1.5f);
    glEnd();

    yatch_window();
    glTranslatef(0.6,0.0f,0.0f);
    yatch_window();
    glTranslatef(0.6,0.0f,0.0f);
    yatch_window();
    glTranslatef(0.6,0.0f,0.0f);
    yatch_window();
    glTranslatef(0.6,0.0f,0.0f);
    yatch_window();
}

void yacht_sail() //f_yacht_5
{
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(0.0f, -1.4f);
    glVertex2f(0.1f, -1.4f);
    glVertex2f(0.1f, -1.4f);
    glVertex2f(0.1f, 0.0f);
    glVertex2f(0.1f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, -1.4f);
    glVertex2f(0.02f, 0.0f);
    glVertex2f(0.08f, 0.0f);
    glVertex2f(0.08f, 0.0f);
    glVertex2f(0.08f, 4.5f);
    glVertex2f(0.08f, 4.5f);
    glVertex2f(0.02f, 4.5f);
    glVertex2f(0.02f, 4.5f);
    glVertex2f(0.02f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON); //lower sail holder
    glColor3f(0.75f, 0.75f, 0.75f); //light gray
    glVertex2f(0.0f, -1.4f);
    glVertex2f(0.1f, -1.4f);
    glVertex2f(0.1f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON); //upper sail holder
    glColor3f(0.90f, 0.90f, 0.90f); //light gray
    glVertex2f(0.02f, 0.0f);
    glVertex2f(0.08f, 0.0f);
    glVertex2f(0.08f, 4.5f);
    glVertex2f(0.02f, 4.5f);
    glEnd();

    glBegin(GL_POLYGON); //sail 1 holder 1
    glColor3f(0.35f, 0.35f, 0.35f); //dark gray
    glVertex2f(0.02f, 2.8f);
    glVertex2f(-0.05f, 2.8f);
    glVertex2f(-0.05f, 2.6f);
    glVertex2f(0.02f, 2.6f);
    glEnd();

    glBegin(GL_POLYGON); //sail 3 holder 1
    glColor3f(0.35f, 0.35f, 0.35f); //dark gray
    glVertex2f(0.08f, 0.6f);
    glVertex2f(0.15f, 0.6);
    glVertex2f(0.15f, 0.8f);
    glVertex2f(0.08f, 0.8f);
    glEnd();

    glBegin(GL_POLYGON); //sail 3 holder 2
    glColor3f(0.35f, 0.35f, 0.35f); //dark gray
    glVertex2f(0.08f, 1.8f);
    glVertex2f(0.15f, 1.8f);
    glVertex2f(0.15f, 2.0f);
    glVertex2f(0.08f, 2.0f);
    glEnd();

    glBegin(GL_POLYGON); //sail 2 holder 1
    glColor3f(0.35f, 0.35f, 0.35f); //dark gray
    glVertex2f(0.02f, 1.2f);
    glVertex2f(-0.05f, 1.2f);
    glVertex2f(-0.05f, 1.0f);
    glVertex2f(0.02f, 1.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //sail 1
    glColor3f(0.99f, 0.99f, 0.99f); //light gray
    glVertex2f(-0.1f, 4.3f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(-2.5f, -1.3f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(-0.1f, 4.3f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(-2.5f, -1.3f);
    glVertex2f(-2.5f, -1.3f);
    glVertex2f(-0.1f, 4.3f);
    glEnd();

    glBegin(GL_TRIANGLES); //sail 2
    glColor3f(0.90f, 0.90f, 0.90f); //light gray
    glVertex2f(-0.05f, 3.3f);
    glVertex2f(-0.05f,-1.2f);
    glVertex2f(-1.2f, -1.2f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(-0.05f, 3.3f);
    glVertex2f(-0.05f,-1.2f);
    glVertex2f(-0.05f,-1.2f);
    glVertex2f(-1.2f, -1.2f);
    glVertex2f(-1.2f, -1.2f);
    glVertex2f(-0.05f, 3.3f);
    glEnd();

    glBegin(GL_TRIANGLES); //sail 3
    glColor3f(1.0f, 1.0f, 0.99f); //light gray
    glVertex2f(0.15f, 4.3f);
    glVertex2f(0.15f, -1.3f);
    glVertex2f(1.5f, -1.3f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(0.15f, 4.3f);
    glVertex2f(0.15f, -1.3f);
    glVertex2f(0.15f, -1.3f);
    glVertex2f(1.5f, -1.3f);
    glVertex2f(1.5f, -1.3f);
    glVertex2f(0.15f, 4.3f);
    glEnd();
}

void yacht() //f_yacht_6
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    yacht_lower_body();
    glPopMatrix();
    glPushMatrix();
    yacht_upper_body();
    glPopMatrix();
    glPushMatrix();
    yacht_sail();
    glPopMatrix();
}

void display_y()
{

	glClearColor(0.0f, 0.8f, 1.0f, 1.0f); // Set background color to white and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    yacht_river();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(yachtPosition,0.0f,0.0f);
    yacht();
    glPopMatrix();
    glutSwapBuffers();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                    // Initialize GLUT
	glutInitWindowSize(480, 300);           // Set the window's initial width & height
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Yacht");       // Create a window with the given title
	glutDisplayFunc(display_y);               // Register display callback handler for window re-paint
    init();                         // Enter the event-processing loop
	glutTimerFunc(100, yachtUpdate, 0);
	glutMainLoop();
	return 0;
}



