/* FUN_0077e699 - 0x0077e699 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0077e699(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(**(int **)(param_1 + 0x584) + 0xc))();
  iVar3 = *(int *)(param_1 + 0x588);
  if (iVar3 == 0) {
    iVar1 = 0x35;
    iVar4 = 0x5f;
    iVar2 = 0x102;
    goto LAB_0077e6ff;
  }
  if (iVar3 == 1) {
    iVar4 = 0x74;
LAB_0077e6c6:
    iVar1 = 0x35;
    iVar2 = 0x116;
  }
  else {
    if (iVar3 == 2) {
      iVar4 = 0x6e;
    }
    else {
      if (iVar3 != 3) {
        iVar1 = param_1;
        iVar4 = param_1;
        iVar2 = param_1;
        if (iVar3 != 4) goto LAB_0077e6ff;
        iVar4 = 0x2b;
        goto LAB_0077e6c6;
      }
      iVar4 = 0x23c;
    }
    iVar1 = 0x71;
    iVar2 = 0xc0;
  }
LAB_0077e6ff:
  (**(code **)(**(int **)(param_1 + 0x584) + 0x20))(param_1,2000,1,3,0x122,iVar1,iVar2,0);
  *(undefined4 *)(*(int *)(param_1 + 0x584) + 0x34) = 0xa5;
  iVar4 = (*(int *)(param_1 + 0x780) * 0x12 - iVar2) + iVar4;
  if (iVar4 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 / 0x21 + 2;
  }
  FUN_004ad003(iVar3);
  return;
}


