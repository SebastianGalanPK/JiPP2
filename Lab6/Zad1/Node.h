//
// Created by filip on 11/14/21.
//

#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H


class Node {
    friend double pointsDistance(Node a, Node b);

private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);
};

double pointsDistance(Node a, Node b);

#endif //JIPP2_NODE_H