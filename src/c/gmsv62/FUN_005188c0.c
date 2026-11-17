/* FUN_005188c0 - 0x005188c0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_005188c0(int param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x38))();
    bVar2 = iVar1 == *(int *)(param_1 + 0xc);
  }
  return bVar2;
}


