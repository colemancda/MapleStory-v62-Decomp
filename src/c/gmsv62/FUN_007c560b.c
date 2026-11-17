/* FUN_007c560b - 0x007c560b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c560b(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0x7c5628;
  uStack_1c = FUN_00793def();
  uStack_20 = 1000;
  uStack_24 = 5000;
  iStack_2c = extraout_ECX + 0xd74;
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_28;
  iStack_30 = 0x7c5645;
  FUN_00433bdf();
  iStack_30 = extraout_ECX + 0xd3c;
  *(int **)(unaff_EBP + -0x14) = &iStack_2c;
  FUN_0041160e();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_30 = 0x7c5663;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + -0x18) = &iStack_30;
  FUN_00448a17(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0046c293();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_14 = 0x7c5687;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


