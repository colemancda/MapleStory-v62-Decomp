/* FUN_0076f79c - 0x0076f79c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076f79c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int local_60;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0x24);
  iVar1 = *(int *)(iVar3 + 0x818);
  if ((iVar1 != 0) && (iVar1 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    local_60 = unaff_EBP + -0x60;
    uVar2 = *(undefined4 *)(iVar3 + 0x818);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0076fa45(uVar2);
    if (DAT_0097bd60 == 0) {
      local_60 = 0;
      iVar3 = FUN_006d1f73();
      if (iVar3 != 0) {
        *(int **)(unaff_EBP + -0x10) = &local_60;
        local_60 = 0;
        FUN_00414f8b(unaff_EBP + -0x5c);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_006d5f10();
        FUN_006d5c28();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 2;
    local_60 = 0x76f822;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_60 = 0x76f82e;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


