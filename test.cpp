#include <stdio.h>

struct vector{
    //float magnitude = 0.0f;
    float x_comp = 0.0f;
    float y_comp = 0.0f;
};

vector vector_fiat(float x_comp, float y_comp)
{
    vector v;
  //  v.magnitude = magnitude;
    v.x_comp = x_comp;
    v.y_comp = y_comp;
    return v;
}

vector add(const vector* a, const vector* b)
{
    vector s;
    
    s.x_comp = a.x_comp + b.x_comp;
    s.y_comp = a.y_comp + b.y_comp;
   // s.magnitude = a.magnitude + b.magnitude;
    return s;
}

struct object{
    vector position; 
    vector velocity;
    //vector acceleration;
    vector netforce;  
    float mass;
};

object object_fiat(float x, float y, float dx, float dy, float d2x, float d2y, float mass)
{
    object o;
    
}

void instantaneous(object *o)
{
    //change position
    o.position = add(o.position,o.velocity);
    
    //change velocity
    vector c = o.netforce; 
   // c.magnitude /= o.mass; //since a = F/m
    o.velocity = add(o.velocity,c); //v = v + a
    
}


int main()
{
    
}
