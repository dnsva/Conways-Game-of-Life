//Conway's Game of Life

#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <thread>
#include "header.h"

using namespace std;

int total_rows, total_cols;
vector<vector<bool>>current_status;
vector<vector<bool>>new_status;

void setup(){

    int choice;
    cout<<"Would you like to:\n1) Setup your own Game\n2) Choose a pre-setup Game\n3) Quit\n> ";
    cin>>choice;

    if(choice == 1){
        //rows & cols setup
        cout<<"How many rows? (>1)\n> ";
        cin>>total_rows;
        while(total_rows <= 1){
            cout<<"Invalid input! How many rows? (>1)\n> ";
            cin>>total_rows;
        }

        cout<<"How many cols? (>1)\n> ";
        cin>>total_cols;
        while(total_cols <= 1){
            cout<<"Invalid input! How many cols? (>1)\n> ";
            cin>>total_cols;
        }

        //set all cells to false
        for(int i = 0; i<total_rows; ++i){
            vector<bool>temp;
            for(int j = 0; j<total_cols; ++j){
                temp.push_back(false);
            }
            current_status.push_back(temp);
            temp.clear();
        }

        cout<<"Board created!\n";
        
        cout<<"Enter number of cells to fill\n> ";
        int total_cells;
        cin>>total_cells;
        while(total_cells <= 0){
            cout<<"Please enter a number greater than zero\n> ";
            cin>>total_cells;
        }

        cout<<"Enter the row and coloumn position for each cell separated by a space. Press the enter key after each pair.\n> ";
        for(int i = 0; i<total_cells; ++i){
            int r, c;
            cin>>r>>c;
            while(r > total_rows){
                cout<<"ERROR, this row does not exist. This board has "<<total_rows<<" rows. Try again.\n> ";
                cin>>r;
            }
            while(c > total_cols){
                cout<<"ERROR, this coloumn does not exist. This board has "<<total_cols<<" cols. Try again.\n> ";
                cin>>c;
            }
            current_status[r-1][c-1] = true;
        }
    }else if(choice == 2){
        cout<<"\tChoose from:\n\t1) The Pulsar\n\t2) David Hilbert\n\t3) Figure 8\n\t4) 52513M\n\t5) Bi-Block Fuse\n\t> ";
        cin>>choice;
        if(choice == 1){
            current_status = the_pulsar();
            total_rows = 13;
            total_cols = 12;
        }else if(choice == 2){
            current_status = david_hilbert();
            total_rows = 26;
            total_cols = 33;
        }else if(choice == 3){
            current_status = figure_8();
            total_rows = 7;
            total_cols = 7;
        }else if(choice == 4){
            current_status = five_m();
            total_rows = 16;
            total_cols = 16;
        }else if(choice == 5){
            current_status = bi_block();
            total_rows = 7;
            total_cols = 48;
        }

    }else if(choice == 3){
        cout<<"Quitting...\n";
        exit(0);
    }

    cout<<"Board:\n";
    for(int i = 0; i<total_rows; ++i){
        cout<<"{";
        for(int j = 0; j<total_cols; ++j){
            if(current_status[i][j]){
               cout<<"██"; 
            }else{
                cout<<"░░";
            }
        }
        cout<<"},\n";
    }
    new_status = current_status;

    cout<<"Now starting Conway's Game of Life...\n";

}

int count_neighbours(int r, int c){

    int neighbours = 0;

    for(int y = max(r-1, 0); y <= min(r+1, total_rows-1); ++y){
        for(int x = max(c-1, 0); x <= min(c+1, total_cols-1); ++x){
            if(y == r && x == c){
                continue;
            }else{
                neighbours += int(current_status[y][x]);
            }
        }
    }
    return neighbours;   
}


void run(){

    /*
    Any live cell with two or three live neighbours survives.
    Any dead cell with three live neighbours becomes a live cell.
    All other live cells die in the next generation. Similarly, all other dead cells stay dead.
    */

    int counter = 1;

    while(counter == 1 || current_status != new_status){

        if(counter != 1){
            current_status = new_status;
        }
        
        cout<<"GENERATION "<<counter<<"\n";

        for(int i = 0; i<total_rows; ++i){
            for(int j = 0; j<total_cols; ++j){
                if(new_status[i][j]){
                    cout<<"██";
                }else{
                    cout<<"░░";
                }
            }
            cout<<"\n";
        }

        for(int i = 0; i<total_rows; ++i){
            for(int j = 0; j<total_cols; ++j){
                int neighbours = count_neighbours(i, j);

                if(current_status[i][j]){ //alive
                    if(neighbours == 2 || neighbours == 3){
                        new_status[i][j] = true;
                    }else{
                        new_status[i][j] = false;
                    }
                }else{//dead
                    if(neighbours == 3){
                        new_status[i][j] = true;
                    }
                }
            }
        }
        
        ++counter;
        this_thread::sleep_for(chrono::milliseconds(100));
        printf("\033[2J");
    }

}

int main(){

    setup();
    run();

    cout<<"Finished\n";
}
