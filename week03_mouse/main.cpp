#include <GL/glut.h> //GLUT 18
#include <stdio.h>
void display() //�ۤv
{
    glutSolidTeapot(0.3); //�ۤv
    glutSwapBuffers(); //�ۤv
}
void mouse (int button, int state, int x, int y)
{
    // printf("Hello World\n");
    // printf("%d %d %d %d\n",button,state,x,y);
    if (state==GLUT_DOWN){
        printf ("glVertex2f((%d-150)/150,-(%d-150)/150)\n",x,y);
    }
}
int main(int argc, char *argv[]) //138
{
    glutInit(&argc, argv); //140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); //143
    glutCreateWindow("week03_mouse"); //145
    glutDisplayFunc(display); //148
    glutMouseFunc(mouse);//�]�wmouse�禡
    glutMainLoop(); //174
}
