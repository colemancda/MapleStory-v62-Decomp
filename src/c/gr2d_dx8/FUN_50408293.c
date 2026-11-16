/* FUN_50408293 - 0x50408293 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl FUN_50408293(char *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_3 = 0;
  }
  iVar1 = FUN_504082e0(param_2);
  if (iVar1 < (int)-param_3) {
    iVar1 = -param_3;
  }
  if (param_4 < (int)(iVar1 + param_3)) {
    FUN_504083ca(param_1,param_2,param_3,iVar1,param_4);
  }
  else {
    FUN_50408333(param_1,param_2,iVar1 + param_3,iVar1,param_4);
  }
  return;
}


