/* FUN_0074da18 - 0x0074da18 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0074da18(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  uint uVar5;
  int iVar6;
  int unaff_EBP;
  int iStack_3c;
  int *piStack_38;
  int *local_34;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  iVar6 = *(int *)(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((((iVar6 == 0) || (*(int *)(extraout_ECX + 0x14) != *(int *)(unaff_EBP + 8))) ||
      (*(int *)(extraout_ECX + 0x18) != *(int *)(unaff_EBP + 0xc))) &&
     (((*(char **)(unaff_EBP + 0x10) != (char *)0x0 && (**(char **)(unaff_EBP + 0x10) != '\0')) ||
      ((*(char **)(unaff_EBP + 0x14) != (char *)0x0 && (**(char **)(unaff_EBP + 0x14) != '\0'))))))
  {
    iVar2 = *(int *)(unaff_EBP + 0x20);
    uVar5 = -(uint)(iVar2 != 0) & 0xfffffffc;
    iVar6 = uVar5 + 10;
    local_34 = (int *)((-(uint)(iVar2 != 0) & 6) + 1);
    piStack_38 = (int *)(unaff_EBP + -0x10);
    iStack_3c = 0x74daa5;
    FUN_00756efd();
    piStack_38 = (int *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_3c = 0x74dab6;
    local_34 = (int *)((-(uint)(iVar2 != 0) & 4) + 7);
    FUN_00756efd();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + 0x20) == 0) {
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 0x24);
      if (*(int *)(unaff_EBP + 0x24) == 0) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0x10e;
      }
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    iVar4 = uVar5 + 4 + iVar6;
    if ((*(char **)(unaff_EBP + 0x10) != (char *)0x0) && (**(char **)(unaff_EBP + 0x10) != '\0')) {
      local_34 = &DAT_00980690;
      piStack_38 = (int *)0x74daf8;
      FUN_00403191();
      local_34 = (int *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_38 = (int *)0x74db08;
      iStack_3c = FUN_00449713();
      *(int ***)(unaff_EBP + -0x20) = &piStack_38;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_3c = 0x74db20;
      FUN_0044974c();
      iStack_3c = 0x74db27;
      iVar1 = FUN_00448ebb();
      iVar1 = (-(uint)(iVar2 != 0) & 0xfffffffe) + 0x10 + iVar1;
      local_34 = (int *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_38 = (int *)0x74db36;
      local_34 = (int *)FUN_00402bc3();
      if ((int)local_34 < 0) {
        piStack_38 = (int *)0x74db41;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x14) < iVar1) {
        *(int *)(unaff_EBP + -0x14) = iVar1;
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        local_34 = (int *)0x80004003;
        piStack_38 = (int *)0x74db59;
        FUN_00878dfb();
      }
      local_34 = (int *)0x74db61;
      iVar2 = FUN_004a2734();
      iVar4 = iVar4 + 8 + iVar2;
    }
    if ((*(char **)(unaff_EBP + 0x14) == (char *)0x0) || (**(char **)(unaff_EBP + 0x14) == '\0')) {
      iVar2 = -4;
    }
    else {
      if (*(int *)(unaff_EBP + 0x20) == 0) {
        iVar2 = *(int *)(unaff_EBP + 0x24);
        if (iVar2 == 0) {
          iVar2 = 0x10e;
        }
      }
      else {
        iVar2 = *(int *)(unaff_EBP + -0x14);
      }
      local_34 = (int *)0x0;
      piStack_38 = (int *)0x0;
      iStack_3c = 0;
      *(int **)(unaff_EBP + -0x20) = &iStack_3c;
      FUN_0046fcc9(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uVar3 = FUN_00449713();
      iVar2 = FUN_00757d85(10,iVar2 + -0xf,iVar4,uVar3);
    }
    local_34 = (int *)0xffffffff;
    iStack_3c = *(int *)(unaff_EBP + -0x14);
    piStack_38 = (int *)(iVar4 + iVar2);
    FUN_0074d72a(2);
    if (*(int *)(unaff_EBP + 0x18) != 0) {
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) - (iVar4 + iVar2);
    }
    local_34 = *(int **)(unaff_EBP + 0x2c);
    piStack_38 = *(int **)(unaff_EBP + 0x1c);
    iStack_3c = *(int *)(unaff_EBP + 0x28);
    FUN_0075699b(unaff_EBP + 0xc,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
    local_34 = *(int **)(unaff_EBP + 0xc);
    iVar2 = extraout_ECX_00;
    if (local_34 != (int *)0x0) {
      piStack_38 = (int *)0x74dc02;
      (**(code **)(*local_34 + 8))();
      iVar2 = extraout_ECX_01;
    }
    if ((*(char **)(unaff_EBP + 0x10) != (char *)0x0) && (**(char **)(unaff_EBP + 0x10) != '\0')) {
      local_34 = *(int **)(unaff_EBP + -0x10);
      piStack_38 = *(int **)(unaff_EBP + -0x10);
      *(int ***)(unaff_EBP + 8) = &local_34;
      if (piStack_38 != (int *)0x0) {
        iStack_3c = 0x74dc26;
        (**(code **)(*piStack_38 + 4))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_38 = (int *)0x74dc32;
      piStack_38 = (int *)FUN_00449713();
      iStack_3c = iVar6;
      FUN_007585ac();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        local_34 = (int *)0x80004003;
        piStack_38 = (int *)0x74dc4b;
        FUN_00878dfb();
      }
      local_34 = (int *)0x74dc53;
      iVar2 = FUN_004a2734();
      iVar6 = iVar2 + 8 + iVar6;
      iVar2 = extraout_ECX_02;
    }
    if ((*(char **)(unaff_EBP + 0x14) != (char *)0x0) && (**(char **)(unaff_EBP + 0x14) != '\0')) {
      if (*(int *)(unaff_EBP + 0x20) == 0) {
        iVar4 = *(int *)(unaff_EBP + 0x24);
        if (iVar4 == 0) {
          iVar4 = 0x10e;
        }
      }
      else {
        iVar4 = *(int *)(unaff_EBP + -0x14);
      }
      local_34 = (int *)0x0;
      piStack_38 = (int *)0x1;
      *(int **)(unaff_EBP + 0x20) = &iStack_3c;
      iStack_3c = iVar2;
      FUN_0046fcc9(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uVar3 = FUN_00449713();
      FUN_00757d85(10,iVar4 + -0xf,iVar6,uVar3);
    }
    local_34 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (local_34 != (int *)0x0) {
      piStack_38 = (int *)0x74dcb9;
      (**(code **)(*local_34 + 8))();
    }
    local_34 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (local_34 != (int *)0x0) {
      piStack_38 = (int *)0x74dcca;
      (**(code **)(*local_34 + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_34 = (int *)0x74dcd6;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_34 = (int *)0x74dce2;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


