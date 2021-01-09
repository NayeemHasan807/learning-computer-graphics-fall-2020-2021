#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
GLfloat ufoPositionX = 0.0f;
GLfloat ufoPositionY = -0.8f;
GLfloat ufoSpeed = 0.0f;

void ufoUpdate(int value) //u_ufo_1
{
    if(ufoPositionX <-11.0)
    {
        ufoPositionX = 11.0f;
    }
    else if(ufoPositionX >11.0)
    {
        ufoPositionX = -11.0f;
    }
    ufoPositionX -= ufoSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, ufoUpdate, 0);
}

void init() {

   gluOrtho2D(-5,5,-5,5);

}

void ufo_background_moon() //f_ufo_1
{
    glLineWidth(2.5);
	glBegin(GL_POLYGON);// Draw 1x1 Square centered at origin
	glColor3ub( 255, 255, 255 );
	for(int i=0;i<100;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/100;
            float r=5.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();
}

void ufo_background_moon_marks() //f_ufo_2
{
    glBegin(GL_POLYGON);
    glColor3ub(247, 245, 203);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.4f, 0.2f);
    glVertex2f(-0.4f, -0.2f);
    glVertex2f(-0.2f, -0.4f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.4f, -0.2f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.2f, 0.4f);
    glEnd();
}

void ufo_background() //f_ufo_3
{
    glPushMatrix();
    glTranslatef(0.0f,-7.0,0.0f);
    ufo_background_moon();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.0f,-4.0,0.0f);
    ufo_background_moon_marks();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-3.3f,-4.2,0.0f);
    ufo_background_moon_marks();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.5f,-5.2,0.0f);
    ufo_background_moon_marks();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.0f,-2.2,0.0f);
    ufo_background_moon_marks();
    glPopMatrix();
}

