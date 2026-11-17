/* FUN_004592e2 - 0x004592e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004592e2(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_14 = unaff_EBP + -0xd;
  iStack_18 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_1c = 0x45930a;
  FUN_0045f36d();
  iStack_14 = unaff_EBP + 0x14;
  iStack_18 = 0x459316;
  FUN_0045e10e();
  iStack_14 = *(undefined4 *)(unaff_EBP + 0x1c);
  iStack_18 = unaff_EBP + -0x14;
  uStack_1c = *(undefined4 *)(unaff_EBP + 0x10);
  uStack_20 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + 0x1c) = auStack_24;
  FUN_00450368(unaff_EBP + 8);
  uVar1 = FUN_00455c7c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_14 = 0x459348;
  FUN_0045f253();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_14 = 0x459353;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0x18) != 0) {
    iStack_14 = 0;
    iStack_18 = 0x459365;
    FUN_0045e794();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


