#include <GL/glut.h> //GLUT 18
#include <math.h>
void display() //自己
{
    glBegin(GL_POLYGON);
    for (float a=0;a<=3.14159265358979323846*2;a+=0.1){
        glVertex2f( cos(a), sin(a) );
    }
    glEnd();
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
