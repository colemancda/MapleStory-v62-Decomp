/* FUN_0082365d - 0x0082365d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0082365d(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x1c) = unaff_EBX;
  *(int *)(unaff_EBP + -0x18) = unaff_EBX;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  FUN_00825d04(*(undefined4 *)(unaff_EBP + 0x10));
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0082606c();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (unaff_EBX != 0) {
    if (*(int *)(DAT_00978368 + 0x332c) != unaff_EBX) {
      Sleep(1000);
    }
    FUN_00849684();
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uVar2 = FUN_004ddb1e();
    FUN_0057a546(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 10;
  }
  *(int *)(unaff_EBP + 0x10) = unaff_EBX;
  FUN_008264a7(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0xa0);
  if ((*(int *)(unaff_EBP + -0x9c) == unaff_EBX) ||
     (iVar1 = *(int *)(DAT_00978134 + 0x14), *(undefined4 *)(unaff_EBP + -0x18) = 1,
     iVar1 == unaff_EBX)) {
    *(int *)(unaff_EBP + -0x18) = unaff_EBX;
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00826029();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00823c50();
  FUN_00823b57();
  return;
}


