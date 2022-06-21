#include <stdlib.h>
#include<cstdio>
#include <windows.h>
#include<math.h>
# define PI 3.14159265358979323846
#include <GL/gl.h>
#include <GL/glut.h>

void init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1,1,-1,1,-1,5);
}
float tx=0.0;
float ty=0.0;


GLfloat position22 = 0.0f;
GLfloat speed22 = 0.007f;
void birdd(int value) {
    if(position22 > 1.0)
        position22 =-1.0f;
    position22 += speed22;
	glutPostRedisplay();
	glutTimerFunc(100, birdd, 0);
}
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.004f;
void cloud(int value) {
    if(position2 > 1.0)
        position2 =-1.0f;
    position2 += speed2;
	glutPostRedisplay();
	glutTimerFunc(100, cloud, 0);
}
GLfloat position1 = 1.0f;
GLfloat speed1 =-0.005f;
void boat(int value)
{
   if(position1 <- 1.0)
        position1 = 1.0f;
    position1 += speed1;
	glutPostRedisplay();
	glutTimerFunc(100, boat, 0);
}
void stars()
{
    glPointSize( 2.5 );
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.8f,0.95f);
    glVertex2f(0.9f,0.9f);
    glVertex2f(0.95f,0.7f);
    glVertex2f(0.8f,0.8f);
    glVertex2f(0.7f,0.9f);
    glVertex2f(0.6f,0.8f);
    glVertex2f(0.5f,0.75f);
    glVertex2f(0.4f,0.9f);
    glVertex2f(0.3f,0.7f);
    glVertex2f(0.25f,0.9f);
    glVertex2f(0.25f,0.7f);
    glVertex2f(0.1f,0.9f);
    glVertex2f(0.15f,0.75f);
    glVertex2f(0.0f,0.8f);
    glVertex2f(-0.7f,0.9f);
    glVertex2f(-0.8f,0.95f);
    glVertex2f(-0.4f,0.8f);
    glVertex2f(-0.8f,0.95f);
    glVertex2f(-0.9f,0.9f);
    glVertex2f(-0.95f,0.7f);
    glVertex2f(-0.8f,0.8f);
    glVertex2f(-0.7f,0.9f);
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.5f,0.75f);
    glVertex2f(-0.4f,0.9f);
    glVertex2f(-0.3f,0.7f);
    glVertex2f(-0.25f,0.9f);
    glVertex2f(-0.25f,0.7f);
    glVertex2f(-0.15f,0.75f);
    glVertex2f(-0.1f,0.9f);
    glFlush();

    glEnd();






}
void moon()
{
    int i;

    GLfloat xx=-.5f; GLfloat yx=.93f; GLfloat radiusx =.06f;
    int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0, 51, 204);
		glVertex2f(xx, yx); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx + (radiusx * cos(i *  twicePi / triangleAmount)),
			    yx + (radiusx * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x=-.5f; GLfloat y=.9f; GLfloat radius =.06f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(242, 242, 242);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}
void sky2()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 204);
	glVertex2f(-1.0f, 0.45f);
	glVertex2f(1.0f, 0.45f);
    glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
    glEnd();
}
void cloud2()
{// glLoadIdentity();
    int i;
	GLfloat x=-.5f; GLfloat y=.86f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.55f; GLfloat b=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.45f; GLfloat d=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.52f; GLfloat f=.8f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-.6f; GLfloat h=.82f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void sky()
{
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
    glEnd();
}

void backgroundtree()
{
    //left tree wood
    glBegin(GL_POLYGON);
	glColor3ub(102, 51, 0);
	glVertex2f(-0.52f,0.45f);
	glVertex2f(-0.48f, 0.45f);
	glVertex2f(-0.48f,0.62f);
    glVertex2f(-0.52f,0.62f);
    glEnd();
//left tree
int i;

	GLfloat x=-.5f; GLfloat y=.7f; GLfloat radius =.033f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	GLfloat a=-.53f; GLfloat b=.68f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(a, b);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat c=-.53f; GLfloat d=.64f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(c, d);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat e=-.48f; GLfloat f=.68f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(e, f);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat k=-.48f; GLfloat z=.64f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(k, z);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            k + (radius * cos(i *  twicePi / triangleAmount)),
			    z + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//right tree

    glBegin(GL_POLYGON);
	glColor3ub(102, 51, 0);
	glVertex2f(0.52f,0.45f);
	glVertex2f(0.48f, 0.45f);
	glVertex2f(0.48f,0.62f);
    glVertex2f(0.5f,0.64f);
    glVertex2f(0.52f,0.62f);
    glEnd();
    GLfloat t=.5f; GLfloat u=.7f;



	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(t, u);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t + (radius * cos(i *  twicePi / triangleAmount)),
			    u + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	GLfloat o=.53f; GLfloat p=.68f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(o, p);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            o + (radius * cos(i *  twicePi / triangleAmount)),
			    p + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat j=.53f; GLfloat l=.64f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(j, l);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            j + (radius * cos(i *  twicePi / triangleAmount)),
			    l + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat r=.46f; GLfloat g=.68f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(r, g);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            r + (radius * cos(i *  twicePi / triangleAmount)),
			    g + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat s=.48f; GLfloat v=.64f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(s, v);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            s+ (radius * cos(i *  twicePi / triangleAmount)),
			    v + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//hill left
  	glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-1.0f,0.45f);
	glVertex2f(-0.98f, 0.5f);
    glVertex2f(-0.92f, 0.56);
    glVertex2f(-0.9f,0.6f);
    glVertex2f(-0.82f, 0.64);
    glVertex2f(-0.75f, 0.67);
    glVertex2f(-0.68f, 0.64);
    glVertex2f(-0.6f,0.6f);
    glVertex2f(-0.5f,0.45f);
    glEnd();
//hill right
	glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(1.0f,0.45f);
	glVertex2f(0.98f, 0.5f);
    glVertex2f(0.93f, 0.56);
    glVertex2f(0.9f,0.6f);
    glVertex2f(0.75f, 0.67);//middle
     glVertex2f(0.6f,0.6f);
     glVertex2f(0.52f, 0.5f);
     glVertex2f(0.5f,0.45f);
     glEnd();
//left middle hill
	glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-0.5f,0.45f);
	glVertex2f(-0.48f, 0.5f);
    glVertex2f(-0.45f, 0.56);
    glVertex2f(-0.42f,0.6f);
    glVertex2f(-0.37f, 0.62);//middle
    glVertex2f(-0.32f, 0.6);
    glVertex2f(-0.29f, 0.56f);
    glVertex2f(-0.27f, 0.5f);
    glVertex2f(-0.25f,0.45f);
    glEnd();
