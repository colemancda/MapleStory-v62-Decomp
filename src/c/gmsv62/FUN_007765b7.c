/* FUN_007765b7 - 0x007765b7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007765b7(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int local_54;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0x24);
  iVar1 = *(int *)(iVar3 + 0x818);
  if ((iVar1 != 0) && (iVar1 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    local_54 = unaff_EBP + -0x54;
    uVar2 = *(undefined4 *)(iVar3 + 0x818);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00776a20(uVar2);
    if ((*(int *)(unaff_EBP + -0x54) != 0) && (DAT_0097bd60 == 0)) {
      local_54 = 0;
      iVar3 = FUN_006d1f73();
      if (iVar3 != 0) {
        *(int **)(unaff_EBP + -0x10) = &local_54;
        local_54 = 0;
        FUN_00414f8b(unaff_EBP + -0x50);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_006d5f10();
        FUN_006d5c28();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_54 = 0x776642;
    FUN_00773f2e();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


