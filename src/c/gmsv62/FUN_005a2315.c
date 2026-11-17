/* FUN_005a2315 - 0x005a2315 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a2315(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int iVar3;
  undefined1 *puStack_50;
  int *piStack_4c;
  int *local_48;
  
  FUN_00879bb8();
  local_48 = (int *)0x0;
  piStack_4c = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_50;
  FUN_00679e4e(&puStack_50,0x5e4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = unaff_EBP + -0x34;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puStack_50 = (undefined1 *)0x5a2366;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    local_48 = (int *)(unaff_EBP + -0x18);
    piStack_4c = (int *)0x5a237c;
    local_48 = (int *)FUN_00404b30();
    if (((int)local_48 < 0) && (local_48 != (int *)0x80004002)) {
      piStack_4c = (int *)0x5a238d;
      FUN_00878dfb();
    }
  }
  local_48 = (int *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_4c = (int *)0x5a239a;
  local_48 = (int *)FUN_00402bc3();
  if ((int)local_48 < 0) {
    piStack_4c = (int *)0x5a23a5;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    local_48 = (int *)0x80004003;
    piStack_4c = (int *)0x5a23b4;
    FUN_00878dfb();
  }
  local_48 = (int *)0x5a23bc;
  iVar1 = FUN_0040cf4d();
  iVar3 = 0;
  *(int *)(unaff_EBP + -0x20) = iVar1;
  if (0 < iVar1) {
    do {
      local_48 = (int *)0x5a23d1;
      FUN_0087a1b0();
      local_48 = (int *)0x0;
      piStack_4c = (int *)0x0;
      puStack_50 = &stack0xffffffbc;
      uVar2 = FUN_00412335(iVar3);
      *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_50;
      FUN_004033a1(uVar2);
      iVar1 = unaff_EBP + -0x44;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_0040263d(iVar1);
      FUN_004048a4(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puStack_50 = (undefined1 *)0x5a240a;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x1c) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar1 != 0) {
        local_48 = (int *)(unaff_EBP + -0x1c);
        piStack_4c = (int *)0x5a2420;
        local_48 = (int *)FUN_00404b30();
        if (((int)local_48 < 0) && (local_48 != (int *)0x80004002)) {
          piStack_4c = (int *)0x5a2431;
          FUN_00878dfb();
        }
      }
      local_48 = (int *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_4c = (int *)0x5a243e;
      local_48 = (int *)FUN_00402bc3();
      if ((int)local_48 < 0) {
        piStack_4c = (int *)0x5a2449;
        FUN_00878dfb();
      }
      local_48 = *(int **)(unaff_EBP + -0x14);
      piStack_4c = *(int **)(unaff_EBP + -0x14);
      *(int ***)(unaff_EBP + -0x24) = &local_48;
      if (piStack_4c != (int *)0x0) {
        puStack_50 = (undefined1 *)0x5a2461;
        (**(code **)(*piStack_4c + 4))();
      }
      puStack_50 = (undefined1 *)0x5a2469;
      piStack_4c = (int *)iVar3;
      FUN_005a24a7();
      local_48 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (local_48 != (int *)0x0) {
        piStack_4c = (int *)0x5a247a;
        (**(code **)(*local_48 + 8))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_EBP + -0x20));
  }
  local_48 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (local_48 != (int *)0x0) {
    piStack_4c = (int *)0x5a2495;
    (**(code **)(*local_48 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