//right middle hill
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(0.5f,0.45f);
	glVertex2f(0.48f, 0.5f);
    glVertex2f(0.45f, 0.56);
    glVertex2f(0.42f,0.6f);
    glVertex2f(0.37f, 0.62);///
    glVertex2f(0.32f, 0.6);
    glVertex2f(0.29f, 0.56f);
     glVertex2f(0.27f, 0.5f);
    glVertex2f(0.25f,0.45f);
    glEnd();
// middle hill
    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(.25f,0.45f);

	glVertex2f(-.25f,0.45f);
    glVertex2f(-0.15f,0.6f);
    glVertex2f(-0.00f, 0.67);///
    glVertex2f(0.15f,0.6f);
    glVertex2f(0.23f, 0.5f);

	glEnd();

}
void bird()
{
       int i;

	GLfloat mm=0.182f; GLfloat nn=.801f; GLfloat radiusmm =.01f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mm, nn);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mm + (radiusmm * cos(i *  twicePi / triangleAmount)),
			    nn + (radiusmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();
	/////2nd bird////
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();



}

void sun()
{
    int i;

	GLfloat x=.0f; GLfloat y=.8f; GLfloat radius =.08f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 204, 0);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
void grass()
{
    int i;

	GLfloat x=-.9f; GLfloat y=-.75f; GLfloat radius =.18f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0, 204, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat a=-.99f; GLfloat b=-.99;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.7f; GLfloat d=-.8f; radius =.20f;
    twicePi = 2.5f * PI;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(60, 100, 20);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat p=-.3f; GLfloat o=-.8f; radius =.25f;
    twicePi = 2.5f * PI;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(60, 100, 20);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius * cos(i *  twicePi / triangleAmount)),
			    o + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}
void grass2()
{
    int i;

	GLfloat x=-.5f; GLfloat y=-.8f; GLfloat radius =.22f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0, 100, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat a=-.11f; GLfloat b=-.8;radius =.19f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



}
void grass3()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.5f,-0.9f);//left
    glVertex2f(-0.51f,-0.9f);//right
    glColor3ub(217, 217, 217);
    glVertex2f(-0.57f,-0.4f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.52f,-0.9f);//left
    glVertex2f(-0.5f,-0.9f);//right
    glColor3ub(18, 173, 43);
    glVertex2f(-0.5f,-0.6f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.54f,-0.9f);//left
    glVertex2f(-0.56f,-0.9f);//right
    glColor3ub(217, 217, 217);
    glVertex2f(-0.65f,-0.6f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.54f,-0.9f);//left
    glVertex2f(-0.56f,-0.9f);//right
    glColor3ub(18, 173, 43);
    glVertex2f(-0.4f,-0.4f);//top
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.54f,-0.9f);//left
    glVertex2f(-0.56f,-0.9f);//right
    glColor3ub(217, 217, 217);
    glVertex2f(-0.4f,-0.6f);//top
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.64f,-0.9f);//left
    glVertex2f(-0.66f,-0.9f);//right
    glColor3ub(18, 173, 43);
    glVertex2f(-0.5f,-0.4f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.74f,-0.9f);//left
    glVertex2f(-0.76f,-0.9f);//right
    glColor3ub(18, 173, 43);
    glVertex2f(-0.6f,-0.6f);//top
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.64f,-0.9f);//left
    glVertex2f(-0.66f,-0.9f);//right
    glColor3ub(217, 217, 217);
    glVertex2f(-0.6f,-0.6f);//top
    glEnd();
