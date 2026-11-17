/* ptr_00855a5c - 0x00855a5c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00855a5c(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_EBX;
  int unaff_EBP;
  
  iVar2 = FUN_0042459a();
  if (iVar2 == *(int *)(unaff_EBX + 0x2cac)) {
    iVar2 = FUN_0042459a();
    *(int *)(unaff_EBP + -0x20) = iVar2;
    uVar3 = FUN_0042452b();
    iVar4 = 0;
    while( true ) {
      iVar6 = 0;
      if (*(int *)(unaff_EBX + 0x2cb8) != 0) {
        iVar6 = *(int *)(*(int *)(unaff_EBX + 0x2cb8) + -4);
      }
      if (iVar6 <= iVar4) break;
      if (*(int *)(*(int *)(unaff_EBX + 0x2cb8) + iVar4 * 4) == iVar2) goto LAB_00855aa9;
      iVar4 = iVar4 + 1;
    }
    iVar4 = -1;
LAB_00855aa9:
    if (-1 < iVar4) {
      *(uint *)(*(int *)(unaff_EBX + 0x2cbc) + 0x15 + iVar4 * 0x25) = uVar3 & 0xff;
      iVar2 = *(int *)(unaff_EBX + 0x2cbc);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      FUN_00414edd(iVar2 + iVar4 * 0x25,0xffffffff);
      iVar2 = *(int *)(unaff_EBX + 0x2cb4);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      FUN_00414f8b(iVar2 + -4 + (uVar3 & 0xff) * 4);
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x50,0xc95);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      FUN_00434e21(unaff_EBP + -0x1c,uVar1,*(undefined4 *)(unaff_EBP + -0x10),
                   *(undefined4 *)(unaff_EBP + -0x18));
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (*(int *)(unaff_EBP + -0x50) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x50) + -0xc);
      }
      FUN_00471102(unaff_EBP + -0x1c,0xc);
      if ((*(int *)(unaff_EBP + -0x20) == *(int *)(unaff_EBX + 0x2088)) && (DAT_0097befc != 0)) {
        FUN_00815de9();
        if (DAT_0097befc != 0) {
          (*(code *)**(undefined4 **)(DAT_0097befc + 8))(1);
        }
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        FUN_00414edd(&DAT_0096ca44,0xffffffff);
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        FUN_00471102(unaff_EBP + -0x20,0xc);
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          FUN_00434e38(*(int *)(unaff_EBP + -0x20) + -0xc);
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x1c) + -0xc);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x18) + -0xc);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
      }
    }
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
  }
  else {
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


