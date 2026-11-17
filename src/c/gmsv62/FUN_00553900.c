/* FUN_00553900 - 0x00553900 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00553900(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  float10 fVar4;
  int iStack_28;
  undefined8 local_24;
  
  FUN_00879bb8();
  local_24 = CONCAT44(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + 8);
  iStack_28 = 0x55391b;
  FUN_004497f5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    local_24._4_4_ = 0;
  }
  else {
    local_24._4_4_ = 0;
    *(undefined8 **)(unaff_EBP + -0x10) = &local_24;
    iStack_28 = 0x7e1;
    FUN_00679e4e(&local_24);
    iStack_28 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d();
    uVar2 = FUN_004048a4();
    local_24 = CONCAT44(local_24._4_4_,uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_28 = 0x553965;
    uVar2 = FUN_00412550();
    **(undefined4 **)(unaff_EBP + 0xc) = uVar2;
    iStack_28 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      local_24 = CONCAT44(iVar3,0x553983);
      FUN_00878dfb();
    }
    local_24 = 0;
    *(int **)(unaff_EBP + 0xc) = &iStack_28;
    FUN_00679e4e(&iStack_28,0x919);
    iVar3 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d(iVar3);
    iStack_28 = FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    fVar4 = (float10)FUN_00434352();
    **(double **)(unaff_EBP + 0x10) = (double)fVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar3 < 0) {
      local_24 = CONCAT44(iVar3,0x5539db);
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      local_24 = CONCAT44(piVar1,0x5539ec);
      (**(code **)(*piVar1 + 8))();
    }
    local_24._4_4_ = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return local_24._4_4_;
}


