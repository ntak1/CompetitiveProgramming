#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;

typedef vector <int> vi;

class SegmentTree{
    private:
            vi A;                          // Array
            vi st;                         // Segment tree
            int n;                          
            int left (int p){return p << 1;}
            int right (int p){return (p << 1)+1;}

        void build(int p, int l, int r){
            if (l == r){st[p] = l;}
            else{
                build(left(p),l, (l+r)/2);
                build(right(p), (l+r)/2 + 1, r);
                int p1 = st[left(p)], p2 = st[right(p)];
                st[p] = (A[p1] <= A[p2]) ? p1 : p2;
            }
        }

        int rmq(int p, int l, int r, int i, int j){
            // search for the index of the minum value in range i - j
            if(i > r || j < l) return -1;           // outside of legal range
            if( i <= l && j >=  r) return st[p];   // query concerning all the array

            int p1 = rmq(left(p), l, (l+r)/2, i, j);
            int p2 = rmq(right(p), (l+r)/2 + 1, r, i, j);
            
            if(p1 == -1) return p2;
            if(p2 == -1) return p1;
            return((A[p1] <= A[p2]) ? p1: p2);
        }

    public:
        SegmentTree(const vi &_A){
            A = _A;
            n = (int)A.size();
            st.assign(4*n,0);
            build(1,0,n-1);
        }
        
        int rmq(int i, int j){return rmq(1, 0, n-1, i, j);}
};

int main(){
    int arr[] = {18, 17, 13, 19, 15, 11, 20};
    vi A(arr, arr+7);
    SegmentTree st(A);
    
    printf("idx %2d, %2d, %2d, %2d, %2d, %2d, %2d\n", 0, 1, 2, 3, 4, 5, 6);
    printf("A   %2d, %2d, %2d, %2d, %2d, %2d, %2d\n", 18, 17, 13, 19, 15,  11, 20);

    printf("rmq(1,3) = %d\n", st.rmq(1,3));
    printf("rmq(4,6) = %d\n", st.rmq(4,6));
    printf("rmq(3,4) = %d\n", st.rmq(3,4));
    printf("rmq(0,0) = %d\n", st.rmq(0,0));
    printf("rmq(0,1) = %d\n", st.rmq(0,1));
    printf("rmq(0,6) = %d\n", st.rmq(0,6));

    return 0;
}

