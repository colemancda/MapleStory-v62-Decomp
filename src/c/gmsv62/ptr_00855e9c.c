/* ptr_00855e9c - 0x00855e9c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00855e9c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_EBP;
  
  iVar1 = FUN_0042459a();
  if (iVar1 == *(int *)(unaff_EBX + 0x2cac)) {
    iVar1 = FUN_0042459a();
    uVar2 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
    uVar2 = FUN_0042459a();
    iVar4 = 0;
    while( true ) {
      iVar3 = 0;
      if (*(int *)(unaff_EBX + 0x2cb8) != 0) {
        iVar3 = *(int *)(*(int *)(unaff_EBX + 0x2cb8) + -4);
      }
      if (iVar3 <= iVar4) break;
      if (*(int *)(*(int *)(unaff_EBX + 0x2cb8) + iVar4 * 4) == iVar1) goto LAB_00855ef1;
      iVar4 = iVar4 + 1;
    }
    iVar4 = -1;
LAB_00855ef1:
    if (iVar4 != -1) {
      *(undefined4 *)(*(int *)(unaff_EBX + 0x2cbc) + 0x11 + iVar4 * 0x25) =
           *(undefined4 *)(unaff_EBP + -0x10);
      *(undefined4 *)(*(int *)(unaff_EBX + 0x2cbc) + 0xd + iVar4 * 0x25) = uVar2;
      if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 2)) {
        FUN_0077e45e();
      }
      if (DAT_00978358 != 0) {
        FUN_007b02be();
      }
      if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 3)) {
        FUN_0077e45e();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      goto LAB_008565d9;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
  }
LAB_008565d9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


