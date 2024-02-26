#include <GL/glut.h> //GLUT 18
#include <math.h>
void myCircle(float cx,float cy,float r)
{
    glBegin(GL_POLYGON);
    for (float a=0;a<=3.14159265358979323846*2;a+=0.1){
        glVertex2f( r*cos(a)+cx, r*sin(a)+cy );
    }
    glEnd();
}
void display() //自己
{
    glColor3f(1,1,1);myCircle(0,0,1);
    glColor3f(0,0,0);myCircle(-0.5,+0.5,0.3);
    glColor3f(0,0,0);myCircle(+0.5,+0.5,0.3);
    glColor3f(0,0,0);myCircle(0,-0.3,0.7);
    glutSwapBuffers();
}

int main(int argc, char *argv[]) //138
{
    glutInit(&argc, argv); //140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); //143
    glutCreateWindow("我照著老師抄的喔"); //145
    glutDisplayFunc(display); //148
    glutMainLoop(); //174
}
