/* FUN_006bcbe6 - 0x006bcbe6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006bcbe6(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0x7de) {
    if (*(int *)(param_1 + 0x59c) < 1) goto LAB_006bcc36;
    iVar1 = *(int *)(param_1 + 0x59c) + -1;
  }
  else {
    if (param_2 != 0x7df) goto LAB_006bcc36;
    if (*(int *)(param_1 + 0x674) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x674) + -4);
    }
    if (iVar1 + 2U <= *(uint *)(param_1 + 0x59c)) goto LAB_006bcc36;
    iVar1 = *(uint *)(param_1 + 0x59c) + 1;
  }
  *(int *)(param_1 + 0x59c) = iVar1;
LAB_006bcc36:
  FUN_008161f1(0);
  return;
}


