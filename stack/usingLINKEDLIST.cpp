#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node
{
    char data;
    struct Node *next;
} *top = NULL;
void push(char x)
{
    struct Node *t;
    t = new Node;
    if (t == NULL)
        cout << "stack is full" << endl;
    else
    {

        t->data = x;
        t->next = top;
        top = t;
    }
}
char pop()
{
    int x;
    struct Node *t;
    if (top == NULL)
        cout << "stack is empty" << endl;
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}
void display()
{
    struct Node *p;
    p = top;
    while (p)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

int isbalanced(char *exp)
{
    int i, x;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
            push(exp[i]);
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (top == NULL)
                return 0;
            pop();
            x = pop();
            if (exp[i] != x)
                cout << "error";
        }
    }
    if (top == NULL)
        return 1;
    else
        return 0;
}
int pre(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '\\')
        return 2;
    return 0;
}
int isoperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '\\')
        return 0;
    else
        return 1;
}

char *intopost(char *infinix)
{
    int i = 0, j = 0;
    char *postfix;
    int len = strlen(infinix);

    postfix = (char *)malloc((len + 2) * sizeof(char));
    while (infinix[i] != '\0')
    {
        if (isoperand(infinix[i]))
            postfix[j++] = infinix[i++];
        else
        {
            if (pre(infinix[i]) > pre(top->data))
                push(infinix[i++]);
            else
            {
                postfix[j++] = pop();
            }
        }
    }
    while (top != NULL)
        postfix[j++] = pop();
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infinix = "a+b*c";
    // push('#');
    char *postfix = intopost(infinix);

    cout << postfix;

    return 0;
}