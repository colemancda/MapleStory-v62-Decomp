/* FUN_5041dbef - 0x5041dbef in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 __fastcall FUN_5041dbef(float *param_1)

{
  float *in_EAX;
  int iVar1;
  
  iVar1 = 0x10;
  do {
    *param_1 = in_EAX[3] * *in_EAX;
    iVar1 = iVar1 + -1;
    param_1[1] = in_EAX[1] * in_EAX[3];
    param_1[2] = in_EAX[2] * in_EAX[3];
    param_1[3] = in_EAX[3];
    in_EAX = in_EAX + 4;
    param_1 = param_1 + 4;
  } while (iVar1 != 0);
  return 0;
}


