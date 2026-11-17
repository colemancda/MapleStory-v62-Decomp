/* ptr_00823735 - 0x00823735 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00823735(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 9;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar1 != 0) {
    if (*(int *)(DAT_00978368 + 0x332c) != 0) {
      Sleep(1000);
    }
    FUN_00849684();
    *(int *)(unaff_EBP + 8) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uVar2 = FUN_004ddb1e();
    FUN_0057a546(uVar2,0);
    *(undefined1 *)(unaff_EBP + -4) = 10;
  }
  *(undefined4 *)(unaff_EBP + 0x10) = 0;
  FUN_008264a7(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0xa0);
  if ((*(int *)(unaff_EBP + -0x9c) == 0) ||
     (iVar1 = *(int *)(DAT_00978134 + 0x14), *(undefined4 *)(unaff_EBP + -0x18) = 1, iVar1 == 0)) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00826029();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00823c50();
  FUN_00823b57();
  return;
}


