/* FUN_0049918b - 0x0049918b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0049918b(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if (iVar1 != param_2) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    FUN_00498f74((-(uint)(param_2 != 0) & 0xfffffffe) + 2);
  }
  FUN_004b3e85(param_2);
  return;
}


