#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//black
	glVertex2f(-0.21f, 0.63f);
	glVertex2f(-0.43f, 0.41f);
	glVertex2f(-0.43f, 0.19f);
	glVertex2f(-0.21f, -0.03f);
	glVertex2f(0.3f, -0.03f);
	glVertex2f(0.53f, 0.19f);
	glVertex2f(0.53f, 0.41f);
	glVertex2f(0.31f, 0.63f);
	glEnd();



	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.4f, 0.4f);
	glVertex2f(-0.4f, 0.2f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.5f, 0.2f);
	glVertex2f(0.5f, 0.4f);
	glVertex2f(0.3f, 0.6f);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//black
	glVertex2f(-0.05f, 0.3f);
	glVertex2f(-0.35f, 0.35f);
	glVertex2f(-0.35f, 0.25f);
	glVertex2f(-0.15f, 0.05f);
	glVertex2f(-0.05f, 0.15f);
	glVertex2f(0.05f, 0.05f);
	glVertex2f(0.15f, 0.15f);
	glVertex2f(0.25f, 0.05f);
	glVertex2f(0.45f, 0.25f);
	glVertex2f(0.45f, 0.35f);
	glVertex2f(0.15f, 0.3f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//black
	glVertex2f(-0.1f, 0.50f);
	glVertex2f(-0.05f, 0.50f);
	glVertex2f(-0.05f, 0.55f);
	glVertex2f(-0.15f, 0.55f);
	glVertex2f(-0.35f, 0.35f);
	glVertex2f(-0.1f, 0.35f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f);//black
	glVertex2f(-0.35f, 0.35f);
	glVertex2f(-0.1f, 0.35f);
	glVertex2f(-0.05f, 0.3f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//black
	glVertex2f(0.25f, 0.55f);
	glVertex2f(0.15f, 0.55f);
	glVertex2f(0.15f, 0.5f);
	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.2f, 0.35f);
	glVertex2f(0.45f, 0.35f);
	glVertex2f(0.2f, 0.35f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f);//black
	glVertex2f(0.15f, 0.3f);
	glVertex2f(0.2f, 0.35f);
	glVertex2f(0.45f, 0.35f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//black
	glVertex2f(0.0f, 0.35f);
	glVertex2f(-0.05f, 0.3f);
	glVertex2f(0.15f, 0.3f);
	glVertex2f(0.1f, 0.35f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//black
    glVertex2f(0.0f, 0.35f);
    glVertex2f(0.1f, 0.35f);
	glVertex2f(0.1f, 0.5f);
    glVertex2f(0.0f, 0.5f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//black
    glVertex2f(0.0f, 0.55f);
    glVertex2f(0.0f, 0.5f);
	glVertex2f(0.03f, 0.5f);
    glVertex2f(0.03f, 0.55f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//black
    glVertex2f(0.07f, 0.55f);
    glVertex2f(0.07f, 0.5f);
	glVertex2f(0.1f, 0.5f);
    glVertex2f(0.1f, 0.55f);
	glEnd();


	glFlush();                              // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                    // Initialize GLUT
	glutCreateWindow("OpenGL Setup");       // Create a window with the given title
	glutInitWindowSize(420, 420);           // Set the window's initial width & height
	glutDisplayFunc(display);               // Register display callback handler for window re-paint
	glutMainLoop();                         // Enter the event-processing loop
	return 0;
}
