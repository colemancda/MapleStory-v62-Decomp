/* FUN_007d3201 - 0x007d3201 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007d3201(void)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int *piStack_10;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_10 = (int *)0x3bc;
  iStack_14 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_18 = 0x7d322d;
  piVar1 = (int *)FUN_00679d22();
  iStack_14 = *piVar1;
  piStack_10 = *(int **)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_18 = unaff_EBP + -0x10;
  iStack_1c = 0x7d3240;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_10 = (int *)0x7d324f;
  FUN_00414ebb();
  piStack_10 = *(int **)(unaff_EBP + 0x1c);
  iStack_18 = unaff_EBP + 0x18;
  *(int **)(unaff_EBP + 0x14) = &iStack_14;
  iStack_1c = 0x7d3261;
  FUN_00424dbc();
  iStack_1c = unaff_EBP + -0x10;
  *(int **)(unaff_EBP + 0x1c) = &iStack_18;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_20 = 0x7d3274;
  FUN_00450368();
  iStack_1c = *(undefined4 *)(unaff_EBP + 0x10);
  uStack_20 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + 0x14) = auStack_24;
  FUN_0046fc23(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar2 = FUN_007d2fea();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_10 = (int *)0x7d32a3;
  FUN_00414ebb();
  piStack_10 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_10 != (int *)0x0) {
    iStack_14 = 0x7d32b4;
    (**(code **)(*piStack_10 + 8))();
  }
  piStack_10 = *(int **)(unaff_EBP + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_10 != (int *)0x0) {
    iStack_14 = 0x7d32c5;
    (**(code **)(*piStack_10 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


