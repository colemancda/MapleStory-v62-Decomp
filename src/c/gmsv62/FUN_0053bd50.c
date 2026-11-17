/* FUN_0053bd50 - 0x0053bd50 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0053bd50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0053c15e();
  if (((param_2 == 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0x55c) + 0x4c), iVar1 != 0)) &&
     (*(int *)(iVar1 + -4) != 0)) {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + -4);
    }
    *(int *)(param_1 + 0x558) = iVar2 + -1;
  }
  else {
    *(undefined4 *)(param_1 + 0x558) = 0xffffffff;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0x3c);
  if (1 < iVar1) {
    FUN_004acfe9(iVar1 + -1);
    FUN_0074d6fb();
    FUN_008161f1(0);
  }
  return;
}


