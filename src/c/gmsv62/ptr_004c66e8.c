/* ptr_004c66e8 - 0x004c66e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_004c66e8(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int unaff_ESI;
  bool bVar3;
  
  bVar3 = DAT_009791a8 == 0;
  *(undefined4 *)(unaff_EBP + -8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (bVar3) {
LAB_004c674f:
    uVar2 = 0;
  }
  else {
    if (((*(int *)(unaff_EBP + 0x14) != 0) && (*(int *)(unaff_ESI + 0x18) != -1)) &&
       (*(int *)(unaff_ESI + 0x1c) != -1)) {
      FUN_00598d7b(*(int *)(unaff_ESI + 0x18),*(int *)(unaff_ESI + 0x1c));
      FUN_00598c09();
      FUN_0071f61a();
    }
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      iVar1 = FUN_0071f653(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),0,
                           unaff_EBP + -8,unaff_EBP + -4);
      if (iVar1 == 0) goto LAB_004c674f;
    }
    if ((*(int *)(unaff_ESI + 0x18) != -1) && (*(int *)(unaff_ESI + 0x1c) != -1)) {
      FUN_00598d7b(*(int *)(unaff_ESI + 0x18),*(int *)(unaff_ESI + 0x1c));
    }
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      FUN_00598e08(*(undefined4 *)(unaff_EBP + -8),*(undefined4 *)(unaff_EBP + -4),
                   *(undefined4 *)(unaff_ESI + 0x10));
    }
    FUN_00598c09();
    FUN_0071f61a();
    uVar2 = 1;
  }
  return uVar2;
}


