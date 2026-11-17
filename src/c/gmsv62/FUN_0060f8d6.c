/* FUN_0060f8d6 - 0x0060f8d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0060f8d6(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x188);
  if (*(int *)(param_1 + 0x184) == 0) {
    if (*(int *)(param_1 + 0x1ac) <= iVar1) goto LAB_0060f903;
    if (4 < iVar1) {
      iVar1 = iVar1 + -3;
      goto LAB_0060f906;
    }
  }
  else if (5 < iVar1) {
LAB_0060f903:
    iVar1 = iVar1 + -4;
    goto LAB_0060f906;
  }
  iVar1 = 0;
LAB_0060f906:
  FUN_004ad003(iVar1);
  iVar1 = *(int *)(param_1 + 0x188);
  if (((4 < iVar1) && (iVar1 < *(int *)(param_1 + 0x1ac))) && (*(int *)(param_1 + 0xc0) == 0)) {
    FUN_004acfe9(iVar1);
  }
  return;
}