/////////////////////////////////////////////////
       glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.74f,-0.9f);//left
    glVertex2f(-0.76f,-0.9f);//right
    glColor3ub(217, 217, 217);
    glVertex2f(-0.6f,-0.6f);//top
    glEnd();
       glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.84f,-0.9f);//left
    glVertex2f(-0.86f,-0.9f);//right
    glColor3ub(18, 173, 43);
    glVertex2f(-0.85f,-0.4f);//top
    glEnd();

       glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.94f,-0.9f);//left
    glVertex2f(-0.96f,-0.9f);//right
    glColor3ub(217, 217, 217);
    glVertex2f(-0.8f,-0.6f);//top
    glEnd();

      glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.9f,-0.9f);//left
    glVertex2f(-0.92f,-0.9f);//right
    glColor3ub(217, 217, 217);
    glVertex2f(-0.95f,-0.6f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-1.f,-0.9f);//left
    glVertex2f(-.98f,-0.9f);//right
    glColor3ub(18, 173, 43);
    glVertex2f(-0.85f,-0.4f);//top
    glEnd();

       glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.84f,-0.9f);//left
    glVertex2f(-0.86f,-0.9f);//right
    glColor3ub(217, 217, 217);
    glVertex2f(-0.7f,-0.4f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.79f,-0.9f);//left
    glVertex2f(-0.77f,-0.9f);//right
    glColor3ub(217, 217, 217);
    glVertex2f(-0.779f,-0.5f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.78f,-0.9f);//left
    glVertex2f(-0.76f,-0.9f);//right
    glColor3ub(18, 173, 43);
    glVertex2f(-0.69f,-0.5f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.4f,-0.9f);//left
    glVertex2f(-0.42f,-0.9f);//right
    glColor3ub(18, 173, 43);
    glVertex2f(-0.43f,-0.5f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.38f,-0.9f);//left
    glVertex2f(-0.4f,-0.9f);//right
    glColor3ub(18, 173, 43);
    glVertex2f(-0.3f,-0.6f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.3f,-0.9f);//left
    glVertex2f(-0.28f,-0.9f);//right
    glColor3ub(217, 217, 217);
    glVertex2f(-0.4f,-0.5f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.26f,-0.9f);//left
    glVertex2f(-0.24f,-0.9f);//right
    glColor3ub(217, 217, 217);
    glVertex2f(-0.2f,-0.5f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.26f,-0.9f);//left
    glVertex2f(-0.24f,-0.9f);//right
    glColor3ub(18, 173, 43);
    glVertex2f(-0.1f,-0.6f);//top
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-0.19f,-0.9f);//left
    glVertex2f(-0.21f,-0.9f);//right
    glColor3ub(217, 217, 217);
    glVertex2f(-0.3f,-0.5f);//top
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(.0f,-0.9f);//left
    glVertex2f(.01f,-0.9f);//right
    glColor3ub(18, 173, 43);
    glVertex2f(0.1f,-0.5f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-.2f,-0.9f);//left
    glVertex2f(-.22f,-0.9f);//right
    glColor3ub(18, 173, 43);
    glVertex2f(0.019f,-0.5f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-.13f,-0.9f);//left
    glVertex2f(-.15f,-0.9f);//right
    glColor3ub(217, 217, 217);
    glVertex2f(-0.1f,-0.6f);//top
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 100, 0);
    glVertex2f(-.08f,-0.9f);//left
    glVertex2f(-.06f,-0.9f);//right
    glColor3ub(217, 217, 217);
    glVertex2f(-0.07f,-0.5f);//top
    glEnd();
}
void ground()
{
    glBegin(GL_POLYGON);
	glColor3ub(102, 255, 51);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(-1.0f,0.0f);
	glVertex2f(1.0f, 0.0f);
    glVertex2f(1.f, -1.0);

    glEnd();
}
void river()
{
   glBegin(GL_QUADS);
   glColor3ub(38, 154, 214);
	//glColor3ub(0,122,204);
	glVertex2f(-1.0f,0.45f);
	glVertex2f(1.0f,0.45f);
	glVertex2f(1.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);
    glEnd();
}
void hut()
{
    glBegin(GL_POLYGON);
   glColor3ub(133,94,70);
    glVertex2f(-0.5f,0.2f);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(-0.18f,0.5f);
    glVertex2f(-0.58f,0.5f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(133,94,66);

    glVertex2f(-0.49f,0.2f);
    glVertex2f(-0.13f,0.2f);
    glVertex2f(-0.13f,-0.2f);
    glVertex2f(-0.49f,-0.2f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(133,94,66);

    glVertex2f(-0.58f,0.5f);
    glVertex2f(-0.63f,0.2f);

    glVertex2f(-0.61f,0.2f);

    glVertex2f(-0.61f,-0.15f);
    glVertex2f(-0.49f,-0.2f);
    glVertex2f(-0.17f,-0.2f);

    glEnd();
    glLineWidth(2);
     glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.5f,0.2f);
    glVertex2f(-0.1f,0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.49f,0.2f);
    glVertex2f(-0.49f,-0.2f);

    glColor3ub(0,0,0);
     glVertex2f(-0.13f,-0.2f);
    glVertex2f(-0.49f,-0.2f);

     glColor3ub(0,0,0);
     glVertex2f(-0.13f,-0.2f);
    glVertex2f(-0.13f,0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.5f,0.2f);
    glVertex2f(-0.58f,0.5f);

    glColor3ub(0,0,0);
    glVertex2f(-0.58f,0.5f);
    glVertex2f(-0.63f,0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.57f,0.445f);
    glVertex2f(-0.61f,0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.61f,0.2f);
    glVertex2f(-0.61f,-0.15f);

    glColor3ub(0,0,0);
    glVertex2f(-0.61f,-0.15f);
    glVertex2f(-0.49f,-0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(-0.18f,0.5f);

    glColor3ub(0,0,0);
    glVertex2f(-0.18f,0.5f);
    glVertex2f(-0.58f,0.5f);

    glEnd();
//door
     glBegin(GL_POLYGON);
    glColor3ub(210, 140, 99);
    glVertex2f(-0.35f,0.1f);
    glVertex2f(-0.22f,0.1f);    //main door
    glVertex2f(-0.22f,-0.2f);
    glVertex2f(-0.35f,-0.2f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2f(-0.35f,0.1f);
    glVertex2f(-0.22f,0.1f);
    glVertex2f(-0.22f,0.1f);
    glVertex2f(-0.22f,-0.2f);
    glVertex2f(-0.35f,0.1f);
    glVertex2f(-0.35f,-0.2f);
    glVertex2f(-0.285f,0.1f);
    glVertex2f(-0.285f,-0.2f);
    glEnd();
//window
   glBegin(GL_POLYGON);
    glColor3ub(186, 140, 99);

    glVertex2f(-0.44f,0.05f);
    glVertex2f(-0.38f,0.05f); //left window
    glVertex2f(-0.38f,-0.05f);
    glVertex2f(-0.44f,-0.05f);
    glEnd();
     glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.44f,0.05f);
    glVertex2f(-0.44f,-0.05f);
    glVertex2f(-0.38f,0.05f);
    glVertex2f(-0.38f,-0.05f);
    glVertex2f(-0.44f,0.05f);
    glVertex2f(-0.38f,0.05f);
    glVertex2f(-0.44f,-0.05f);
    glVertex2f(-0.38f,-0.05f);
    glVertex2f(-0.41f,0.05f);
    glVertex2f(-0.41f,-0.05f);
    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(210, 140, 99);
     glVertex2f(-0.51f,0.12f); //2nd door
    glVertex2f(-0.58f,0.14f);
    glVertex2f(-0.58f,-0.17f);
    glVertex2f(-0.51f,-0.2f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.58f,0.14f);
    glVertex2f(-0.58f,-0.17f);
    glVertex2f(-0.51f,0.12f);
    glVertex2f(-0.51f,-0.2f);
    glVertex2f(-0.58f,0.14f);
    glVertex2f(-0.51f,0.12f);
    glVertex2f(-0.545f,0.13f);
    glVertex2f(-0.545f,-0.185f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(186, 140, 99);
    glVertex2f(-0.14f,0.05f);
    glVertex2f(-0.2f,0.05f);   //rightwindow
    glVertex2f(-0.2f,-0.05f);
    glVertex2f(-0.14f,-0.05f);
    glEnd();
     glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.14f,0.05f);
    glVertex2f(-0.14f,-0.05f);
    glVertex2f(-0.2f,0.05f);
    glVertex2f(-0.2f,-0.05f);
    glVertex2f(-0.14f,0.05f);
    glVertex2f(-0.2f,0.05f);
    glVertex2f(-0.14f,-0.05f);
    glVertex2f(-0.2f,-0.05f);
    glVertex2f(-0.17f,0.05f);
    glVertex2f(-0.17f,-0.05f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192,192,192);
    glVertex2f(-.58,.5);
    glColor3ub(0,0,0);
    glVertex2f(-.5,.2);

    glVertex2f(-.1,0.2);
    glColor3ub(192,192,192);
    glVertex2f(-.18,.5);
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(-.58,.5);
glColor3ub(192,192,192);
    glVertex2f(-.63,.2);
glColor3ub(0,0,0);
    glVertex2f(-.61,0.2);

    glVertex2f(-.569,.45);
    glEnd();
}

void tree()
{

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-.78f,-0.15f);
    glVertex2f(-0.78f,0.23f);
    glVertex2f(-0.72f,0.23f);
    glVertex2f(-0.72f,-0.15f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.76f,0.23f);
    glVertex2f(-0.76f,0.3f);
    glVertex2f(-0.74f,0.3f);
    glVertex2f(-0.74f,0.23f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.74f,0.23f);
    glVertex2f(-0.71f,0.29f);
    glVertex2f(-0.7f,0.28f);
    glVertex2f(-0.72f,0.23f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.78f,0.23f);
    glVertex2f(-0.8f,0.28f);
    glVertex2f(-0.79f,0.29f);
    glVertex2f(-0.76f,0.23f);
    glEnd();


	 glBegin(GL_QUADS);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.85f,0.33f);
    glVertex2f(-0.85f,0.44f);
    glVertex2f(-0.65f,0.44f);
    glVertex2f(-0.65f,0.33f);
    glEnd();

 int i;

	GLfloat x=-.75f; GLfloat y=.33f; GLfloat radius =.06f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.68f; GLfloat b=.31f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.81f; GLfloat d=.31f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.87f; GLfloat f=.35f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-.61f; GLfloat h=.35f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat a1=-.61f; GLfloat b1=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c1=-.88f; GLfloat d1=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c1 + (radius * cos(i *  twicePi / triangleAmount)),
			    d1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e1=-.87f; GLfloat f1=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(e1, f1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e1 + (radius * cos(i *  twicePi / triangleAmount)),
			    f1+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g1=-.61f; GLfloat h1=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g1 + (radius * cos(i *  twicePi / triangleAmount)),
			    h1+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat e11=-.64f; GLfloat f11=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(e11, f11); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e11 + (radius * cos(i *  twicePi / triangleAmount)),
			    f11+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e12=-.75f; GLfloat f12=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(e12, f12); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e12 + (radius * cos(i *  twicePi / triangleAmount)),
			    f12+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	 glBegin(GL_QUADS);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.85f,0.33f);
    glVertex2f(-0.85f,0.44f);
    glVertex2f(-0.65f,0.44f);
    glVertex2f(-0.65f,0.33f);
    glEnd();

    GLfloat e123=-.8f; GLfloat f123=.5f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(e123, f123); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e123 + (radius * cos(i *  twicePi / triangleAmount)),
			    f123+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat e1232=-.7f; GLfloat f1232=.5f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(e1232, f1232); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e1232 + (radius * cos(i *  twicePi / triangleAmount)),
			    f1232+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void boat()
{
    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.2f, 0.4f);
	glVertex2f(-0.15f, 0.35f);
	glVertex2f(0.15f, 0.35f);
    glVertex2f(0.2f, 0.4f);
    glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 153, 0);
	glVertex2f(-0.13f, 0.4f);
	glVertex2f(-0.11f,0.48f);
	glVertex2f(-0.088f, 0.52f);
	glVertex2f(0.13f, 0.52f);
	glVertex2f(0.14f, 0.49f);
    glVertex2f(0.15f, 0.4f);
    glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,25,25);
	glVertex2f(-0.038f, 0.57f);
	glVertex2f(-0.038f, 0.73f);
	glVertex2f(-0.035f, 0.75f);
	glVertex2f(0.064f, 0.73f);
	glVertex2f(0.065f, 0.71f);
    glVertex2f(0.065f, 0.55f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(136,204,0);
	glVertex2f(0.0f, 0.52f);
	glVertex2f(0.0f, 0.79f);
	glVertex2f(0.01f, 0.79f);
	glVertex2f(0.01f, 0.52f);
	glEnd();
}

