#pragma once

#include "Vertex.h"

using namespace std;

class Graph {
public:
    
    /*! A collection of vertices */
    vector<Vertex*> items;
    
    /*! A method to add a vertex to the items vector */
    void add(Vertex* d){
        items.push_back(d);
            d->ref();
    }
    
    /*! A method to display the graph as pairs of vertices */
    void print (){
        //insert your code here
  for(int i = 0; i <items.size(); i = i+2){
    cout <<items[i] -> getLabel()<< " - " <<items[i+1] -> getLabel() << endl;
  }
        //call label
    }
    
    /*! A method to free up all the space taken up by the graph */
    void deleteAll(){
        //insert your code here

            for(int i = 0; i < sizeof(items); i++){
              items[i]->unref();
          }
        }

    };

