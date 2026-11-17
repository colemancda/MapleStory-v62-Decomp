/* ptr_005ba2e8 - 0x005ba2e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_005ba2e8(void)

{
  int iVar1;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *piStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5ba2ed;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_4 = 0x5ba2fd;
  FUN_00403191();
  iVar1 = *unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar1 == unaff_ESI) {
    uStack_4 = 0x5ba30f;
    FUN_00878dfb();
  }
  piStack_24 = (int *)*unaff_EBX;
  uStack_c = *(undefined4 *)(unaff_EBP + -0xc0);
  uStack_8 = *(undefined4 *)(unaff_EBP + -0xbc);
  iVar1 = *piStack_24;
  uStack_4 = *(undefined4 *)(unaff_EBP + -0xb8);
  uStack_1c = *(undefined4 *)(unaff_EBP + -0xa0);
  uStack_18 = *(undefined4 *)(unaff_EBP + -0x9c);
  uStack_14 = *(undefined4 *)(unaff_EBP + -0x98);
  uStack_20 = 0;
  *(int **)(unaff_EBP + 8) = piStack_24;
  uStack_10 = *(undefined4 *)(unaff_EBP + -0x94);
  piStack_28 = (int *)0x5ba33d;
  iVar1 = (**(code **)(iVar1 + 0x110))();
  if (iVar1 < 0) {
    piStack_28 = (int *)&DAT_00963df8;
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + 8));
  }
  piStack_28 = (int *)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_28 = (int *)FUN_00402bc3();
  if ((int)piStack_28 < 0) {
    FUN_00878dfb();
  }
  piStack_28 = (int *)(unaff_EBP + -0xc0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_28 = (int *)FUN_00402bc3();
  if ((int)piStack_28 < 0) {
    FUN_00878dfb();
  }
  piStack_28 = (int *)*unaff_EBX;
  *(int ***)(unaff_EBP + 8) = &piStack_28;
  if (piStack_28 != (int *)0x0) {
    (**(code **)(*piStack_28 + 4))(piStack_28);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00424e82();
  FUN_00427af9();
  piStack_28 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_28 != (int *)0x0) {
    (**(code **)(*piStack_28 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_28 = (int *)0x5ba3c8;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


