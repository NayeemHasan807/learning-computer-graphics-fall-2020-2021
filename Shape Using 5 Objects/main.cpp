#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

void blue_quad() //code B1
{
    glBegin(GL_QUADS); //start of a quad object
	glColor3f(0.0f, 0.0f, 1.0f);//blue
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(0.25f, 0.2f);
	glVertex2f(0.25f, -0.3f);
	glVertex2f(-0.15f, -0.3f);
	glEnd(); //end of a quad object
}

void first_green_quad() //code G1
{
    glBegin(GL_QUADS); //start of a quad object
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.4f, 0.0f);
	glVertex2f(0.4f, 0.2f);
	glVertex2f(0.0f, 0.2f);
	glEnd(); //end of a quad object
}

void second_green_quad() //code G2
{
    glBegin(GL_QUADS); //start of a quad object
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(0.0f, -0.1f);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.4f, -0.3f);
	glVertex2f(0.0f, -0.3f);
	glEnd(); //end of a quad object
}

void first_yellow_quad() //code Y1
{
    glBegin(GL_QUADS); //start of a quad object
	glColor3f(1.0f, 1.0f, 0.0f);//yellow
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.15f, 0.2f);
	glVertex2f(0.15f, -0.3f);
	glVertex2f(0.05f, -0.3f);
	glEnd(); //end of a quad object
}

void second_yellow_quad() //code Y2
{
    glBegin(GL_QUADS); //start of a quad object
	glColor3f(1.0f, 1.0f, 0.0f);//yellow
	glVertex2f(0.25f, 0.2f);
	glVertex2f(0.35f, 0.2f);
	glVertex2f(0.35f, -0.3f);
	glVertex2f(0.25f, -0.3f);
	glEnd(); //end of a quad object
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW); //sets the current matrix mode
                                //subsequent matrix operations to the modelview matrix stack.
    glPushMatrix(); //Set current matrix on the stack
    blue_quad();
    glPopMatrix(); //Pop the old matrix without the transformations.

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW); //sets the current matrix mode
    glPushMatrix(); //Set current matrix on the stack
    first_green_quad();
    glPopMatrix(); //Pop the old matrix without the transformations.

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW); //sets the current matrix mode
    glPushMatrix(); //Set current matrix on the stack
    second_green_quad();
    glPopMatrix(); //Pop the old matrix without the transformations.

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW); //sets the current matrix mode
    glPushMatrix(); //Set current matrix on the stack
    first_yellow_quad();
    glPopMatrix(); //Pop the old matrix without the transformations.

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW); //sets the current matrix mode
    glPushMatrix(); //Set current matrix on the stack
    second_yellow_quad();
    glPopMatrix(); //Pop the old matrix without the transformations.


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                    // Initialize GLUT
	glutCreateWindow("Shape Using 5 Objects");       // Create a window with the given title
	glutInitWindowSize(420, 420);           // Set the window's initial width & height
	glutDisplayFunc(display);               // Register display callback handler for window re-paint
	glutMainLoop();                         // Enter the event-processing loop
	return 0;
}

