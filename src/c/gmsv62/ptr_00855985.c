/* ptr_00855985 - 0x00855985 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00855985(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_EBX;
  int unaff_EBP;
  
  iVar3 = FUN_0042459a();
  if (iVar3 == *(int *)(unaff_EBX + 0x2cac)) {
    uVar4 = FUN_0042452b();
    *(uint *)(unaff_EBX + 0x2cc0) = uVar4 & 0xff;
    if ((*(int *)(unaff_EBX + 0x2cac) != 0) &&
       (**(int **)(unaff_EBX + 0x2cb8) == *(int *)(unaff_EBX + 0x2088))) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x48,0xc86);
      uVar1 = *(undefined4 *)(unaff_EBX + 0x2cc0);
      uVar2 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      FUN_00434e21(unaff_EBP + -0x20,uVar2,uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      if (*(int *)(unaff_EBP + -0x48) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x48) + -0xc);
      }
      iVar3 = unaff_EBP + -0x20;
      FUN_004655d4(0xffffffff);
      FUN_00414f8b(iVar3);
      FUN_00856a7c(unaff_EBP + -0x1c,0x1eab97);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x20) + -0xc);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0045f10c();
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