void Straw()
{
    glBegin(GL_POLYGON);
	glColor3ub(255, 219, 77);
	//right point
	glVertex2f(0.65f, -0.11f);
	//ground point
	glVertex2f(0.2f, -0.1f);

	glVertex2f(0.62f, 0.1f);
	glVertex2f(0.6f, 0.15f);
	glVertex2f(0.55f, 0.22f);
	glVertex2f(0.5f, 0.27f);
	glVertex2f(0.42f, 0.23f);
	glVertex2f(0.3f, 0.1f);
	glEnd();
	//stik
	glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
	glVertex2f(0.50f, 0.27f);
	glVertex2f(0.50f, 0.32f);
    glEnd();
}
void way()
{
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(-0.35f,-0.2f);
    glVertex2f(-0.22f,-0.2f);
    glVertex2f(-0.28f,-0.5f);
    glVertex2f(-0.43f,-0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(-0.43f,-0.5f);
    glVertex2f(-0.75f,-1.0f);
    glVertex2f(-0.56f,-1.0f);
    glVertex2f(-0.28f,-0.5f);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.38f,-0.3f);
    glVertex2f(0.6f,-1.0f);
    glVertex2f(0.4f,-1.0f);
    glVertex2f(0.3f,-0.3f);
    glEnd();


}
void fence()
{
     glLineWidth(4);
     glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f,-0.1f);
    glVertex2f(-0.6f,-0.1f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f,-0.05f);
    glVertex2f(-0.6f,-0.05f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f,0.0f);
    glVertex2f(-0.6f,0.0f);

     glColor3ub(255, 255, 102);
    glVertex2f(-1.0f,0.05f);
    glVertex2f(-0.6f,0.05f);

     glColor3ub(255, 255, 102);
    glVertex2f(-1.0f,0.1f);
    glVertex2f(-0.6f,0.1f);

     glColor3ub(255, 255, 102);
    glVertex2f(-0.95f,0.13f);
    glVertex2f(-0.95f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.9f,0.13f);
    glVertex2f(-0.9f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.85f,0.13f);
    glVertex2f(-0.85f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.8f,0.13f);
    glVertex2f(-0.8f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.75f,0.13f);
    glVertex2f(-0.75f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.7f,0.13f);
    glVertex2f(-0.7f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.65f,0.13f);
    glVertex2f(-0.65f,-0.12f);

    glEnd();
}
void fence2()
{
      glLineWidth(4);
     glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(1.0f,-0.1f);
    glVertex2f(0.6f,-0.1f);

    glColor3ub(255, 255, 102);
    glVertex2f(1.0f,-0.05f);
    glVertex2f(0.6f,-0.05f);

    glColor3ub(255, 255, 102);
    glVertex2f(1.0f,0.0f);
    glVertex2f(0.6f,0.0f);

     glColor3ub(255, 255, 102);
    glVertex2f(1.0f,0.05f);
    glVertex2f(0.6f,0.05f);

     glColor3ub(255, 255, 102);
    glVertex2f(1.0f,0.1f);
    glVertex2f(0.6f,0.1f);

     glColor3ub(255, 255, 102);
    glVertex2f(0.95f,0.13f);
    glVertex2f(0.95f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(0.9f,0.13f);
    glVertex2f(0.9f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(0.85f,0.13f);
    glVertex2f(0.85f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(0.8f,0.13f);
    glVertex2f(0.8f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(0.75f,0.13f);
    glVertex2f(0.75f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(0.7f,0.13f);
    glVertex2f(0.7f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(0.65f,0.13f);
    glVertex2f(0.65f,-0.12f);


    glEnd();
}
void well()
{

glBegin(GL_POLYGON);
    glColor3ub(204, 51, 0);
    glVertex2f(0.9f,-0.35f);
    glVertex2f(0.9f,-0.55f);
    glVertex2f(0.85f,-0.575f);
    glVertex2f(0.8f,-0.59f);
    glVertex2f(0.7f,-0.59f);
    glVertex2f(0.65f,-0.575f);
    glVertex2f(0.6f,-0.55f);
    glVertex2f(0.6f,-0.35f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 102, 51);
    glVertex2f(0.9f,-0.35f);
    glVertex2f(0.85f,-0.375f);
    glVertex2f(0.8f,-0.38f);
    glVertex2f(0.7f,-0.38f);
    glVertex2f(0.65f,-0.375f);
    glVertex2f(0.6f,-0.35f);
    glVertex2f(0.65f,-0.33f);
    glVertex2f(0.7f,-0.325f);
     glVertex2f(0.8f,-0.325f);
     glVertex2f(0.85f,-0.33f);
    glEnd();

    glLineWidth(5);
     glBegin(GL_LINES);

    glColor3ub(204, 51, 0);
     glVertex2f(0.9f,-0.35f);
    glVertex2f(0.85f,-0.33f);//
    glVertex2f(0.85f,-0.33f);
    glVertex2f(0.8f,-0.325f);//
    glVertex2f(0.8f,-0.325f);
    glVertex2f(0.7f,-0.325f);//
    glVertex2f(0.7f,-0.325f);
    glVertex2f(0.65f,-0.33f);//
     glVertex2f(0.65f,-0.33f);
     glVertex2f(0.6f,-0.35f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(194, 194, 163);
    glVertex2f(0.59f,-0.43f);
    glVertex2f(0.57f,-0.5f);
    glVertex2f(0.52f,-0.5f);
    glVertex2f(0.5f,-0.43f);
    glVertex2f(0.52f,-0.42f);
    glVertex2f(0.57f,-0.42f);
    glEnd();
//bucket w
    glBegin(GL_POLYGON);
    glColor3ub(38, 154, 214);
    glVertex2f(0.585f,-0.43f);
    glVertex2f(0.568f,-0.44f);
    glVertex2f(0.528f,-0.44f);
    glVertex2f(0.505f,-0.43f);
    glVertex2f(0.528f,-0.425f);
    glVertex2f(0.57f,-0.425f);
    glEnd();

}

 void house(){
//body
     glBegin(GL_QUADS);
    glColor3ub(205, 205, 205);
    glVertex2f(.15,-.0);
    glVertex2f(.15,-.3);
    glVertex2f(.5,-.3);
    glVertex2f(.5,-.0);
    glEnd();
//door
    glBegin(GL_QUADS);
    glColor3ub(342, 0, 1);
    glVertex2f(.3,-0.1);
    glVertex2f(.3,-.3);
    glVertex2f(.38,-.3);
    glVertex2f(.38,-.1);

    glVertex2f(.2,-.12);
    glVertex2f(.2,-.2);
    glVertex2f(.27,-.2);
    glVertex2f(.27,-.12);

    glVertex2f(.4,-.12);
    glVertex2f(.4,-.2);
    glVertex2f(.47,-.2);
    glVertex2f(.47,-.12);
    glEnd();

//roof
    glBegin(GL_POLYGON);
    glColor3ub(192,192,192);
    glVertex2f(.19,.2);
    glColor3ub(0,0,0);
    glVertex2f(.1,0.);

    glVertex2f(.57,0.);
    glColor3ub(192,192,192);
    glVertex2f(.48,.2);
    glEnd();



    glBegin(GL_QUADS);


    glColor3ub(204, 0, 0);
    glVertex2f(.14,-.29);
    glVertex2f(.14,-.31);
    glVertex2f(.51,-.31);
    glVertex2f(.51,-.29);
    glEnd();
//right win
glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.435f,-0.12f);
    glVertex2f(0.435f,-0.2f);
glEnd();
//left win
glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.235f,-0.12f);
    glVertex2f(0.235f,-0.2f);
glEnd();
//door
glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.34f,-0.1f);
    glVertex2f(0.34f,-0.29f);
glEnd();
    glLoadIdentity();}
void flower()
{
     glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.35f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.05f, -0.35f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.075f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.0745f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
    glEnd();

     glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.55f, -0.35f);
	glVertex2f(-0.5f, -0.4f);//
	glVertex2f(-0.55f, -0.35f);
	glVertex2f(-0.5f, -0.4f);//
	glVertex2f(-0.527f, -0.33f);
	glVertex2f(-0.5f, -0.4f);//
	glVertex2f(-0.527f, -0.33f);
	glVertex2f(-0.5f, -0.4f);//
	glVertex2f(-0.5f, -0.3f);
	glVertex2f(-0.5f, -0.4f);//
	glVertex2f(-0.575f, -0.37f);
	glVertex2f(-0.5f, -0.4f);//
	glVertex2f(-0.5745f, -0.37f);
	glVertex2f(-0.5f, -0.4f);//


	glVertex2f(-0.5f, -0.4f);
	glVertex2f(-0.42f, -0.37f);//

	glVertex2f(-0.5f, -0.4f);
	glVertex2f(-0.45f, -0.34f);//

	glVertex2f(-0.5f, -0.4f);
	glVertex2f(-0.48f, -0.33f);//
    glEnd();


    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;


	GLfloat e=-.05f; GLfloat f=-.35f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.35f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.3f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat a2=-0.5f; GLfloat b2=-0.3f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(a2, b2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a2 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b2 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat a3=-0.45f; GLfloat b3=-0.34f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a3, b3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a3 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b3 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a4=-0.55f; GLfloat b4=-0.34f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a4, b4); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a4 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b4 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}
void treeflower()
{
    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;


	GLfloat e=-.68f; GLfloat f=.35f; GLfloat radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(218, 247, 166);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e1=-.72f; GLfloat f1=.35f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(218, 247, 166);
		glVertex2f(e1, f1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f1+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat e2=-.7f; GLfloat f2=.33f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(218, 247, 166);
		glVertex2f(e2, f2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e2 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f2+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e3=-.7f; GLfloat f3=.372f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(218, 247, 166);
		glVertex2f(e3, f3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e3 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f3+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e4=-.7f; GLfloat f4=.35f;  radius11 =.011f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(e4, f4); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e4 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f4+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x=-.85f; GLfloat y=.392f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius11 * cos(i *  twicePi / triangleAmount)),
			    y+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x1=-.87f; GLfloat y1=.37f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    y1+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x2=-.83f; GLfloat y2=.37f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    y2+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x4=-.85f; GLfloat y4=.349f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(x4, y4); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    y4+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x5=-.85f; GLfloat y5=.37f;  radius11 =.011f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255,233,0);
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    y5+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t=-.7f; GLfloat u=.468f;  radius11 =.017f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 204);
		glVertex2f(t, u); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t1=-.723f; GLfloat u1=.494f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 204);
		glVertex2f(t1, u1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u1+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t2=-.677f; GLfloat u2=.494f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 204);
		glVertex2f(t2, u2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t2 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u2+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat t3=-.7f; GLfloat u3=.517f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 204);
		glVertex2f(t3, u3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t3 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u3+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat t33=-.7f; GLfloat u33=.494f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(251,219,101);
		glVertex2f(t33, u33); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t33 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u33+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//////////////////////////////





	GLfloat ea=-.68f; GLfloat fa=-.65f; radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(218, 247, 166);
		glVertex2f(ea, fa); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            ea + (radius11 * cos(i *  twicePi / triangleAmount)),
			    fa+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e11=-.72f; GLfloat f11=-.65f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(218, 247, 166);
		glVertex2f(e11, f11); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e11 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f11+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat e22=-.7f; GLfloat f22=-.63f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(218, 247, 166);
		glVertex2f(e22, f22); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e22 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f22+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e33=-.7f; GLfloat f33=-.672f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(218, 247, 166);
		glVertex2f(e33, f33); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e33 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f33+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e44=-.7f; GLfloat f44=-.65f;  radius11 =.011f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(e44, f44); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e44 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f44+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t11=-.9f; GLfloat u11=-.668f;  radius11 =.017f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 204);
		glVertex2f(t11, u11); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t11 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u11+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t112=-.923f; GLfloat u112=-.694f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 204);
		glVertex2f(t112, u112); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t112 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u112+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t21=-.877f; GLfloat u21=-.694f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 204);
		glVertex2f(t21, u21); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t21 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u21+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat t31=-.9f; GLfloat u31=-.717f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 204);
		glVertex2f(t31, u31); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t31 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u31+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat t331=-.9f; GLfloat u331=-.694f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(251,219,101);
		glVertex2f(t331, u331); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t331 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u331+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

