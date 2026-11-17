/* FUN_0059d237 - 0x0059d237 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_0059d237(void)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uStack_18 = 0xf33;
  iStack_1c = unaff_EBP + -0x14;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_20 = 0x59d263;
  puVar1 = (undefined4 *)FUN_00679d22();
  uStack_18 = *(undefined4 *)(extraout_ECX + 0x39c);
  iStack_1c = *puVar1;
  iStack_20 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_24 = 0x59d279;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_18 = 0x59d287;
  FUN_00414ebb();
  uStack_18 = 0;
  iStack_1c = 0;
  iStack_20 = 0;
  uStack_24 = 0;
  *(undefined1 **)(unaff_EBP + -0x18) = auStack_28;
  FUN_00450368(unaff_EBP + -0x10);
  iVar2 = FUN_007db791();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_18 = 0x59d2b6;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2 != 7;
}


