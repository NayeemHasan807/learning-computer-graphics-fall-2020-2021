#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void sun()
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(1.0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.85;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

    //glVertex2f(-0.8f,0.4f);
    //glVertex2f(-0.7f,0.4f);

	glEnd();
}

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

void lamp_post()
{
    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.5f, 0.0f);//Orange
    glVertex2f(-0.01f, 0.4f);
    glVertex2f(-0.01f, -0.3f);
    glVertex2f(0.01f, -0.3f);
    glVertex2f(0.01f, 0.4f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);//Blue
    glVertex2f(-0.04f, -0.3f);
    glVertex2f(-0.04f, -0.35f);
    glVertex2f(0.04f, -0.35f);
    glVertex2f(0.04f, -0.3f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.1f, 0.1f);//Dark blue
	glVertex2f(-0.06f, -0.35f);
    glVertex2f(-0.07f, -0.38f);
    glVertex2f(0.07f, -0.38f);
    glVertex2f(0.06f, -0.35f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(-0.04f, 0.4f);
    glVertex2f(0.0f, 0.38f);
    glVertex2f(0.04f, 0.4f);
    glVertex2f(0.05f, 0.5f);
    glVertex2f(0.0f, 0.55f);
    glVertex2f(-0.05f,0.5f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 0.0f);//yellow
    glVertex2f(0.0f, 0.55f);
	glVertex2f(0.05f, 0.5f);
	glVertex2f(0.025f, 0.6f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 0.0f);//yellow
    glVertex2f(0.0f, 0.55f);
	glVertex2f(-0.05f,0.5f);
	glVertex2f(-0.025f, 0.6f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);//red
	glVertex2f(0.025f, 0.6f);
    glVertex2f(0.0f, 0.55f);
    glVertex2f(-0.025f, 0.6f);
    glVertex2f(0.0f, 0.65f);
	glEnd();
}

