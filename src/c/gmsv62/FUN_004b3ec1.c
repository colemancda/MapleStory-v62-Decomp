/* FUN_004b3ec1 - 0x004b3ec1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b3ec1(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x28))();
  if (iVar1 != param_2) {
    param_1[0xb] = param_2;
    FUN_004b3daf();
  }
  return;
}