/////
GLfloat t117=-.3f; GLfloat u117=-.668f;  radius11 =.017f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(93, 63, 211);
		glVertex2f(t117, u117); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t117 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u117+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t1127=-.323f; GLfloat u1127=-.694f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(93, 63, 211);
		glVertex2f(t1127, u1127); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t1127 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u1127+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t217=-.277f; GLfloat u217=-.694f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(93, 63, 211);
		glVertex2f(t217, u217); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t217 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u217+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat t317=-.3f; GLfloat u317=-.717f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(93, 63, 211);
		glVertex2f(t317, u317); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t317 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u317+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat t7331=-.3f; GLfloat u7331=-.694f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(240, 31, 31);
		glVertex2f(t7331, u7331); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t7331 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u7331+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	///////
	GLfloat t117a=-.5f; GLfloat u117a=-.568f;  radius11 =.017f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 204);
		glVertex2f(t117a, u117a); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t117a + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u117a+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t1127a=-.523f; GLfloat u1127a=-.594f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 204);
		glVertex2f(t1127a, u1127a); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t1127a + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u1127a+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t217a=-.477f; GLfloat u217a=-.594f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 204);
		glVertex2f(t217a, u217a); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t217a + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u217a+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat t317a=-.5f; GLfloat u317a=-.617f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 204);
		glVertex2f(t317a, u317a); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t317a + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u317a+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat t7331a=-.5f; GLfloat u7331a=-.594f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(251,219,101);
		glVertex2f(t7331a, u7331a); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t7331a + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u7331a+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//////

