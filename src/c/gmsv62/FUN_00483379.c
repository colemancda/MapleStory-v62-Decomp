/* FUN_00483379 - 0x00483379 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_00483379(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_00482a39(param_1);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)0x0;
    if (param_1 / 100 != 0) {
      iVar1 = (param_1 / 100) * 100;
      piVar2 = (int *)FUN_0045f1e3(0xffffffff);
      *piVar2 = iVar1;
      iVar3 = (param_1 % 100) / 10;
      piVar2 = (int *)0x0;
      if (iVar3 != 0) {
        iVar1 = iVar1 + iVar3 * 10;
        piVar2 = (int *)FUN_0045f1e3(0xffffffff);
        *piVar2 = iVar1;
        piVar2 = (int *)(param_1 / 10);
        if (param_1 % 10 != 0) {
          piVar2 = (int *)FUN_0045f1e3(0xffffffff);
          *piVar2 = iVar1 + 1;
          if (1 < param_1 % 10) {
            piVar2 = (int *)FUN_0045f1e3(0xffffffff);
            *piVar2 = iVar1 + 2;
          }
        }
      }
    }
  }
  return piVar2;
}


