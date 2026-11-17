/* FUN_004aa31f - 0x004aa31f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004aa31f(void)

{
  uint uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar8;
  int iStack_38;
  
  FUN_00879bb8();
  FUN_00445a30();
  puVar3 = (undefined4 *)FUN_0045f1e3();
  *puVar3 = 0;
  uVar1 = *(uint *)(extraout_ECX + 0x34);
  *(uint *)(unaff_EBP + -0x10) = uVar1;
  uVar4 = (*DAT_0097b584)();
  *(uint *)(unaff_EBP + -0x14) = uVar4;
  uVar8 = uVar1;
  if (uVar1 < uVar4) {
    do {
      pcVar2 = *(char **)(unaff_EBP + -0x10);
      if (*pcVar2 == '\r') {
        iStack_38 = 0x4aa378;
        puVar3 = (undefined4 *)FUN_0045f1e3();
        *puVar3 = pcVar2 + (1 - uVar1);
        uVar8 = *(int *)(unaff_EBP + -0x10) + 1;
      }
      else {
        iStack_38 = uVar8 - uVar1;
        FUN_0045ece0(unaff_EBP + -0x18);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iStack_38 = 0x4aa3aa;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
        iStack_38 = unaff_EBP + -0x2c;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          iStack_38 = 0x4aa3c4;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_38 = 0x4aa3d4;
        uVar6 = FUN_00449713();
        *(int **)(unaff_EBP + -0x1c) = &iStack_38;
        FUN_00448a17(uVar6);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0044974c();
        uVar6 = FUN_00448ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
        iStack_38 = 0x4aa403;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_38 = 0x4aa40e;
          FUN_00878dfb();
        }
        if (*(int *)(extraout_ECX + 0x94) <= *(int *)(unaff_EBP + -0x1c)) {
          iVar5 = *(int *)(unaff_EBP + -0x10);
          iStack_38 = 0x4aa428;
          piVar7 = (int *)FUN_0045f1e3();
          *piVar7 = iVar5 - uVar1;
          uVar8 = *(uint *)(unaff_EBP + -0x10);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
      }
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_38 = 0x4aa446;
      uVar4 = (*DAT_0097b584)();
      *(uint *)(unaff_EBP + -0x14) = uVar4;
    } while (*(uint *)(unaff_EBP + -0x10) < uVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


