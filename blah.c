void compute_stencil(int Ni, int Nj, int Nk, int S, 
            const float In[Ni+S][Nj+S][Nk+S], float Out[Ni][Nj][Nk], 
            const float Stencil[S][S][S]) {


  for(int k = 0; k < Nk; ++k) {
    for(int j = 0; j < Nj; ++j) { 
      for(int i = 0; i < Ni; ++i) { 
        
          Out[i][j][k]=0;
        for(int z = 0; z < S; ++z) {
          for(int y = 0; y < S; ++y) {
            for(int x = 0; x < S; ++x) {
                Out[i][j][k] += In[i+x][j+y][k+z] * Stencil[x][y][z];
  
        } } }
  } } }
}
