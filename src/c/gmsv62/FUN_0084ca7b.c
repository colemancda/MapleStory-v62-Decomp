/* FUN_0084ca7b - 0x0084ca7b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0084ca7b(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 0xc) / 10;
  iVar6 = *(int *)(unaff_EBP + 0xc) % 10;
  iVar3 = FUN_00455c59(unaff_EBP + -0x24);
  iVar3 = *(int *)(iVar3 + 4);
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    FUN_0045e7c2(0);
  }
  if (iVar3 == 0) {
    puVar4 = *(undefined4 **)(unaff_EBP + 8);
    *puVar4 = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iVar3 = FUN_004b95d3(unaff_EBP + -0x18,unaff_EBP + 0xc);
    if (iVar3 == 0) {
      puVar4 = *(undefined4 **)(unaff_EBP + 8);
      *puVar4 = 0;
      FUN_00414edd(&DAT_00978474,0xffffffff);
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(unaff_EBP + 0xc) + -4);
      }
      iVar2 = iVar6 * 3;
      if (iVar2 <= iVar3) {
        puVar4 = (undefined4 *)FUN_0045e053(unaff_EBP + -0x20,iVar2 + -3,iVar2);
        uVar5 = FUN_0087b6ab(*puVar4);
        *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        FUN_00414ebb();
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar3 = FUN_006fcb31(*(undefined4 *)(unaff_EBP + -0x14));
      puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0x78c);
      uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x54) + -4 + iVar6 * 8);
      uVar1 = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00434e21(unaff_EBP + -0x10,uVar1,*(undefined4 *)(unaff_EBP + -0x18),uVar5);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      puVar4 = *(undefined4 **)(unaff_EBP + 8);
      *puVar4 = 0;
      FUN_00414f8b(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar4;
}


