/* FUN_0072945f - 0x0072945f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0072945f(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + *(int *)(*(int *)(param_1 + 0x7c) + 0x38);
  iVar1 = FUN_007295d1(0);
  if ((((iVar1 != 0) && (-1 < (int)uVar2)) && (iVar1 = *(int *)(iVar1 + 8), iVar1 != 0)) &&
     (uVar2 < *(uint *)(iVar1 + -4))) {
    *(undefined4 *)(param_1 + 0xb8) = **(undefined4 **)(iVar1 + 4 + uVar2 * 8);
  }
  return;
}


