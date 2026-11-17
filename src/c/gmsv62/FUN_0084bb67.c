/* FUN_0084bb67 - 0x0084bb67 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084bb67(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) != 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    FUN_00414f8b(unaff_EBP + -0x10);
    uVar2 = *(uint *)(unaff_EBP + 8) / 0x3c;
    if (uVar2 != 0) {
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0xc79);
      uVar1 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00434e21(unaff_EBP + -0x14,uVar1,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
    }
    uVar2 = *(uint *)(unaff_EBP + 8) % 0x3c;
    if (uVar2 != 0) {
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0xc7a);
      uVar1 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00434e21(unaff_EBP + -0x10,uVar1,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
    }
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0xc7b);
      uVar1 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00434e21(unaff_EBP + -0x18,uVar1,*(undefined4 *)(unaff_EBP + -0x14),
                   *(undefined4 *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    else {
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0xc7c);
      uVar1 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00434e21(unaff_EBP + -0x18,uVar1,*(undefined4 *)(unaff_EBP + -0x14),
                   *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 0xc));
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    FUN_00414ebb();
    FUN_00471102(unaff_EBP + -0x18,0xc);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


