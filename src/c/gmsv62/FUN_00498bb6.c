/* FUN_00498bb6 - 0x00498bb6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00498bb6(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_28 = 0x498bd4;
  FUN_0087a1b0();
  iStack_28 = 0;
  uStack_2c = 0;
  puStack_30 = &stack0xffffffdc;
  uVar2 = FUN_00412335(*(undefined4 *)(extraout_ECX + 0x38));
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_30;
  FUN_004033a1(uVar2);
  iVar3 = unaff_EBP + -0x28;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  puStack_30 = (undefined1 *)0x498c15;
  iVar3 = FUN_004032b4();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *puVar1 = 0;
  if (iVar3 != 0) {
    iStack_28 = unaff_EBP + -0x10;
    uStack_2c = 0x498c2c;
    iStack_28 = FUN_0041a581();
    if ((iStack_28 < 0) && (iStack_28 != -0x7fffbffe)) {
      uStack_2c = 0x498c3d;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  iStack_28 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_2c = 0x498c50;
  iStack_28 = FUN_00402bc3();
  if (iStack_28 < 0) {
    uStack_2c = 0x498c5b;
    FUN_00878dfb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