void road_side()
{
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(-0.8f, -1.0f);
	glVertex2f(-0.8f, -0.4f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(-0.6f, -0.4f);
	glVertex2f(-0.6f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, -0.4f);
	glEnd();
}

void road_marks()
{
    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.97f, -0.28f);
	glVertex2f(-0.97f, -0.32f);
	glVertex2f(-0.93f, -0.32f);
	glVertex2f(-0.93f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.87f, -0.28f);
	glVertex2f(-0.87f, -0.32f);
	glVertex2f(-0.83f, -0.32f);
	glVertex2f(-0.83f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.77f, -0.28f);
	glVertex2f(-0.77f, -0.32f);
	glVertex2f(-0.73f, -0.32f);
	glVertex2f(-0.73f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.67f, -0.28f);
	glVertex2f(-0.67f, -0.32f);
	glVertex2f(-0.63f, -0.32f);
	glVertex2f(-0.63f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.57f, -0.28f);
	glVertex2f(-0.57f, -0.32f);
	glVertex2f(-0.53f, -0.32f);
	glVertex2f(-0.53f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.47f, -0.28f);
	glVertex2f(-0.47f, -0.32f);
	glVertex2f(-0.43f, -0.32f);
	glVertex2f(-0.43f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.37f, -0.28f);
	glVertex2f(-0.37f, -0.32f);
	glVertex2f(-0.33f, -0.32f);
	glVertex2f(-0.33f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.27f, -0.28f);
	glVertex2f(-0.27f, -0.32f);
	glVertex2f(-0.23f, -0.32f);
	glVertex2f(-0.23f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.17f, -0.28f);
	glVertex2f(-0.17f, -0.32f);
	glVertex2f(-0.13f, -0.32f);
	glVertex2f(-0.13f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.07f, -0.28f);
	glVertex2f(-0.07f, -0.32f);
	glVertex2f(-0.03f, -0.32f);
	glVertex2f(-0.03f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(0.07f, -0.28f);
	glVertex2f(0.07f, -0.32f);
	glVertex2f(0.03f, -0.32f);
	glVertex2f(0.03f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(0.17f, -0.28f);
	glVertex2f(0.17f, -0.32f);
	glVertex2f(0.13f, -0.32f);
	glVertex2f(0.13f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(0.27f, -0.28f);
	glVertex2f(0.27f, -0.32f);
	glVertex2f(0.23f, -0.32f);
	glVertex2f(0.23f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(0.37f, -0.28f);
	glVertex2f(0.37f, -0.32f);
	glVertex2f(0.33f, -0.32f);
	glVertex2f(0.33f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(0.47f, -0.28f);
	glVertex2f(0.47f, -0.32f);
	glVertex2f(0.43f, -0.32f);
	glVertex2f(0.43f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(0.57f, -0.28f);
	glVertex2f(0.57f, -0.32f);
	glVertex2f(0.53f, -0.32f);
	glVertex2f(0.53f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(0.67f, -0.28f);
	glVertex2f(0.67f, -0.32f);
	glVertex2f(0.63f, -0.32f);
	glVertex2f(0.63f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(0.77f, -0.28f);
	glVertex2f(0.77f, -0.32f);
	glVertex2f(0.73f, -0.32f);
	glVertex2f(0.73f, -0.28f);
	glEnd();
    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(0.87f, -0.28f);
	glVertex2f(0.87f, -0.32f);
	glVertex2f(0.83f, -0.32f);
	glVertex2f(0.83f, -0.28f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(0.97f, -0.28f);
	glVertex2f(0.97f, -0.32f);
	glVertex2f(0.93f, -0.32f);
	glVertex2f(0.93f, -0.28f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.72f, -0.43f);
	glVertex2f(-0.72f, -0.47f);
	glVertex2f(-0.68f, -0.47f);
	glVertex2f(-0.68f, -0.43f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.72f, -0.53f);
	glVertex2f(-0.72f, -0.57f);
	glVertex2f(-0.68f, -0.57f);
	glVertex2f(-0.68f, -0.53f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.72f, -0.63f);
	glVertex2f(-0.72f, -0.67f);
	glVertex2f(-0.68f, -0.67f);
	glVertex2f(-0.68f, -0.63f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.72f, -0.73f);
	glVertex2f(-0.72f, -0.77f);
	glVertex2f(-0.68f, -0.77f);
	glVertex2f(-0.68f, -0.73f);
	glEnd();
    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.72f, -0.83f);
	glVertex2f(-0.72f, -0.87f);
	glVertex2f(-0.68f, -0.87f);
	glVertex2f(-0.68f, -0.83f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.72f, -0.93f);
	glVertex2f(-0.72f, -0.97f);
	glVertex2f(-0.68f, -0.97f);
	glVertex2f(-0.68f, -0.93f);
	glEnd();
}

void sky()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 1.0f);//light blue
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
}

void tree()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);//green
    glVertex2f(0.8f, 0.3f);
    glVertex2f(0.65f, 0.1f);
    glVertex2f(0.95f, 0.1f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);//green
    glVertex2f(0.8f, 0.4f);
    glVertex2f(0.7f, 0.2f);
    glVertex2f(0.9f, 0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);//green
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.75f, 0.3f);
    glVertex2f(0.85f, 0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.60f, 0.40f, 0.12f);//brown
    glVertex2f(0.77f, 0.1f);
    glVertex2f(0.77f, -0.2f);
    glVertex2f(0.83f, -0.2f);
    glVertex2f(0.83f, 0.1f);
    glEnd();
}
void traffic_light()
{
    glBegin(GL_POLYGON);
    glColor3f(0.25f, 0.25f, 0.25f);//dark gray
    glVertex2f(-0.69f, 0.1f);
    glVertex2f(-0.69f, -0.2f);
    glVertex2f(-0.71f, -0.2f);
    glVertex2f(-0.71f, 0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.25f, 0.25f, 0.25f);//dark gray
    glVertex2f(-0.66f, 0.1f);
    glVertex2f(-0.66f, 0.3f);
    glVertex2f(-0.74f, 0.3f);
    glVertex2f(-0.74f, 0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);//red
    glVertex2f(-0.68f, 0.13f);
    glVertex2f(-0.68f, 0.16f);
    glVertex2f(-0.72f, 0.16f);
    glVertex2f(-0.72f, 0.13f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);//yellow
    glVertex2f(-0.68f, 0.19f);
    glVertex2f(-0.68f, 0.22f);
    glVertex2f(-0.72f, 0.22f);
    glVertex2f(-0.72f, 0.19f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);//green
    glVertex2f(-0.68f, 0.25f);
    glVertex2f(-0.68f, 0.28f);
    glVertex2f(-0.72f, 0.28f);
    glVertex2f(-0.72f, 0.25f);
    glEnd();
}

void house()
{
    //house
    //level 1
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);//blue
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.4f, -0.2f);
    glVertex2f(0.4f, -0.2f);
    glVertex2f(0.4f, 0.0f);
    glEnd();
    //level 2
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);//blue
    glVertex2f(-0.4f, 0.2f);
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.4f, 0.2f);
    glEnd();
    //level 3
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);//blue
    glVertex2f(-0.4f, 0.4f);
    glVertex2f(-0.4f, 0.2f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.4f, 0.4f);
    glEnd();
    //level 4
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);//blue
    glVertex2f(-0.4f, 0.6f);
    glVertex2f(-0.4f, 0.4f);
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.4f, 0.6f);
    glEnd();
    //level 5
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);//blue
    glVertex2f(-0.4f, 0.8f);
    glVertex2f(-0.4f, 0.6f);
    glVertex2f(0.4f, 0.6f);
    glVertex2f(0.4f, 0.8f);
    glEnd();
    //entrance of level 1
    glBegin(GL_POLYGON);
    glColor3f(0.98f, 0.625f, 0.12f);//pumpkin orange
    glVertex2f(-0.05f, -0.2f);
    glVertex2f(-0.05f, -0.05f);
    glVertex2f(0.05f, -0.05f);
    glVertex2f(0.05f, -0.2f);
    glEnd();
    //window 1 of level 1
    glBegin(GL_POLYGON);
    glColor3f(0.98f, 0.625f, 0.12f);//pumpkin orange
    glVertex2f(-0.3f, -0.05f);
    glVertex2f(-0.3f, -0.15f);
    glVertex2f(-0.2f, -0.15f);
    glVertex2f(-0.2f, -0.05f);
    glEnd();
    //window 2 of level 1
    glBegin(GL_POLYGON);
    glColor3f(0.98f, 0.625f, 0.12f);//pumpkin orange
    glVertex2f(0.3f, -0.05f);
    glVertex2f(0.3f, -0.15f);
    glVertex2f(0.2f, -0.15f);
    glVertex2f(0.2f, -0.05f);
    glEnd();
    //window 1 of level 2
    glBegin(GL_POLYGON);
    glColor3f(0.98f, 0.625f, 0.12f);//pumpkin orange
    glVertex2f(-0.3f, 0.05f);
    glVertex2f(-0.3f, 0.15f);
    glVertex2f(-0.2f, 0.15f);
    glVertex2f(-0.2f, 0.05f);
    glEnd();
    //window 2 of level 2
    glBegin(GL_POLYGON);
    glColor3f(0.98f, 0.625f, 0.12f);//pumpkin orange
    glVertex2f(0.3f, 0.05f);
    glVertex2f(0.3f, 0.15f);
    glVertex2f(0.2f, 0.15f);
    glVertex2f(0.2f, 0.05f);
    glEnd();
    //window 1 of level 3
    glBegin(GL_POLYGON);
    glColor3f(0.98f, 0.625f, 0.12f);//pumpkin orange
    glVertex2f(-0.3f, 0.35f);
    glVertex2f(-0.3f, 0.25f);
    glVertex2f(-0.2f, 0.25f);
    glVertex2f(-0.2f, 0.35f);
    glEnd();
    //window 2 of level 3
    glBegin(GL_POLYGON);
    glColor3f(0.98f, 0.625f, 0.12f);//pumpkin orange
    glVertex2f(0.3f, 0.35f);
    glVertex2f(0.3f, 0.25f);
    glVertex2f(0.2f, 0.25f);
    glVertex2f(0.2f, 0.35f);
    glEnd();
    //window 1 of level 4
    glBegin(GL_POLYGON);
    glColor3f(0.98f, 0.625f, 0.12f);//pumpkin orange
    glVertex2f(-0.3f, 0.55f);
    glVertex2f(-0.3f, 0.45f);
    glVertex2f(-0.2f, 0.45f);
    glVertex2f(-0.2f, 0.55f);
    glEnd();
    //window 2 of level 4
    glBegin(GL_POLYGON);
    glColor3f(0.98f, 0.625f, 0.12f);//pumpkin orange
    glVertex2f(0.3f, 0.55f);
    glVertex2f(0.3f, 0.45f);
    glVertex2f(0.2f, 0.45f);
    glVertex2f(0.2f, 0.55f);
    glEnd();
    //window 1 of level 5
    glBegin(GL_POLYGON);
    glColor3f(0.98f, 0.625f, 0.12f);//pumpkin orange
    glVertex2f(-0.3f, 0.75f);
    glVertex2f(-0.3f, 0.65f);
    glVertex2f(-0.2f, 0.65f);
    glVertex2f(-0.2f, 0.75f);
    glEnd();
    //window 2 of level 5
    glBegin(GL_POLYGON);
    glColor3f(0.98f, 0.625f, 0.12f);//pumpkin orange
    glVertex2f(0.3f, 0.75f);
    glVertex2f(0.3f, 0.65f);
    glVertex2f(0.2f, 0.65f);
    glVertex2f(0.2f, 0.75f);
    glEnd();
}
void road()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);//black
    glVertex2f(-1.0f, -0.4f);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(1.0f, -0.4f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);//black
    glVertex2f(-0.8f, -0.4f);
    glVertex2f(-0.8f, -1.0f);
    glVertex2f(-0.6f, -1.0f);
    glVertex2f(-0.6f, -0.4f);
    glEnd();
}

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f,0.0f,0.0f);
    sky();

	glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.05f,0.0f,0.0f);
    tree();

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.85f,0.0f,0.0f);
    tree();

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.05f,0.0f,0.0f);
    traffic_light();

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.35f,0.0f,0.0f);
    glScalef(0.5f,1.0f,0.0f);
    house();

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.45f,0.0f,0.0f);
    glScalef(0.5f,1.0f,0.0f);
    house();


	glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f,0.0f,0.0f);
    road();


	glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f,0.0f,0.0f);
    road_side();


    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f,0.0f,0.0f);
    road_marks();



    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.2f,-0.65f,-0.6f);
    glScalef(0.5f,0.5f,0.0f);
    bench();

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.6f,-0.65f,-0.6f);
    glScalef(0.5f,0.5f,0.0f);
    bench();

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.07f,-0.6f,0.0f);
    glScalef(0.5f,0.6f,0.0f);
    lamp_post();

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.85f,-0.6f,0.0f);
    glScalef(0.5f,0.6f,0.0f);
    lamp_post();

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.8f,0.6f,0.0f);
    glScalef(0.1f,0.1f,0.0f);
    sun();


	glFlush();  // Render now
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
