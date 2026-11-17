/* FUN_0048fc8c - 0x0048fc8c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0048fc8c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((0x15 < param_3) && (param_3 < 0x35)) {
    iVar2 = 1;
    piVar3 = (int *)&DAT_00964c08;
    do {
      if (iVar2 < *(int *)(param_1 + 0x9c)) {
        iVar1 = piVar3[-1];
LAB_0048fcbe:
        if ((-1 < param_2 - iVar1) && (param_2 - iVar1 < 0x33)) {
          return iVar2;
        }
      }
      else if (*(int *)(param_1 + 0x9c) < iVar2) {
        iVar1 = *piVar3;
        goto LAB_0048fcbe;
      }
      piVar3 = piVar3 + 2;
      iVar2 = iVar2 + 1;
    } while ((int)piVar3 < 0x964c49);
  }
  return 0;
}


