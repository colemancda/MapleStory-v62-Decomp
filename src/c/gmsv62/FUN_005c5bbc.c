/* FUN_005c5bbc - 0x005c5bbc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_005c5bbc(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = FUN_005c5b12(&local_14,0);
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (param_2 < local_c) {
      if (param_4 <= local_14) {
        param_4 = local_14 + 1;
      }
    }
    else {
      param_2 = local_c + -1;
    }
    if (param_3 < local_8) {
      if (param_5 <= local_10) {
        param_5 = local_10 + 1;
      }
    }
    else {
      param_3 = local_8 + -1;
    }
    (*DAT_0097b5a0)(&local_24,&param_2,&local_14);
    *param_1 = (local_24 + local_1c) / 2;
    param_1[1] = (local_20 + local_18) / 2;
  }
  return param_1;
}


