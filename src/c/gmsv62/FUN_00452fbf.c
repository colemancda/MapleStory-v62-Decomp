/* FUN_00452fbf - 0x00452fbf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00452fbf(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 uVar5;
  
  FUN_00879bb8();
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x4a6);
  uVar1 = *puVar2;
  uVar5 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045205d(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  iVar4 = *(int *)(unaff_EBP + 0xc);
  if (iVar4 == 0xfa) {
    iVar4 = *(int *)(*(int *)(**(int **)(unaff_EBP + 0x1c) + 0x58) + 8);
    if ((iVar4 != 0) && (*(uint *)(iVar4 + -4) >> 1 == 0x2b)) {
      (*DAT_0097b568)(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x10),0x400,0,0);
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00454081(iVar4,0xffffffff);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_004538dc(s_javascript_window_close___009642b0,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    if (iVar4 != 0) goto LAB_004531ce;
    iVar4 = *(int *)(unaff_EBP + 8);
  }
  else {
    if (iVar4 != 0xfb) {
      if (iVar4 == 0xfc) {
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0x4a8);
        uVar1 = *puVar2;
        *(undefined4 *)(unaff_EBP + -4) = 3;
        FUN_0045205d(uVar1);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        piVar3 = (int *)(*(int *)(unaff_EBP + 8) + 0x138);
        if (*piVar3 == 0) {
          *piVar3 = *(int *)(**(int **)(unaff_EBP + 0x1c) + 0x18);
        }
      }
      else if (iVar4 == 0x103) {
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x4a9);
        uVar1 = *puVar2;
        *(undefined4 *)(unaff_EBP + -4) = 4;
        FUN_0045205d(uVar1);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        iVar4 = *(int *)(unaff_EBP + 8);
        if (*(int *)(iVar4 + 0x134) != 0) {
          if (*(int *)(iVar4 + 0x24) != 0) {
            (*DAT_0097b534)(*(undefined4 *)(iVar4 + 0xc),5);
            (*DAT_0097b530)(*(undefined4 *)(iVar4 + 0xc));
          }
          *(undefined4 *)(iVar4 + 0x134) = 0;
        }
      }
      else {
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x3bd);
        uVar1 = *puVar2;
        *(undefined4 *)(unaff_EBP + -4) = 5;
        FUN_00452068(uVar1,*(undefined4 *)(unaff_EBP + 0xc));
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        uVar5 = 0x80020003;
      }
      goto LAB_004531ce;
    }
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0x4a7);
    uVar1 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_0045205d(uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    iVar4 = *(int *)(unaff_EBP + 8);
    if (*(int *)(iVar4 + 0x1c) == 0) {
      **(undefined2 **)(**(int **)(unaff_EBP + 0x1c) + 8) = 1;
    }
    if (*(int *)(iVar4 + 0x130) != 0) goto LAB_004531ce;
  }
  (*DAT_0097b568)(*(undefined4 *)(iVar4 + 0x10),0x400,0,0);
LAB_004531ce:
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x3c0);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_0045205d(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


