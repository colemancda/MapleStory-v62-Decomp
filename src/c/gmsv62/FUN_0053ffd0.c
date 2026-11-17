/* FUN_0053ffd0 - 0x0053ffd0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0053ffd0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((0x12 < param_3) && (param_3 < 0x32)) {
    iVar2 = 1;
    piVar3 = (int *)&DAT_0096553c;
    do {
      if (iVar2 < *(int *)(param_1 + 0x84)) {
        iVar1 = piVar3[-1];
LAB_00540002:
        if ((-1 < param_2 - iVar1) && (param_2 - iVar1 < 0x5d)) {
          return iVar2;
        }
      }
      else if (*(int *)(param_1 + 0x84) < iVar2) {
        iVar1 = *piVar3;
        goto LAB_00540002;
      }
      piVar3 = piVar3 + 2;
      iVar2 = iVar2 + 1;
    } while ((int)piVar3 < 0x96555d);
  }
  return 0;
}


