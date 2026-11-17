/* FUN_004e6840 - 0x004e6840 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e6840(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  int iVar2;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  
  FUN_00879bb8();
  local_20 = 0;
  iStack_24 = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_28;
  FUN_00679e4e(&uStack_28,0xe39);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = unaff_EBP + -0x24;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uStack_28 = 0x4e688f;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  local_20 = 0;
  *(int **)(unaff_EBP + -0x14) = &local_20;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iStack_24 = unaff_EBP + -0x10;
    uStack_28 = 0x4e68aa;
    iStack_24 = FUN_00404b30();
    if ((iStack_24 < 0) && (iStack_24 != -0x7fffbffe)) {
      uStack_28 = 0x4e68bb;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_24 = 0x4e68ca;
  iStack_24 = thunk_FUN_004f162d();
  uStack_28 = 0x4e68d6;
  FUN_00759e1f();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_20 = unaff_EBP + -0x24;
  iStack_24 = 0x4e68e3;
  local_20 = FUN_00402bc3();
  if (local_20 < 0) {
    iStack_24 = 0x4e68ee;
    FUN_00878dfb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


