/* FUN_007ae808 - 0x007ae808 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ae808(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  FUN_00879bb8();
  uStack_14 = 0x7ae81e;
  uVar1 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  uStack_14 = 0x30b;
  iStack_18 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_1c = 0x7ae83b;
  puVar2 = (undefined4 *)FUN_00679d22();
  iStack_18 = *puVar2;
  iStack_1c = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_20 = 0x7ae84c;
  uStack_14 = uVar1;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_14 = 0x7ae85a;
  FUN_00414ebb();
  uStack_14 = 0;
  iStack_18 = 1;
  iStack_1c = 0;
  uStack_20 = 0;
  *(undefined1 **)(unaff_EBP + -0x14) = auStack_24;
  FUN_00450368(unaff_EBP + 8);
  FUN_007db3ad();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_14 = 0x7ae882;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


