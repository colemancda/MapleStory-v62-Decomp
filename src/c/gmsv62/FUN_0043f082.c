/* FUN_0043f082 - 0x0043f082 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0043f082(void)

{
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  int *piStack_8;
  
  FUN_00879bb8();
  piStack_8 = *(int **)(unaff_EBP + 0x18);
  *(undefined4 *)(extraout_ECX + 0xcf0) = *(undefined4 *)(unaff_EBP + 0x24);
  iStack_10 = unaff_EBP + 0x14;
  *(undefined4 **)(unaff_EBP + 0x24) = &uStack_c;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uStack_14 = 0x43f0b1;
  FUN_0041160e();
  iStack_10 = *(undefined4 *)(unaff_EBP + 0x20);
  uStack_14 = *(undefined4 *)(unaff_EBP + 0x1c);
  *(undefined1 **)(unaff_EBP + 0x24) = auStack_18;
  FUN_00433bdf(unaff_EBP + 0x10);
  FUN_0043df12();
  piStack_8 = *(int **)(unaff_EBP + 8);
  uStack_c = 0x43f0d8;
  FUN_0043f124();
  *(undefined4 *)(extraout_ECX + 0x4b4) = *(undefined4 *)(unaff_EBP + 0xc);
  piStack_8 = (int *)0x0;
  *(undefined4 *)(extraout_ECX + 0xca4) = *(undefined4 *)(unaff_EBP + 0x28);
  uStack_c = 0x43f0f3;
  FUN_0043f1a0();
  piStack_8 = *(int **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_8 != (int *)0x0) {
    uStack_c = 0x43f104;
    (**(code **)(*piStack_8 + 8))();
  }
  piStack_8 = *(int **)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_8 != (int *)0x0) {
    uStack_c = 0x43f115;
    (**(code **)(*piStack_8 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


