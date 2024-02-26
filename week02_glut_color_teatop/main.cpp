#include <GL/glut.h> //GLUT 18

void display() //自己
{
    glColor3f(192/255.00,235/255.00,215/255.00);
    glutSolidTeapot(0.3); //自己
    glColor3f(249/255.00,141/255.00,116/255.00);
    glutSolidTeapot(0.15);
    glutSwapBuffers(); //自己
}

int main(int argc, char *argv[]) //138
{
    glutInit(&argc, argv); //140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); //143
    glutCreateWindow("我照著老師抄的喔"); //145
    glutDisplayFunc(display); //148
    glutMainLoop(); //174
}
