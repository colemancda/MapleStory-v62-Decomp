/* FUN_004e7932 - 0x004e7932 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e7932(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 uStack_2c;
  int *piStack_28;
  int *local_24;
  
  FUN_00879bb8();
  local_24 = (int *)0x0;
  piStack_28 = (int *)0x0;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_2c;
  FUN_00448a17(s_noSkill_00964eac);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = unaff_EBP + -0x28;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uStack_2c = 0x4e797b;
  iVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x14) = iVar1;
  if (iVar1 != 0) {
    local_24 = (int *)(unaff_EBP + -0x14);
    piStack_28 = (int *)0x4e7992;
    local_24 = (int *)FUN_00404b30();
    if (((int)local_24 < 0) && (local_24 != (int *)0x80004002)) {
      piStack_28 = (int *)0x4e79a3;
      FUN_00878dfb();
    }
  }
  local_24 = (int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_28 = (int *)0x4e79b0;
  local_24 = (int *)FUN_00402bc3();
  if ((int)local_24 < 0) {
    piStack_28 = (int *)0x4e79bb;
    FUN_00878dfb();
  }
  local_24 = *(int **)(unaff_EBP + -0x10);
  piStack_28 = *(int **)(unaff_EBP + -0x10);
  *(int ***)(unaff_EBP + -0x18) = &local_24;
  if (piStack_28 != (int *)0x0) {
    uStack_2c = 0x4e79d3;
    (**(code **)(*piStack_28 + 4))();
  }
  piStack_28 = (int *)0x4e79de;
  FUN_00517bba();
  local_24 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (local_24 != (int *)0x0) {
    piStack_28 = (int *)0x4e79ef;
    (**(code **)(*local_24 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


