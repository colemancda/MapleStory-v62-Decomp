/* FUN_0046f440 - 0x0046f440 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0046f440(void)

{
  int unaff_EBP;
  int iStack_34;
  int iStack_30;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_18 = (int *)0x0;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0x3eb;
  uStack_28 = 0;
  iStack_30 = unaff_EBP + 0x10;
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_2c;
  iStack_34 = 0x46f46e;
  FUN_00433bdf();
  iStack_34 = unaff_EBP + 0xc;
  *(int **)(unaff_EBP + -0x14) = &iStack_30;
  FUN_0041160e();
  *(int **)(unaff_EBP + -0x18) = &iStack_34;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004059fd(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0046c293();
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    piStack_18 = (int *)0x0;
    uStack_1c = 0;
    uStack_20 = 0x46f4ad;
    FUN_0046f4ed();
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    piStack_18 = (int *)0x46f4b9;
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + 8) = 0;
  }
  piStack_18 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_18 != (int *)0x0) {
    uStack_1c = 0x46f4cc;
    (**(code **)(*piStack_18 + 8))();
  }
  piStack_18 = *(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
    uStack_1c = 0x46f4dd;
    (**(code **)(*piStack_18 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


