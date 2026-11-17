/* FUN_006e4ba4 - 0x006e4ba4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e4ba4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_44;
  undefined4 *puStack_40;
  
  FUN_00879bb8();
  iStack_44 = *(int *)(unaff_EBP + 0x10);
  puStack_40 = *(undefined4 **)(unaff_EBP + 0x14);
  piVar1 = *(int **)(extraout_ECX + 0xa80);
  *(int *)(unaff_EBP + -0x14) = iStack_44;
  *(undefined4 **)(unaff_EBP + -0x10) = puStack_40;
  if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(*piVar1 + 0x18))(), iVar3 == 0)) {
    puStack_40 = (undefined4 *)(-(uint)(extraout_ECX != 4) & extraout_ECX);
    *(undefined4 *)(extraout_ECX + 0x58) = 0;
    iStack_44 = 0x6e4bf1;
    FUN_00817f6e();
  }
  if (*(int *)(unaff_EBP + 8) == 0x201) {
    if (*(int *)(*(int *)(extraout_ECX + 0xa70) + 0x34) == 9) goto LAB_006e4ddf;
    puStack_40 = *(undefined4 **)(unaff_EBP + -0x10);
    iStack_44 = *(int *)(unaff_EBP + -0x14);
    FUN_006ea822(unaff_EBP + -0x24);
    iVar3 = *(int *)(unaff_EBP + -0x20);
    puStack_40 = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_44 = 0x6e4d96;
    iVar6 = FUN_006ea6f0();
    *(bool *)(unaff_EBP + 0x13) = iVar3 != *(int *)(iVar6 + 4);
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      puStack_40 = (undefined4 *)0x0;
      iStack_44 = 0x6e4dab;
      FUN_005e064d();
      *(undefined4 *)(unaff_EBP + -0x38) = 0;
    }
    if (*(char *)(unaff_EBP + 0x13) != '\0') {
      puStack_40 = *(undefined4 **)(unaff_EBP + -0x20);
      *(int **)(unaff_EBP + 0x10) = &iStack_44;
      FUN_005e05a2();
      FUN_006ea600();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = *(int *)(unaff_EBP + -0x20);
  }
  else {
    if ((*(int *)(unaff_EBP + 8) != 0x205) || (*(int *)(*(int *)(extraout_ECX + 0xa70) + 0x34) == 9)
       ) goto LAB_006e4ddf;
    puStack_40 = *(undefined4 **)(unaff_EBP + -0x10);
    iStack_44 = *(int *)(unaff_EBP + -0x14);
    FUN_006ea822(unaff_EBP + -0x34);
    puStack_40 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iStack_44 = 0x6e4c3d;
    iVar3 = FUN_006ea6f0();
    puVar2 = *(undefined4 **)(iVar3 + 4);
    puStack_40 = *(undefined4 **)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (puStack_40 == puVar2) {
      puStack_40 = (undefined4 *)*puStack_40;
      iStack_44 = 0x6e4c52;
      uVar4 = FUN_007b3eda();
    }
    else {
      *(int **)(unaff_EBP + 0x10) = &iStack_44;
      FUN_005e05a2();
      uVar4 = FUN_006ea600();
    }
    *(undefined4 *)(unaff_EBP + 0x10) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      puStack_40 = (undefined4 *)0x0;
      iStack_44 = 0x6e4c81;
      FUN_005e064d();
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
    }
    puStack_40 = (undefined4 *)0x0;
    iStack_44 = unaff_EBP + -0x14;
    FUN_00817e25();
    puStack_40 = (undefined4 *)0x88;
    iStack_44 = 0x6e4ca5;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + 0x14) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      puStack_40 = *(undefined4 **)(unaff_EBP + -0x10);
      iStack_44 = *(int *)(unaff_EBP + -0x14);
      iVar3 = FUN_006e1d10();
    }
    uVar5 = -(uint)(iVar3 != 0) & iVar3 + 8U;
    *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar5 != 0) & uVar5 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_40 = (undefined4 *)0x6e4ce3;
    FUN_006eab2c();
    puStack_40 = *(undefined4 **)(unaff_EBP + 0x10);
    iStack_44 = 2000;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_006e24c5();
    puStack_40 = (undefined4 *)0x6e4cff;
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x84);
      if (iVar3 == 0) {
        *(int **)(unaff_EBP + 0x10) = &iStack_44;
        iStack_44 = extraout_ECX_00;
        puStack_40 = (undefined4 *)extraout_ECX_00;
        FUN_006ea6f0(&iStack_44);
LAB_006e4d30:
        FUN_006e960c();
      }
      else if (iVar3 == 1) {
        puStack_40 = (undefined4 *)0x0;
        *(int **)(unaff_EBP + 0x10) = &iStack_44;
        iStack_44 = extraout_ECX_00;
        goto LAB_006e4d30;
      }
      *(undefined4 *)(extraout_ECX + 0xabc) = 1;
    }
    else {
      *(undefined4 *)(extraout_ECX + 0xab4) = 1;
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_40 = (undefined4 *)0x6e4d50;
    FUN_006eab49();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = *(int *)(unaff_EBP + -0x30);
  }
  if (iVar3 != 0) {
    puStack_40 = (undefined4 *)0x0;
    iStack_44 = 0x6e4ddf;
    FUN_005e064d();
  }
LAB_006e4ddf:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


