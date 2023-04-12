#include <iostream>
#define _size_of_massive 1000
using namespace std;
class my_queue{
private:
    ///hmmm...weird block without any data, don't u mind?
public:
    int *_queue ;///Main array for our data.
    int _i,_j,_k;///Just a counters. Adding new number, Showing our queue, Deleting number correspondingly.

   ///Default constructor(and the main just in fact :D).
    my_queue():
        _i(0),
        _j(0),
        _k(0)
        {constructor_of_array();}

    ///Initializing of array
    void constructor_of_array(){
        _queue = new int[_size_of_massive];
        for(int i= 0;i<_size_of_massive;i++){
            _queue[i]=0;}
        cout<< "yep,I am now created and ready to go (:"<<endl;}

    ///Tragedy: "Killing the array"(cleaning-up the memory).
    void destructor_of_array(){
    delete [] _queue;
    cout<<"|-----------------------------------------------------|"<<endl;
    cout<<"|W8, don't do this, i did everything u asked me to do.|"<<endl;
    cout<<"|What have i done to u? :=(                           |"<<endl;
    cout<<"|I'm just a little array, pls don't kill me.          |"<<endl;
    cout<<"|A bloodcurdling scream...Silence...                  |"<<endl;
    cout<<"|-----------------------------------------------------|"<<endl;
    }

    ///Method for adding a number to the queue
    void add(){
        int data;
        if(_i == _size_of_massive){
            cout<<"Queue is already full of numbers, try to del some and try again."<<endl;}
        else{
        cout<<"Enter number u wana add : ";
        cin >> data;
        _queue[_i] = data;
        _i++;}}

    ///Method for deleting the first number in queue.
    void deleting(){
            for(int i=0;i<_size_of_massive;i++){

    ///If number(as default) = 0, we go to the next number and checking it.
    ///So on till the number, which will be !=0.
                if(_queue[_k]== 0){
                    _k++;}

                else{

    ///So if number isn't zero,we set it 0, and finish deleting.
                    _queue[_k]=0;
                    _k=0;
                    break;}
            }
        }

    ///Method for printing our queue in format: top-bottom(from first one in queue till last one).
    void show(){
        cout <<"This is your queue : "<<endl;
        for(;_j<_i;_j++){

    ///We go through the array, if number is zero, we skip this number.
            if(_queue[_j]==0){}

    ///In other case we print number.
            else{
                cout<<_queue[_j]<<endl;
                }
            }
        _j=0;///Just reseting the counter to start again from zero-element of array.
        }
};




int main(){
    my_queue data;///Creating the object of class.
    string test = "smf";///Just for entering the loop.
    while(test != "stop"){
        cout <<"\nWana add number to the queue? Write 'add'"<<endl;
        cout <<"Wana delete number from the queue? Write 'del'"<<endl;
        cout <<"Wana show queue? write 'show'"<<endl;
        cout <<"If u wana stop working with queue, Write 'stop'"<<endl;
        cin>>test;
    ///Methods calling.
        if(test == "add"){
            data.add();};

        if(test == "del"){
            data.deleting();};

        if(test == "show"){
            data.show();}

        data._j=0;}
    ///Of-course cleaning up the memory, before finishing the program.
        data.destructor_of_array();
}

