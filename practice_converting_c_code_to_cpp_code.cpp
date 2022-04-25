/*
struct Rectangle
{
    int length;
    int breadth;
};

void intitialize (struct Rectangle *rect, int l, int b) {
    rect->length = l;
    rect->breadth = b;
}


int area (struct Rectangle rect) {
    return rect.length * rect.breadth;
}


void changeLength (struct Rectangle *r, int l) {
    r->length = l;
}


int main () {
    struct Rectangle r;

    initialize(&r, 10, 5);
    area(r);
    changeLength(&r, 20);
}

*/


class Rectangle
{
/* data menbers */
private:
    int length;
    int breadth;
public:
    /* void initialize(int l, int b) {
        length = l;
        breadth = b;
    } */
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    };

    ~Rectangle() {
        length = 10;
        breadth = 5;
    }

    int area() {
        return length * breadth;
    }

    void changeLength(int l) {
        length = l;
    }
};


int main () {
    Rectangle r(10, 5);

    // r.initialize(10, 5);
    r.area();
    r.changeLength(20);
}