void ufo_bottom_middle_circle() //f_ufo_4
{
    glLineWidth(2.5);
	glBegin(GL_POLYGON);// Draw 1x1 Square centered at origin
	glColor3ub(1,1,1);
	for(int i=0;i<100;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/100;
            float r=1.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();
    glLineWidth(2.5);
	glBegin(GL_POLYGON);// Draw 1x1 Square centered at origin
	glColor3ub(247, 212, 55);
	for(int i=0;i<100;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/100;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();
}

void ufo_bottom_side_circle() //f_ufo_5
{
    glLineWidth(2.5);
	glBegin(GL_POLYGON);// Draw 1x1 Square centered at origin
	glColor3ub(1,1,1);
	for(int i=0;i<100;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/100;
            float r=0.84;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();
    glLineWidth(2.5);
	glBegin(GL_POLYGON);// Draw 1x1 Square centered at origin
	glColor3ub( 247, 241, 55 );
	for(int i=0;i<100;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/100;
            float r=0.8;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();
}

void ufo_body_window() //f_ufo_6
{
    glBegin(GL_POLYGON);
    glColor3ub( 9, 17, 78 );
    glVertex2f(0.2f, -0.05f);
    glVertex2f(-0.2f, -0.05f);
    glVertex2f(-0.2f, -0.5f);
    glVertex2f(0.2f, -0.5f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(0.2f, -0.05f);
    glVertex2f(-0.2f, -0.05f);
    glVertex2f(-0.2f, -0.05f);
    glVertex2f(-0.2f, -0.5f);
    glVertex2f(-0.2f, -0.5f);
    glVertex2f(0.2f, -0.5f);
    glVertex2f(0.2f, -0.5f);
    glVertex2f(0.2f, -0.05f);
    glEnd();
}

void ufo_body() //f_ufo_7
{
    glBegin(GL_POLYGON);
    glColor3ub( 188, 34, 13 );
    glVertex2f(1.2f, 1.3f);
    glVertex2f(1.0f, 1.5f);
    glVertex2f(-1.0f, 1.5f);
    glVertex2f(-1.2f, 1.3f);
    glVertex2f(-1.4f, 1.0f);
    glVertex2f(1.4f, 1.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub( 188, 34, 13 );
    glVertex2f(1.5f, 1.0f);
    glVertex2f(-1.5f, 1.0f);
    glVertex2f(-1.7f, 0.4f);
    glVertex2f(1.7f, 0.4f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub( 188, 34, 13 );
    glVertex2f(-1.8f, 0.4f);
    glVertex2f(-2.0f, -0.4f);
    glVertex2f(-2.0f, -0.8f);
    glVertex2f(-1.8f, -1.0f);
    glVertex2f(1.8f, -1.0f);
    glVertex2f(2.0f, -0.8f);
    glVertex2f(2.0f, -0.4f);
    glVertex2f(1.8f, 0.4f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(1.2f, 1.3f);
    glVertex2f(1.0f, 1.5f);
    glVertex2f(1.0f, 1.5f);
    glVertex2f(-1.0f, 1.5f);
    glVertex2f(-1.0f, 1.5f);
    glVertex2f(-1.2f, 1.3f);
    glVertex2f(-1.2f, 1.3f);
    glVertex2f(-1.4f, 1.0f);
    glVertex2f(-1.4f, 1.0f);
    glVertex2f(1.4f, 1.0f);
    glVertex2f(1.4f, 1.0f);
    glVertex2f(1.2f, 1.3f);
    glVertex2f(1.5f, 1.0f);
    glVertex2f(-1.5f, 1.0f);
    glVertex2f(-1.5f, 1.0f);
    glVertex2f(-1.7f, 0.4f);
    glVertex2f(-1.7f, 0.4f);
    glVertex2f(1.7f, 0.4f);
    glVertex2f(1.7f, 0.4f);
    glVertex2f(1.5f, 1.0f);
    glVertex2f(-1.8f, 0.4f);
    glVertex2f(-2.0f, -0.4f);
    glVertex2f(-2.0f, -0.4f);
    glVertex2f(-2.0f, -0.8f);
    glVertex2f(-2.0f, -0.8f);
    glVertex2f(-1.8f, -1.0f);
    glVertex2f(-1.8f, -1.0f);
    glVertex2f(1.8f, -1.0f);
    glVertex2f(1.8f, -1.0f);
    glVertex2f(2.0f, -0.8f);
    glVertex2f(2.0f, -0.8f);
    glVertex2f(2.0f, -0.4f);
    glVertex2f(2.0f, -0.4f);
    glVertex2f(1.8f, 0.4f);
    glVertex2f(1.8f, 0.4f);
    glVertex2f(-1.8f, 0.4f);
    glEnd();
    glPushMatrix();
    ufo_body_window();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.7f,0.0,0.0f);
    ufo_body_window();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.7f,0.0f,0.0f);
    ufo_body_window();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.4f,0.0f,0.0f);
    ufo_body_window();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.4f,0.0,0.0f);
    ufo_body_window();
    glPopMatrix();
}

void ufo_top() //f_ufo_8
{
    glBegin(GL_POLYGON);
    glColor3ub(247,212,55);
    glVertex2f(0.3f, 1.8f);
    glVertex2f(0.1f, 2.0f);
    glVertex2f(-0.1f, 2.0f);
    glVertex2f(-0.3f, 1.8f);
    glVertex2f(-0.4f, 1.5f);
    glVertex2f(0.4f, 1.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub( 188, 34, 13 );
    glVertex2f(0.15f, 1.9f);
    glVertex2f(0.25f, 1.8f);
    glVertex2f(0.55f, 2.2f);
    glVertex2f(0.6f, 2.35f);
    glVertex2f(0.45f, 2.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub( 188, 34, 13 );
    glVertex2f(-0.15f, 1.9f);
    glVertex2f(-0.25f, 1.8f);
    glVertex2f(-0.55f, 2.2f);
    glVertex2f(-0.6f, 2.35f);
    glVertex2f(-0.45f, 2.3f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(0.15f, 1.9f);
    glVertex2f(0.25f, 1.8f);
    glVertex2f(0.25f, 1.8f);
    glVertex2f(0.55f, 2.2f);
    glVertex2f(0.55f, 2.2f);
    glVertex2f(0.6f, 2.35f);
    glVertex2f(0.6f, 2.35f);
    glVertex2f(0.45f, 2.3f);
    glVertex2f(0.45f, 2.3f);
    glVertex2f(0.15f, 1.9f);

    glVertex2f(-0.15f, 1.9f);
    glVertex2f(-0.25f, 1.8f);
    glVertex2f(-0.25f, 1.8f);
    glVertex2f(-0.55f, 2.2f);
    glVertex2f(-0.55f, 2.2f);
    glVertex2f(-0.6f, 2.35f);
    glVertex2f(-0.6f, 2.35f);
    glVertex2f(-0.45f, 2.3f);
    glVertex2f(-0.45f, 2.3f);
    glVertex2f(-0.15f, 1.9f);

    glVertex2f(0.3f, 1.8f);
    glVertex2f(0.1f, 2.0f);
    glVertex2f(0.1f, 2.0f);
    glVertex2f(-0.1f, 2.0f);
    glVertex2f(-0.1f, 2.0f);
    glVertex2f(-0.3f, 1.8f);
    glVertex2f(-0.3f, 1.8f);
    glVertex2f(-0.4f, 1.5f);
    glVertex2f(-0.4f, 1.5f);
    glVertex2f(0.4f, 1.5f);
    glVertex2f(0.4f, 1.5f);
    glVertex2f(0.3f, 1.8f);
    glEnd();
}

void ufo() //f_ufo_9
{
    glPushMatrix();
    glTranslatef(0.8f,-0.8,0.0f);
    ufo_bottom_side_circle();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8f,-0.8,0.0f);
    ufo_bottom_side_circle();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f,-0.7,0.0f);
    ufo_bottom_middle_circle();
    glPopMatrix();
    ufo_body();
    glPushMatrix();
    ufo_top();
    glPopMatrix();
}

void display_u()
{

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to white and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    ufo_background();
    glPopMatrix();
    glPushMatrix();
    glScalef(0.7f,0.7f,1.0f);
    glTranslatef(0.0f,ufoPositionY,0.0f);
    glTranslatef(ufoPositionX,0.0f,0.0f);
    ufo();
    glPopMatrix();
    glutSwapBuffers();
	glFlush();  // Render now
}

void specialKeys(int key, int x, int y) //u_ufo_2 {
    switch (key) {
        case GLUT_KEY_UP:
            ufoPositionY = ufoPositionY + 0.1f;
            break;
        case GLUT_KEY_DOWN:
            ufoPositionY = ufoPositionY - 0.1f;
            if(ufoPositionY < -0.8f)
                ufoSpeed = 0.0f;
            break;
        case GLUT_KEY_LEFT:
            ufoSpeed = ufoSpeed + 0.2f;
            break;
        case GLUT_KEY_RIGHT:
            ufoSpeed = ufoSpeed - 0.2f;
            break;
    }
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                    // Initialize GLUT
	glutInitWindowSize(480, 300);           // Set the window's initial width & height
	glutInitWindowPosition(50, 50);
	glutCreateWindow("UFO");       // Create a window with the given title
	glutDisplayFunc(display_u);               // Register display callback handler for window re-paint
    init();                         // Enter the event-processing loop
    glutSpecialFunc(specialKeys); //Special Key Handler
    glutTimerFunc(100, ufoUpdate, 0);
	glutMainLoop();
	return 0;
}
