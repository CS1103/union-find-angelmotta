#include <iostream>


int find(int x, int parent[9]){
    /*for(int i=0; i<9;i++){
        std::cout << parent[i] << " ";
    }*/
    if(x == parent[x]){     // caso base
        return x;
    }
    else return find(parent[x],parent);
}

int main() {

    int parent[9] = {0,0,0,1,5,5,4,0,4};  // array de padres de cada nodo

    /*for(int i=0; i < n; i++){
        parent[i] = i;  // Cada vertice/nodo tiene como padre a si mismo
    }*/

    std::cout << find(8,parent) << std::endl;
    return 0;
}
