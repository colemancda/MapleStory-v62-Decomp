/* FUN_0045828d - 0x0045828d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0045828d(void)

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
  iStack_18 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_1c = 0x4582b4;
  FUN_0045f36d();
  iStack_14 = 0;
  iStack_18 = unaff_EBP + -0x14;
  uStack_1c = *(undefined4 *)(unaff_EBP + 0x10);
  uStack_20 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + 0x10) = auStack_24;
  FUN_00450368(unaff_EBP + 8);
  uVar1 = FUN_00455c7c();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_14 = 0x4582e3;
  FUN_0045f253();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_14 = 0x4582ef;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


