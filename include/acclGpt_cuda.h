void cuda_init_parameter();
void cuda_update_parameter(int g_ang1[ROW][COL], double g_can1[ROW][COL],double H[ROW_H][COL_H],char sHoG1[ROW - 4][COL - 4]);
void cuda_Ht(double newVar);
double* cuda_calc_g();
void cuda_calc_defcan1(double g_can1[ROW][COL],unsigned char image1[MAX_IMAGESIZE][MAX_IMAGESIZE]);
void cuda_procImg(double g_can[ROW][COL], int g_ang[ROW][COL], double g_nor[ROW][COL], char g_HoG[ROW][COL][8], char sHoG[ROW - 4][COL - 4], unsigned char image1[MAX_IMAGESIZE][MAX_IMAGESIZE]);