/* FUN_006c4542 - 0x006c4542 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c4542(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  
  FUN_00879bb8();
  piStack_14 = *(int **)(unaff_EBP + 8);
  uStack_18 = 0x6c455a;
  FUN_0081622a();
  piStack_14 = (int *)(unaff_EBP + 8);
  uStack_18 = 0x6c4565;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(extraout_ECX + 0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    piStack_14 = (int *)0x0;
    uStack_18 = 0;
    uStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0x7f;
    uStack_30 = 0x4a;
    uStack_34 = 0x6c458e;
    FUN_0053793e();
    uStack_34 = 0x6c4598;
    uStack_34 = thunk_FUN_0045e2eb();
    *(undefined1 **)(unaff_EBP + -0x14) = auStack_38;
    FUN_0046fc23(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0048b97b();
    FUN_005558b0();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_14 = (int *)0x6c45c3;
  FUN_00414ebb();
  piStack_14 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_14 != (int *)0x0) {
    uStack_18 = 0x6c45d4;
    (**(code **)(*piStack_14 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


