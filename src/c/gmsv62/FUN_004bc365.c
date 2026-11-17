/* FUN_004bc365 - 0x004bc365 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004bc365(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  int iVar5;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar2 = *(int *)(unaff_EBP + 0x14);
  iVar5 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*piVar1 + (iVar5 + iVar2) * 8 + -4);
  local_18 = 0x4bc394;
  FUN_004b8b3d();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = *(int *)(unaff_EBP + 0x10) / 2;
  *(int *)(unaff_EBP + 0x14) = iVar3;
  if (iVar5 <= iVar3) {
    while( true ) {
      iVar5 = iVar5 * 2;
      if (iVar5 < *(int *)(unaff_EBP + 0x10)) {
        local_18 = iVar5 + iVar2;
        uStack_1c = 0x4bc3c2;
        iVar3 = FUN_004bc0c0();
        local_18 = *(undefined4 *)(iVar3 + 4);
        *(undefined4 **)(unaff_EBP + 8) = &uStack_1c;
        iStack_20 = 0x4bc3d4;
        FUN_004b8b3d();
        iStack_20 = iVar2 + -1 + iVar5;
        uStack_24 = 0x4bc3e0;
        uVar4 = FUN_004bc0c0();
        *(undefined4 **)(unaff_EBP + 8) = &uStack_24;
        FUN_004bbe49(uVar4);
        iVar3 = FUN_004bbe61();
        if (iVar3 != 0) {
          iVar5 = iVar5 + 1;
        }
      }
      local_18 = iVar2 + -1 + iVar5;
      uStack_1c = 0x4bc406;
      iVar3 = FUN_004bc0c0();
      local_18 = *(undefined4 *)(iVar3 + 4);
      *(undefined4 **)(unaff_EBP + 8) = &uStack_1c;
      iStack_20 = 0x4bc418;
      FUN_004b8b3d();
      *(undefined4 **)(unaff_EBP + 8) = &uStack_24;
      FUN_004bbe49(unaff_EBP + -0x14);
      iVar3 = FUN_004bbe61();
      if (iVar3 == 0) break;
      local_18 = *piVar1 + -8 + (iVar5 + iVar2) * 8;
      uStack_1c = 0x4bc44c;
      FUN_004b8adb();
      *(int *)(unaff_EBP + 0xc) = iVar5;
      if (*(int *)(unaff_EBP + 0x14) < iVar5) break;
      iVar5 = *(int *)(unaff_EBP + 0xc);
    }
  }
  local_18 = unaff_EBP + -0x14;
  uStack_1c = 0x4bc46c;
  FUN_004b8adb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    local_18 = 0;
    uStack_1c = 0x4bc480;
    FUN_004b8ba3();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


