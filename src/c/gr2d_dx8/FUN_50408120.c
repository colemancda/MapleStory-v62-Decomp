/* FUN_50408120 - 0x50408120 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl FUN_50408120(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_3;
  while (cVar1 != '\0') {
    param_3 = param_3 + 1;
    FUN_50408201(param_1,param_2,cVar1,param_4);
    if ((cVar1 == '.') || (cVar1 == ':')) {
      iVar2 = 1;
    }
    else {
      iVar2 = 3;
    }
    param_1 = param_1 + iVar2 + 1;
    cVar1 = *param_3;
  }
  return;
}


