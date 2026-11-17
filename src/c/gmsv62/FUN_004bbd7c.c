/* FUN_004bbd7c - 0x004bbd7c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004bbd7c(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar3 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x10) = iVar3;
  if (iVar3 <= *(int *)(unaff_EBP + 0x10)) {
    piVar1 = *(int **)(unaff_EBP + 8);
    do {
      local_20 = *piVar1 + iVar3 * 8;
      uStack_24 = 0x4bbdb4;
      FUN_004b8adb();
      while (*(int *)(unaff_EBP + 0xc) < iVar3) {
        uStack_24 = 0x4bbdc4;
        local_20 = iVar3 + -1;
        iVar2 = FUN_004bc0c0();
        local_20 = *(undefined4 *)(iVar2 + 4);
        *(undefined4 **)(unaff_EBP + 8) = &uStack_24;
        uStack_28 = 0x4bbdd6;
        FUN_004b8b3d();
        *(undefined1 **)(unaff_EBP + -0x14) = auStack_2c;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_004bbe49(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar2 = FUN_004bbe61();
        if (iVar2 == 0) break;
        local_20 = *piVar1 + iVar3 * 8 + -8;
        uStack_24 = 0x4bbe08;
        FUN_004b8adb();
        iVar3 = iVar3 + -1;
      }
      local_20 = unaff_EBP + -0x1c;
      uStack_24 = 0x4bbe1a;
      FUN_004b8adb();
      iVar3 = *(int *)(unaff_EBP + -0x10) + 1;
      *(int *)(unaff_EBP + -0x10) = iVar3;
    } while (iVar3 <= *(int *)(unaff_EBP + 0x10));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    local_20 = 0;
    uStack_24 = 0x4bbe3a;
    FUN_004b8ba3();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


