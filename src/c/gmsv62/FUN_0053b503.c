/* FUN_0053b503 - 0x0053b503 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0053b503(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0053b87b();
  if (((param_2 == 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0x564) + 0x48), iVar1 != 0)) &&
     (*(int *)(iVar1 + -4) != 0)) {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + -4);
    }
    *(int *)(param_1 + 0x560) = iVar2 + -1;
  }
  else {
    *(undefined4 *)(param_1 + 0x560) = 0xffffffff;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x70) + 0x3c);
  if (1 < iVar1) {
    FUN_004acfe9(iVar1 + -1);
    FUN_0074d6fb();
    FUN_008161f1(0);
  }
  return;
}


