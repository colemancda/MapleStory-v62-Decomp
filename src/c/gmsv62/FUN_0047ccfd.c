/* FUN_0047ccfd - 0x0047ccfd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0047cd15) */

void __thiscall FUN_0047ccfd(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = param_2;
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0xc);
    iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,param_2 - iVar2,param_3);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar1,&DAT_009640b0);
    }
  }
  return;
}


