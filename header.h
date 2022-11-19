

#include <stdlib.h>

using namespace std;

//1 - The Pulsar
vector<vector<bool>> the_pulsar(){
    vector<vector<bool>> v = {
    {false, false, true , true , true , false, false, true , true , true , false, false },
    {false, false, false, false, false, false, false, false, false, false, false, false },
    {true , false, false, false, false, true , true , false, false, false, false, true },
    {true , false, false, false, false, true , true , false, false, false, false, true },
    {true , false, false, false, false, true , true , false, false, false, false, true },
    {false, false, true , true , true , false, false, true , true , true , false, false },

    {false, false, false, false, false, false, false, false, false, false, false, false },

    {false, false, true , true , true , false, false, true , true , true , false, false },
    {true , false, false, false, false, true , true , false, false, false, false, true },
    {true , false, false, false, false, true , true , false, false, false, false, true },
    {true , false, false, false, false, true , true , false, false, false, false, true },
    {false, false, false, false, false, false, false, false, false, false, false, false },
    {false, false, true , true , true , false, false, true , true , true , false, false }
    };
    //rows = 13
    //cols = 12
    return v;
}

//2 - David Hilbert
vector<vector<bool>> david_hilbert(){
    vector<vector<bool>> v = {
        {false, false, false, false, false, false, false, true , true , false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , true , false, false, false, false, false, false, false },
        {false, false, false, false, false, false, false, false, true , false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , false, false, false, false, false, false, false, false },
        {false, false, false, false, false, false, true , false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , false, false, false, false, false, false },
        {false, false, false, false, false, false, true , true , true , true , true , false, false, false, false, false, false, false, false, false, false, false, true , true , true , true , true , false, false, false, false, false, false },
        {false, false, false, false, false, false, false, false, false, false, true , false, false, false, false, false, false, false, false, false, false, false, true , false, false, false, false, false, false, false, false, false, false },
        {false, false, false, false, true , true , true , true , false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , true , true , true , false, false, false, false },
        {false, false, false, false, true , false, false, true , false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , false, false, true , false, false, false, false },
        {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , false, false, false, false, false, false, false, false, false, false, false },
        {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , false, false, false, false, false, false, false, false, false, false, false },
        {false, false, false, false, false, false, false, false, false, true , false, false, false, false, true , true , false, true , true , false, false, true , false, true , true , false, false, false, false, false, false, false, false },
        {false, false, false, false, false, false, false, false, true , true , true , false, false, false, true , true , false, true , false, false, false, false, false, false, true , true , false, false, false, false, false, false, false },
        {false, false, false, false, false, false, false, true , false, false, true , true , false, false, false, false, false, false, true , false, false, false, false, false, false, false, false, false, false, false, false, false, false },
        {false, false, false, false, false, false, false, true , true , true , false, false, false, false, false, false, false, false, false, false, false, false, true , false, false, false, false, false, false, false, false, false, false },
        {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , false, true , false, false, false, false, false, false, false, false },
        {false, false, false, true , true , false, false, false, false, false, false, false, false, false, false, false, true , true , false, false, false, false, true , false, false, true , false, false, true , true , false, false, false },
        {false, false, false, true , false, false, false, false, false, false, false, false, false, false, false, false, true , true , false, false, false, false, false, true , true , false, false, false, false, true , false, false, false },
        {true , true , false, true , false, false, false, false, false, false, false, false, false, false, false, false, true , true , false, false, false, false, false, false, false, false, false, false, false, true , false, true , true  },
        {true , false, true , true , false, true , true , false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , true , false, true , true , false, true  },
        {false, false, false, false, false, true , false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , false, false, false, false, false },
        {false, false, false, false, false, true , false, true , false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , false, true , false, false, false, false, false },
        {false, false, false, false, false, false, true , true , false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , true , false, false, false, false, false, false },
        {false, false, false, false, false, false, false, false, false, false, true , false, false, false, false, false, false, false, false, false, false, false, true , false, false, false, false, false, false, false, false, false, false },
        {false, false, false, false, false, false, true , true , true , true , true , false, false, false, false, false, false, false, false, false, false, false, true , true , true , true , true , false, false, false, false, false, false },
        {false, false, false, false, false, false, true , false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , false, false, false, false, false, false },
        {false, false, false, false, false, false, false, false, true , false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , false, false, false, false, false, false, false, false },
        {false, false, false, false, false, false, false, true , true , false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , true , false, false, false, false, false, false, false }
    };
    //rows = 26
    //cols = 33
    return v;

}

//3 - Figure 8
vector<vector<bool>> figure_8(){
    vector<vector<bool>>v =  {
        {false, false, false, false, false, false, false },
        {false, false, false, false, false, true , true  },
        {false, false, false, true , false, true , true  },
        {false, false, true , false, false, false, false },
        {false, false, false, false, false, true , false },
        {false, true , true , false, true , false, false },
        {false, true , true , false, false, false, false }
    };
    //rows = 7
    //cols = 7
    return v;
}

//4 - 52513M
vector<vector<bool>> five_m(){
    vector<vector<bool>> v = {
        {true , true , true , false, false, true , true , false, true , false, true , true , false, true , true , true  },
        {true , true , false, true , false, true , true , true , false, false, false, false, true , false, true , false },
        {false, true , false, false, true , false, false, true , false, true , false, true , true , true , false, true  },
        {false, false, true , false, false, true , true , false, false, false, true , false, false, true , false, false },
        {false, false, true , false, false, false, false, false, true , false, true , false, false, false, true , true  },
        {true , false, false, false, false, true , true , false, false, false, true , true , true , false, true , false },
        {false, false, false, true , true , false, false, true , false, false, true , false, true , false, false, true  },
        {false, false, true , true , true , true , false, true , false, false, true , false, true , true , false, false },
        {true , true , false, true , true , false, false, true , true , false, false, false, false, false, true , true  },
        {true , false, true , true , true , true , false, true , false, false, false, false, true , true , true , false },
        {true , false, false, false, true , true , true , true , false, false, true , true , true , false, false, false },
        {false, true , true , true , true , true , true , true , true , true , true , false, false, true , true , true  },
        {true , true , false, false, false, true , false, true , true , true , false, true , false, true , true , true  },
        {false, true , true , false, true , true , true , true , true , true , false, false, false, true , false, true  },
        {true , false, true , false, false, false, false, false, true , true , true , true , false, true , false, false },
        {true , true , true , false, true , false, true , false, true , true , false, false, false, false, false, true  }
    };
    //rows = 16
    //cols = 16
    return v;
}

//5 - Bi-Block Fuse
vector<vector<bool>> bi_block(){
    vector<vector<bool>> v ={
        {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false },
        {false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false },
        {false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, true , false, false, true  },
        {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true , true , false },
        {false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, false, false, false },
        {false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, true , true , false, false, false, false, false },
        {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false }
    };
    //rows = 7
    //cols = 48
    return v;
}

