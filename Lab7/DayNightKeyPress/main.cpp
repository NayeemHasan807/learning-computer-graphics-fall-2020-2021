#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

GLfloat position    = 0.0f;
GLfloat speed       = 0.1f;
void display();

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

void scenario()
{
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
}

void init() {

   gluOrtho2D(-5,5,-5,5);

}

void ziggurat_background()
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
void ziggurat_layer4()
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
void ziggurat_layer3()
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
void ziggurat_layer2()
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
void ziggurat_layer1()
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
void ziggurat_stairway1()
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
void ziggurat_stairway2()
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
void ziggurat()
{
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    ziggurat_layer4();
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    ziggurat_layer3();
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    ziggurat_layer2();
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    ziggurat_layer1();
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    ziggurat_stairway1();
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    ziggurat_stairway2();
    glPopMatrix();
}

void display_z()
{

	glClearColor(0.0f, 0.8f, 1.0f, 1.0f); // Set background color to white and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLoadIdentity();
    glPushMatrix();
    //ziggurat_background();
    glPushMatrix();
    sun();
    //ziggurat();
    glPopMatrix();
	glFlush();  // Render now
}

void display3()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
    scenario();
    glPopMatrix();
    glFlush();
}

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
    scenario();
    glPopMatrix();
    glFlush();

}

void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
        case '1':
             glutDisplayFunc(display);
             glutPostRedisplay();
        break;
        case '2':
             glutDisplayFunc(display3);
             glutPostRedisplay();
        break;
        case '3':
             glutDisplayFunc(display_z);
             glutPostRedisplay();
        break;

	}
}

int main(int argc, char** argv) {
    init();
    glutInit(&argc, argv);
    glutInitWindowSize(480, 300);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Day Night On Key Press");
    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeypress);
    glutMainLoop();
    return 0;
}
