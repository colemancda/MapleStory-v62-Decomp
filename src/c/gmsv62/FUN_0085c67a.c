/* FUN_0085c67a - 0x0085c67a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0085c67a(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((*param_2 != 0) && (*(int *)(*param_2 + -4) != 0)) {
    FUN_0047cf76();
  }
  if (*(int *)(param_1 + 0x2b40) != 0) {
    piVar3 = (int *)(param_1 + 0x2bda);
    param_2 = (int *)0x6;
    do {
      iVar1 = *(int *)((int)piVar3 + -0x96);
      if (((iVar1 != 0) && (-1 < *piVar3)) && (*(int *)(param_1 + 0x2088) != iVar1)) {
        piVar2 = (int *)FUN_0047cf98(0xffffffff);
        *piVar2 = iVar1;
      }
      piVar3 = piVar3 + 1;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
  }
  return;
}


