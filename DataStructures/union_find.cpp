#include <cstdio>
#include <vector>
using namespace std;

typedef vector <int> vi;

// Union-Find Disjoint Sets using path compression and union by rank heuristics
class UnionFind{
    private:
        vi p;       // parent
        vi rank;    // upper bound to tree height 
        vi setSize; 
        int numSets;

    public:
        // Class constructor
        UnionFind(int N){
            // Initialize setSize with lenght N and initial value 1
            setSize.assign(N,1);
            numSets = N;
            // Initialize rank with length N and initial value 0
            rank.assign(N,0);
            p.assign(N,0);
            // Make all the initial sets have theirselves as representant
            for (int i = 0; i < N; i++) p[i] = i;
        }

       // Return the representant of i's set'
       int findSet(int i){return (i == p[i]) ? i:(p[i] = findSet(p[i]));}

       // i and j belong to the same set if their sets have the same representant
       bool isSameSet(int i, int j){return findSet(i) == findSet(j);}

       void unionSet(int i, int j){
            if(!isSameSet(i, j)){
                numSets--;
                int x = findSet(i); int y = findSet(j);
                // Union by rank heuristics
                if(rank[x] > rank[y]){ p[y] = x; setSize[x] += setSize[y];}
                else{p[x] = y; setSize[y] += setSize[x];
                    if(rank[x] == rank[y]) rank[y]++;}
            }
       }

       int numDisjointSets(){return numSets;}
       int sizeOfSet(int i){ return setSize[findSet(i)];}

};

int main(){
    printf("Assume that there are 5 initial disjoint sets\n");
    UnionFind UF(5);
    printf("Number of disjoint sets: %d\n",UF.numDisjointSets());

    for (int i = 0; i < 5; i++){
        printf("findSet(%d) = %d, sizeOfSet(%d) = %d \n",
            i, UF.findSet(i), i, UF.sizeOfSet(i));
    }

    UF.unionSet(0,1);
    printf("Number of disjoint sets: %d\n",UF.numDisjointSets());

    UF.unionSet(2,3);
    printf("Number of disjoint sets: %d\n",UF.numDisjointSets());

    UF.unionSet(4, 3);
    printf("Number of disjoint sets: %d\n",UF.numDisjointSets());
    
    printf("isSameSet(0, 3) = %d\n", UF.isSameSet(0,3));
    printf("isSameSet(4, 3) = %d\n", UF.isSameSet(4,3));
    
    for (int i = 0; i < 5; i++){
        printf("findSet(%d) = %d, sizeOfSet(%d) = %d \n", i, UF.findSet(i), i, UF.sizeOfSet(i));
    }
    UF.unionSet(0,3);
    printf("Number of disjoint sets: %d\n",UF.numDisjointSets());
    for (int i = 0; i < 5; i++){
        printf("findSet(%d) = %d, sizeOfSet(%d) = %d \n",i, UF.findSet(i), i, UF.sizeOfSet(i));
    }

    return 0;
}
