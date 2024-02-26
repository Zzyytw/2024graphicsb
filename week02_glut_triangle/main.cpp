#include <GL/glut.h> //GLUT 18

void display() //自己
{
    glBegin(GL_POLYGON);
        glColor3f(1,0,0);glVertex2f(0,1);
        glColor3f(0,1,0);glVertex2f(1,-0.6);
        glColor3f(0,0,1);glVertex2f(-1,-0.6);
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