GLfloat t117s=-.0f; GLfloat u117s=-.678f;  radius11 =.017f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(236, 255, 33);
		glVertex2f(t117s, u117s); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t117s + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u117s+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t1127s=.0233f; GLfloat u1127s=-.696f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(236, 255, 33);
		glVertex2f(t1127s, u1127s); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t1127s + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u1127s+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t217s=-.0233f; GLfloat u217s=-.696f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(236, 255, 33);
		glVertex2f(t217s, u217s); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t217s + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u217s+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat t317s=-.0f; GLfloat u317s=-.72f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(236, 255, 33);
		glVertex2f(t317s, u317s); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t317s + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u317s+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat t7331s=-.0f; GLfloat u7331s=-.696f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(240, 31, 31);
		glVertex2f(t7331s, u7331s); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t7331s + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u7331s+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	///////



	////


	GLfloat t117sqc=-.599f; GLfloat u117sqc=-.79f;  radius11 =.017f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(236, 255, 33);
		glVertex2f(t117sqc, u117sqc); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t117sqc + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u117sqc+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t1127sqc=-.599f; GLfloat u1127sqc=-.742f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(236, 255, 33);
		glVertex2f(t1127sqc, u1127sqc); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t1127sqc + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u1127sqc+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t217sqc=-.58f; GLfloat u217sqc=-.765f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(236, 255, 33);
		glVertex2f(t217sqc, u217sqc); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t217sqc + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u217sqc+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat t317sqc=-.62f; GLfloat u317sqc=-.765f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(236, 255, 33);
		glVertex2f(t317sqc, u317sqc); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t317sqc + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u317sqc+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat t7331sqc=-.6f; GLfloat u7331sqc=-.765f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(240, 31, 31);
		glVertex2f(t7331sqc, u7331sqc); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t7331sqc + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u7331sqc+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	////

	GLfloat t117sqcg=-.299f; GLfloat u117sqcg=-.59f;  radius11 =.017f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(218, 247, 166);
		glVertex2f(t117sqcg, u117sqcg); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t117sqcg + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u117sqcg+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t1127sqcg=-.299f; GLfloat u1127sqcg=-.542f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(218, 247, 166);
		glVertex2f(t1127sqcg, u1127sqcg); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t1127sqcg + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u1127sqcg+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat t217sqcg=-.28f; GLfloat u217sqcg=-.565f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(218, 247, 166);
		glVertex2f(t217sqcg, u217sqcg); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t217sqcg + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u217sqcg+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat t317sqcg=-.32f; GLfloat u317sqcg=-.565f;  radius11 =.016f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(218, 247, 166);
		glVertex2f(t317sqcg, u317sqcg); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t317sqcg + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u317sqcg+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat t7331sqcg=-.3f; GLfloat u7331sqcg=-.565f;  radius11 =.014f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(240, 31, 31);
		glVertex2f(t7331sqcg, u7331sqcg); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            t7331sqcg + (radius11 * cos(i *  twicePi / triangleAmount)),
			    u7331sqcg+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void display1(void) {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(2);
    sky2();
    moon();
    stars();
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    cloud2();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position22,0.0f, 0.0f);
    bird();
    glPopMatrix();
    backgroundtree();
    river();
    glPushMatrix();
    boat();
    glPopMatrix();
    ground();
    way();
    fence();
    fence2();
    tree();
    well();
    Straw();
    hut();
    grass();

    grass2();
    treeflower();
    grass3();
    house();
    flower();
	glFlush();

}
void display(void) {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(2);

    sky();

    sun();
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    cloud2();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position22,0.0f, 0.0f);
    bird();
    glPopMatrix();
    backgroundtree();
    river();
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    boat();
    glPopMatrix();
    ground();
    way();
    fence();
fence2();
    tree();
    well();
    Straw();
    hut();
    house();
flower();
grass();

grass2();
treeflower();
grass3();

	glFlush();


}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	    case  'a':

	        glutInitWindowSize(1240, 750);
            glutCreateWindow("Anik's Village Day");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display);
            break;
            break;
        case 's':

	        glutInitWindowSize(1240, 750);
            glutCreateWindow("Anik's Village Night");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display1);
            break;
    }
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	init();
    glutInitWindowSize(1240, 750);

    glutCreateWindow("Anik's Village Day");

    glutDisplayFunc(display);
    glutTimerFunc(100,cloud,0);
    glutTimerFunc(100, boat, 50);
    glutTimerFunc(100, birdd, 0);

    glutKeyboardFunc(handleKeypress);
    glutMainLoop();
    return 0;
}
