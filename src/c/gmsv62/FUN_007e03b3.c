/* FUN_007e03b3 - 0x007e03b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_007e03b3(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004bc4fa();
  _DAT_0097c1b4 = -(uint)(extraout_ECX != (undefined4 *)0xffffff8b) & (uint)extraout_ECX;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x1e] = 0;
  FUN_00414f8b(unaff_EBP + 8);
  extraout_ECX[0x1f] = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[0x20] = *(undefined4 *)(unaff_EBP + 0x10);
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x2d] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  *extraout_ECX = &PTR_FUN_008f1dd0;
  extraout_ECX[1] = &PTR_FUN_008f1d84;
  extraout_ECX[2] = &PTR_FUN_008f1d80;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0xb82);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


