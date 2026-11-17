/* ptr_00855dde - 0x00855dde in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00855dde(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int unaff_EBX;
  int unaff_EBP;
  
  iVar3 = FUN_0042459a();
  if (iVar3 == *(int *)(unaff_EBX + 0x2cac)) {
    uVar4 = FUN_0045cdbc(unaff_EBP + -0x80);
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    FUN_00414f8b(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x80) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x80) + -0xc);
    }
    pcVar1 = *(char **)(unaff_EBX + 0x2cca);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x88,0xcce);
      uVar4 = *(undefined4 *)(unaff_EBX + 0x2cca);
      uVar2 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      FUN_00434e21(unaff_EBP + -0x10,uVar2,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      if (*(int *)(unaff_EBP + -0x88) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x88) + -0xc);
      }
      FUN_00471102(unaff_EBP + -0x10,0xc);
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


