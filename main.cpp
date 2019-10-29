#include <iostream>
#include <fstream>
#include <typeinfo>


using namespace std;


class Cuerpo{
    public:
        double posx, posy, masa;

        void init(unsigned int seed);
};

class Planeta : public Cuerpo {
    
};

void init(){

}


int main(int argc, char *argv[]){
    if(argc<5){
        cout << "nasteroids-seq: Wrong arguments."<< endl <<"Correct use:"<< endl <<"nasteroids-seq num_asteroides num_iteraciones num_planetas semilla"<<endl;
        return -1;
    }

    int num_asteroides = atoi(argv[1]);     //argv[1]=num_asteroides
    int num_iteraciones = atoi(argv[1]);    //argv[2]=num_iteraciones
    int num_planetas = atoi(argv[1]);       //arg[3]=num_planetas
    int semilla = atoi(argv[1]);            //arg[4]=semilla
    
    ofstream init_file ("init_conf.txt");
    for(int i=1; i<argc; i++ ){
        init_file << argv[i] << " ";
    }
    init_file << endl;
    init_file.close();
    
    return 0;

}